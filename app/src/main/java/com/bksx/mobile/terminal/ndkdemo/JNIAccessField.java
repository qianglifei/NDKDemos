package com.bksx.mobile.terminal.ndkdemo;

/**
 * @author :qlf
 */
public class JNIAccessField {
    static {
        System.loadLibrary("native-lib");
    }


    public static int num;

    public native void accessInstanceField(Animal animal);

    public native void accessStaticField(Animal animal);

    public static native void staticAccessInstanceField();
}
