/**
 *
 */
package com.tony;

/**
 * @author  tony
 * @version 1.0
 * @date    2021-11-09 09:37:53
 *
 */

public class J2C {

  private J2C() {
    System.loadLibrary("test8");
  }

  public native void printText(String msg);

  public static void main(String[] args) {
    try {
      new J2C().printText(args[0]);
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}
