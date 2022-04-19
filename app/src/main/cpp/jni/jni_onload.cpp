#include <jni.h>
#include <jvm.h>
#include <base.h>
#include <android/log.h>
#define JAVA_CLASS "com/bksx/mobile/terminal/ndkdemo/JNIDynamicLoad"
#define TAG "JNITag"
jstring getMessage(JNIEnv *env,jobject jObject){
    return env->NewStringUTF("this is msg");
}

jint plus(JNIEnv *env,jobject jObject,int x,int y){
    return x + y;
}

static JNINativeMethod gMethods[] = {
        {"getNativeString", "()Ljava/lang/String;", (void*)getMessage},
        {"sum", "(II)I", (void*)plus},
};

/**
 * 对注册函数做一个封装
 * @param env
 * @param name
 * @param methods
 * @param nMethods
 * @return
 */
int registerNativeMethods(JNIEnv *env,
                          const char* name,
                          const JNINativeMethod* methods,
                          jint nMethods){
    jclass jcls;
    jcls = env->FindClass(name);
    if(jcls == nullptr){
        return JNI_FALSE;
    }
    if(env->RegisterNatives(jcls,methods,nMethods) < 0){
        return JNI_FALSE;
    }
    return JNI_TRUE;
}

JNIEXPORT int JNICALL JNI_OnLoad(JavaVM *vm,void *reserved){
    //env是一个函数表，我们可以利用他调用JNI中所有的函数
    //我们通过javavm，获取env
    JNIEnv *env;
    if(vm->GetEnv(reinterpret_cast<void **>(&env),JNI_VERSION_1_6) != JNI_OK){
        return JNI_FALSE;
    }
    registerNativeMethods(env,JAVA_CLASS,gMethods,2);
    __android_log_print(ANDROID_LOG_INFO, TAG, "helloWorld");
    return JNI_VERSION_1_6;
}