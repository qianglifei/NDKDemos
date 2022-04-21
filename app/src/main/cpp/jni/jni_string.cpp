//
// Created by Administrator on 2022/4/21.
//

#include <jni.h>
#include <string>
//#include <>
#include <base.h>
#include <jni.h>
#include <jni.h>

extern "C"
JNIEXPORT void JNICALL
Java_com_bksx_mobile_terminal_ndkdemo_JNIString_stringMethod(JNIEnv* env,jobject thiz, jstring jstr) {

    // TODO: implement callNativeString()
    //获取java上层传到native层字符串
    const char * str = env->GetStringUTFChars(jstr,0);
    char buf[128];
    int len = env->GetStringLength(jstr);
    //获取字符串的部分内容，存贮到定义的buf中
    env->GetStringUTFRegion(jstr,0,len-1,buf);
    //释放缓存空间
    env->ReleaseStringUTFChars(jstr,str);

}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_bksx_mobile_terminal_ndkdemo_JNIString_callNativeString(JNIEnv *env, jobject thiz,jstring jstr) {
    // TODO: implement stringMethod()
    // 获取java层 传到native层字符串
    const char * str = env->GetStringUTFChars(jstr,0);
    //释放动态分配的字符串内存空间
    env->ReleaseStringUTFChars(jstr,str);
    //返回native层代码的字符串
    return env->NewStringUTF("this is C style string");
}