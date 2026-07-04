/* Runtime dump - AVCaptureDeviceInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceInternal : NSObject
{
    int openRefCount;
    int configLockRefCount;
    int configLockPid;
    char usingDevice;
    AVCaptureDeviceInput * activeInput;
}

@end
