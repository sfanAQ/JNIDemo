package com.sfan.jni;

/**
 * Created by Sfan on 2017/10/9.
 */

public class JNIHelper {

    public static native String getMsg();

    public static native void setMsg(String msg);
}
