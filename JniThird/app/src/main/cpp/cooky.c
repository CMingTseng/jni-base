//
// Created by xhunmon on 2017/8/5.
//
#include <jni.h>

JNIEXPORT void JNICALL
Java_com_xhunmon_jnithird_JNI_callFromC(JNIEnv *env, jobject instance) {
//    1.获取字节码  jclass      (*FindClass)(JNIEnv*, const char*);
    jclass clazz = (*env)->FindClass(env, "com/xhunmon/jnithird/JNI");
//    2.获取方法名 jmethodID   ,参数4为方法签名：通过javap获取该类所用方法或成员属性的签名
// 用cmd在JniThird\app\build\intermediates\classes\debug路径下，执行javap -s com.xhunmon.jnithird.JNI
// (*GetMethodID)(JNIEnv*, jclass, const char*, const char*);
    jmethodID id = (*env)->GetMethodID(env, clazz, "callFromJava", "()V");
//    3. 调用java方法 void        (*CallVoidMethod)(JNIEnv*, jobject, jmethodID, ...);
    (*env)->CallVoidMethod(env,instance,id);
}