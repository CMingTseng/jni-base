package com.xhunmon.jnithird;

import android.util.Log;

/**
 * Created by xhunmon on 2017/8/5.
 */

public class JNI {
    static {
        System.loadLibrary("hui");
    }

    public native void callFromC();
    public native int call1(int j);
    public native String call2(String k);
    public native char call3(char l);
    public native long call4();

    public native String stringTest();

    public void callFromJava(){
        Log.i("xhunmon","===在java定义，在c中被调用");
    }
}
