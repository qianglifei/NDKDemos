#include <jni.h>
#include <string>
//#include <>
#include <People.h>
#include <base.h>
extern "C"
JNIEXPORT jstring JNICALL
Java_com_bksx_mobile_terminal_ndkdemo_MainActivity_stringFromJNI(JNIEnv *env, jobject thiz) {
    // TODO: implement stringFromJNI()
    std::string hello = "Hello from C++";

    People people;
    return env->NewStringUTF(people.getString().c_str());
}