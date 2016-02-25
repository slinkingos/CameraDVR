/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_apical_cdr_UsbCam */

#ifndef _Included_com_apical_cdr_UsbCam
#define _Included_com_apical_cdr_UsbCam
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_apical_cdr_UsbCam
 * Method:    nativeInit
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_apical_cdr_UsbCam_nativeInit
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_apical_cdr_UsbCam
 * Method:    nativeClose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_apical_cdr_UsbCam_nativeClose
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_apical_cdr_UsbCam
 * Method:    nativeSetPreviewSurface
 * Signature: (JLjava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_com_apical_cdr_UsbCam_nativeSetPreviewSurface
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_apical_cdr_UsbCam
 * Method:    nativeSetPreviewTexture
 * Signature: (JLjava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_com_apical_cdr_UsbCam_nativeSetPreviewTexture
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_apical_cdr_UsbCam
 * Method:    nativeStartPreview
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_apical_cdr_UsbCam_nativeStartPreview
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_apical_cdr_UsbCam
 * Method:    nativeStopPreview
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_apical_cdr_UsbCam_nativeStopPreview
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif