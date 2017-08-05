//
// Created by xhunmon on 2017/8/5.
//
#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_xhunmon_jnithird_JNI_stringTest(JNIEnv *env, jobject instance) {
    char* v = "i m vyvy l u";
    return (*env)->NewStringUTF(env, v);
}