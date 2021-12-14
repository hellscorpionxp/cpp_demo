/*
 * test1.c
 *
 *  Created on: 2021年10月11日
 *      Author: tony
 */

#include <stdio.h>
#include <stdlib.h>
#include <my_global.h>
#include <my_sys.h>
#include <mysql.h>

static char *host_name = NULL;
static char *user_name = NULL;
static char *password = NULL;
static char *db_name = NULL;
static char *query = NULL;
static unsigned int col_num = 0;
static unsigned int port_num = 0;
static char *socket_name = NULL;
static long unsigned int flags = 0;
static MYSQL *conn;

int main(int argc, char *argv[]) {
  if (argc > 1) {
    host_name = argv[1];
    user_name = argv[2];
    password = argv[3];
  }
  if (argc > 4) {
    db_name = argv[4];
    query = argv[5];
    col_num = atoi(argv[6]);
  }
  if (mysql_library_init(0, NULL, NULL)) {
    fprintf(stderr, "library init failed\n");
    exit(1);
  }
  conn = mysql_init(NULL);
  if (conn == NULL) {
    fprintf(stderr, "mysql init failed\n");
    exit(1);
  }
  if (mysql_real_connect(conn, host_name, user_name, password, db_name,
      port_num, socket_name, flags) == NULL) {
    fprintf(stderr, "connect failed\n");
    fprintf(stderr, "%u(%s): %s\n", mysql_errno(conn), mysql_sqlstate(conn),
        mysql_error(conn));
    exit(1);
  }
  if (mysql_query(conn, query) != 0) {
    fprintf(stderr, "query failed\n");
    fprintf(stderr, "%u(%s): %s\n", mysql_errno(conn), mysql_sqlstate(conn),
        mysql_error(conn));
  } else {
    MYSQL_RES *res_set;
    res_set = mysql_store_result(conn);
    if (res_set == NULL) {
      fprintf(stderr, "%u(%s): %s\n", mysql_errno(conn), mysql_sqlstate(conn),
          mysql_error(conn));
    } else {
      MYSQL_ROW row;
      while ((row = mysql_fetch_row(res_set)) != NULL) {
        fprintf(stdout, "%s\n", row[col_num]);
      }
      mysql_free_result(res_set);
    }
  }
  mysql_close(conn);
  mysql_library_end();

  return EXIT_SUCCESS;
}
