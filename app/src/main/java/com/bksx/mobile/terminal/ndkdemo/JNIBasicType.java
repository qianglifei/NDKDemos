package com.bksx.mobile.terminal.ndkdemo;

/**
 *
 * @author :qlf
 * JNI 中基础数据类型转换
 *
 */
public class JNIBasicType {
    static {
        System.loadLibrary("basic-lib");
    }

    public native int callNativeInt(int num);

    private native byte callNativeByte(byte b);

    private native char callNativeChar(char c);

    private native short callNativeShort(short sh);

    private native long callNativeLong(long l);

    private native float callNativeFloat(float f);

    private native double callNativeDouble(double d);

    private native boolean callNativeBoolean(boolean b);
}
