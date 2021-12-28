#include <jni.h>
#include <string>

#include <people.h>
extern "C" JNIEXPORT jstring JNICALL
Java_com_bksx_mobile_terminal_ndkdemo_MainActivity_stringFromJNI(JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello QiangLiFei from C++";
    People people;
    return env->NewStringUTF(people.getString().c_str());
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_bksx_mobile_terminal_ndkdemo_MainActivity_getString(JNIEnv *env, jobject thiz) {
    // TODO: implement getString()

}