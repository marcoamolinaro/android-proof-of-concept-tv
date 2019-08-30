#include <jni.h>
#include <string>

#include "/home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/inc/hello.h"
#include "/home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/inc/goodbye.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_mirakulo_astrotv_1dtv_1connector_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {

    // old :
    //std::string hello = "Hello from C++ ('native-lib')";
    //return env->NewStringUTF(hello.c_str());

    // new:
    int i = hello();
    int j = goodbye();
    return env->NewStringUTF( stringFromJNI() );

    // fake works !!
    return env->NewStringUTF(std::string("Esta mensagem é FAKE !").c_str());
}
