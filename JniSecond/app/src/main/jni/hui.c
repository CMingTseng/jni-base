//
// Created by xhunmon on 2017/8/3.
//
#include <stdio.h>
#include <jni.h>

jstring Java_com_xhunmon_jnisecond_MainActivity_stringHui(JNIEnv* env, jobject thiz){
    char* hui = "this is my hui";

    return (*env)->NewStringUTF(env,hui);
}

jint Java_com_xhunmon_jnisecond_MainActivity_intCal(JNIEnv* env,jobject clazz,jint i){
    int result = i + 100;
    return result;
}
