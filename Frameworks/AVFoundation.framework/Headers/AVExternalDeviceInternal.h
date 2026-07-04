/* Runtime dump - AVExternalDeviceInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExternalDeviceInternal : NSObject
{
    struct OpaqueFigEndpoint * _figEndpoint;
    <AVExternalDeviceDelegate> * _delegate;
    AVWeakReference * _weakReference;
    NSArray * _HIDs;
    long _makeHIDsOnlyOnce;
    NSData * _MFiCertSerial;
    NSObject<OS_dispatch_queue> * _queue;
}

@end
