// Fill out your copyright notice in the Description page of Project Settings.
#include "UtilsLibrary.h"

#if PLATFORM_ANDROID || PLATFORM_IOS 
    #include "Android/AndroidJNI.h"
    #include "Android/AndroidApplication.h"
#endif

void UUtilsLibrary::SetMobileOrientationLandscape()
{
  #if PLATFORM_ANDROID || PLATFORM_IOS 
      JNIEnv* JE = FAndroidApplication::GetJavaEnv();
      jmethodID SetOrientationID = FJavaWrapper::FindMethod(JE, FJavaWrapper::GameActivityClassID, "setRequestedOrientation", "(I)V", false);
      FJavaWrapper::CallVoidMethod(JE, FJavaWrapper::GameActivityThis, SetOrientationID, 0);
  #else
  #endif 
}

void UUtilsLibrary::SetMobileOrientationPortrait()
{
  #if PLATFORM_ANDROID || PLATFORM_IOS 
      JNIEnv* JE = FAndroidApplication::GetJavaEnv();
      jmethodID SetOrientationID = FJavaWrapper::FindMethod(JE, FJavaWrapper::GameActivityClassID, "setRequestedOrientation", "(I)V", false);
      FJavaWrapper::CallVoidMethod(JE, FJavaWrapper::GameActivityThis, SetOrientationID, 1);
  #else
  #endif 
}
