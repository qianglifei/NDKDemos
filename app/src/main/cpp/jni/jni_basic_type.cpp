#include <jni.h>
#include <android/log.h>

extern "C"
JNIEXPORT jint JNICALL
Java_com_bksx_mobile_terminal_ndkdemo_JNIBasicType_callNativeInt(JNIEnv *env, jobject thiz,jint num) {
    // TODO: implement callNativeInt()
    int c_num = num *2;
    return c_num;
}

extern "C"
JNIEXPORT jbyte JNICALL
Java_com_bksx_mobile_terminal_ndkdemo_JNIBasicType_callNativeByte(JNIEnv *env, jobject thiz,jbyte b) {
    // TODO: implement callNativeByte()
//    byte b_num = b *2;
//    return b_num;
    return 2;
}
extern "C"
JNIEXPORT jchar JNICALL
Java_com_bksx_mobile_terminal_ndkdemo_JNIBasicType_callNativeChar(JNIEnv *env, jobject thiz,jchar c) {
    // TODO: implement callNativeChar()
    char c_num = c *2;
    return c_num;
}

extern "C"
JNIEXPORT jshort JNICALL
Java_com_bksx_mobile_terminal_ndkdemo_JNIBasicType_callNativeShort(JNIEnv *env, jobject thiz,jshort sh) {
    // TODO: implement callNativeShort()
    short c_num = sh *2;
    return c_num;
}

extern "C"
JNIEXPORT jlong JNICALL
Java_com_bksx_mobile_terminal_ndkdemo_JNIBasicType_callNativeLong(JNIEnv *env, jobject thiz,jlong l) {
    // TODO: implement callNativeLong()
    long c_num = l *2;
    return c_num;
}

extern "C"
JNIEXPORT jfloat JNICALL
Java_com_bksx_mobile_terminal_ndkdemo_JNIBasicType_callNativeFloat(JNIEnv *env, jobject thiz,jfloat f) {
    // TODO: implement callNativeFloat()
    float c_num = f *2;
    return c_num;
}

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_bksx_mobile_terminal_ndkdemo_JNIBasicType_callNativeDouble(JNIEnv *env, jobject thiz,jdouble d) {
    // TODO: implement callNativeDouble()
    double c_num = d *2;
    return c_num;
}

extern "C"
JNIEXPORT jboolean JNICALL
Java_com_bksx_mobile_terminal_ndkdemo_JNIBasicType_callNativeBoolean(JNIEnv *env, jobject thiz,jboolean b) {
    // TODO: implement callNativeBoolean()
    //boolean c_num = !b;
    return false;
}