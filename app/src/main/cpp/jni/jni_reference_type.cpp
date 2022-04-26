#include <jni.h>
#include <jni.h>

//
// Created by Administrator on 2022/4/25.
//
/**
 *  |java        |Native
 *  |boolean     |jboolean
 *  |byte        |jbyte
 *  |char        |jchar
 *  |short       |jshort
 *  |int         |jint
 *  |float       |jfloat
 *  |double      |jdouble
 *  |long        |jlong
 */



extern "C"
JNIEXPORT jstring JNICALL
Java_com_bksx_mobile_terminal_ndkdemo_JNIReferenceType_callNativeStringArray(JNIEnv *env,
                                                                             jobject thiz,
                                                                             jobjectArray str_array) {
    // TODO: implement callNativeStringArray()
    int len = env->GetArrayLength(str_array);

    jstring firstStr = static_cast<jstring>(env->GetObjectArrayElement(str_array,2));

    const char *str = env->GetStringUTFChars(firstStr,0);
    env->ReleaseStringUTFChars(firstStr,str);
    return env->NewStringUTF(str);
}