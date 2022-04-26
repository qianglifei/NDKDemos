package com.bksx.mobile.terminal.ndkdemo;

/**
 * @author :qlf
 */
public class JNIReferenceType {
    static {
        System.loadLibrary("native-lib");
    }

    public native String callNativeStringArray(String strArray[]);
}
