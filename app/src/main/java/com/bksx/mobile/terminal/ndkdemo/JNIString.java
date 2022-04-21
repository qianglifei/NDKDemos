package com.bksx.mobile.terminal.ndkdemo;

/**
 * @author :qlf
 */
public class JNIString {
   static {
      System.loadLibrary("jni-string");
   }

   /**
    * @param str
    * @return
    */
   public native String callNativeString(String str);

   public native void stringMethod(String str);
}
