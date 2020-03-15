#include <jni.h>
#include <string>
extern "C" {
#include <../../jniLibs/include/libavcodec/avcodec.h>
}
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_ffmpegstudydemo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(avcodec_configuration());
}
