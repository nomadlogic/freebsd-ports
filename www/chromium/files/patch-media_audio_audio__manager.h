--- media/audio/audio_manager.h.orig	2017-01-26 00:49:15 UTC
+++ media/audio/audio_manager.h
@@ -84,7 +84,7 @@ class MEDIA_EXPORT AudioManager {
   // See http://crbug.com/422522
   static void EnableCrashKeyLoggingForAudioThreadHangs();
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
   // Sets the name of the audio source as seen by external apps. Only actually
   // used with PulseAudio as of this writing.
   static void SetGlobalAppName(const std::string& app_name);
