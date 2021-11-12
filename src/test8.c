/*
 * test1.c
 *
 *  Created on: 2021年10月11日
 *      Author: tony
 */

#include <stdio.h>
#include <stdlib.h>
#include "com_tony_J2C.h"

JNIEXPORT void JNICALL Java_com_tony_J2C_printText(JNIEnv *env, jobject jo, jstring js) {
  const char *str;
  // linux
//  str = env->GetStringUTFChars(js, NULL);
  // windows
  str = (*env)->GetStringUTFChars(env, js, NULL);
  printf("from java call: %s\n", str);
  // linux
//  env->ReleaseStringUTFChars(js, str);
  // windows
  (*env)->ReleaseStringUTFChars(env, js, str);
}
