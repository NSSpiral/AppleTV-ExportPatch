/* Runtime dump - BWFigCaptureDeviceVendor
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigCaptureDeviceVendor : NSObject

+ (void)initialize;
+ (void)_setupDeviceCloseTimer;
+ (void)powerOnDefaultVideoDevice;
+ (struct OpaqueFigCaptureDevice *)copyDefaultVideoDeviceWithStealingBehavior:(int)arg0;
+ (struct OpaqueFigCaptureStream *)copyStreamWithPosition:(int)arg0 forDevice:(struct OpaqueFigCaptureDevice *)arg1;
+ (void)takeBackVideoDevice:(struct OpaqueFigCaptureDevice *)arg0;
+ (void)invalidateVideoDevice:(struct OpaqueFigCaptureDevice *)arg0;
+ (char)activeDeviceEquals:(struct OpaqueFigCaptureDevice *)arg0;
+ (char)videoCaptureDeviceFirmwareIsLoaded;

@end
