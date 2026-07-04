/* Runtime dump - AVCaptureDeviceInputInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceInputInternal : NSObject
{
    AVCaptureDevice * device;
    NSArray * ports;
    char ready;
    char authorizedForCamera;
    AVWeakReference * weakReference;
    AVWeakKeyValueObserverProxy * KVOProxy;
}

- (void)dealloc;

@end
