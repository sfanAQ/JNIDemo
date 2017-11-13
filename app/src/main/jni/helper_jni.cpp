//
// Created by Sfan on 2017/10/9.
//
//自己创建一个c文件，实现自己定义的native方法，也就是.h文件中的方法
//引入自己生成的.h头文件

/**
 * 对于#include "filename"与包含该指令的文件相同的目录中的预处理程序搜索，然后像for #include <filename>。此方法通常用于包含程序员定义的头文件。
 * 对于#include <filename>预处理器以实现相关的方式进行搜索，通常在由编译器/ IDE预先指定的搜索目录中。此方法通常用于包含标准库头文件。
 */
#include "com_sfan_jni_JNIHelper.h"
#include <iostream>

using namespace std;

//返回一个字符串
JNIEXPORT jstring JNICALL Java_com_sfan_jni_JNIHelper_getMsg
        (JNIEnv *env, jclass jobj) {
    std::string hello = "Hello World!";
    return env->NewStringUTF(hello.c_str());
}

//传入一个字符串
JNIEXPORT void JNICALL Java_com_sfan_jni_JNIHelper_setMsg
        (JNIEnv *env, jclass jobj, jstring msg) {
}