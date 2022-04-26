#include <jni.h>

//
// Created by Administrator on 2022/4/25.
//

extern "C"
JNIEXPORT void JNICALL
Java_com_bksx_mobile_terminal_ndkdemo_JNIAccessField_accessInstanceField(JNIEnv *env,jobject thiz,
                                                                         jobject animal) {
    // TODO: implement accessInstanceField()

    jclass cls = env->GetObjectClass(animal);

    jfieldID fid = env->GetFieldID(cls,"name","Ljava/lang/String;");

    jstring str = env->NewStringUTF("this is a new name");

    env->SetObjectField(animal,fid,str);
}
extern "C"
JNIEXPORT void JNICALL
Java_com_bksx_mobile_terminal_ndkdemo_JNIAccessField_accessStaticField(JNIEnv *env, jobject thiz,
                                                                       jobject animal) {
    // TODO: implement accessStaticField()
    jclass cls = env->GetObjectClass(animal);
    jfieldID fid = env->GetStaticFieldID(cls,"num","I");

    int num = env->GetStaticIntField(cls,fid);

    env->SetStaticIntField(cls,fid,++num);
}


extern "C"
JNIEXPORT void JNICALL
Java_com_bksx_mobile_terminal_ndkdemo_JNIAccessField_staticAccessInstanceField(JNIEnv *env,jclass clazz) {
    // TODO: implement staticAccessInstanceField()
  //  jclass cls = env->GetObjectClass(animal);

    jfieldID fid  = env->GetStaticFieldID(clazz,"num","I");

    int num = env->GetStaticIntField(clazz,fid);

    env->SetStaticIntField(clazz,fid,4);
}


