#include <string.h>
#include <jni.h>


jstring  Java_com_example_jni_MyInterface_stringTestNdk
	(JNIEnv* env, jobject thiz){
		     return (*env)->NewStringUTF(env, "Hello from JNI !");
}

/*
 * Class:     com_example_jni_MainActivity
 * Method:    stringTestNdk2
 * Signature: ()Ljava/lang/String;
 */
jstring  Java_com_example_jni_MyInterface_stringTestNdk2(JNIEnv* env,
	jobject thiz){
		     return (*env)->NewStringUTF(env, "Hello from JNI !");
}

 
