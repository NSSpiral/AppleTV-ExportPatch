/* Runtime dump - AVPlayerItemOutputInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemOutputInternal : NSObject
{
    AVWeakReference * weakReference;
    NSObject<OS_dispatch_queue> * timebaseReadWriteQueue;
    struct OpaqueCMTimebase * timebase;
}

@end
