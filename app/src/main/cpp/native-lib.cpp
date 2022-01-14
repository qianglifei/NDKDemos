#include <jni.h>
#include <string>
//#include <>
#include <People.h>
//#include "people/People.h"
//#include "people/People.h"
extern "C" JNIEXPORT jstring JNICALL
Java_bksx_mobile_terminal_ndkdemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    People people;
    return env->NewStringUTF(people.getString().c_str());
}