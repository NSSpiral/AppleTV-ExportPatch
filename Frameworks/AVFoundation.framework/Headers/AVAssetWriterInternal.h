/* Runtime dump - AVAssetWriterInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInternal : NSObject
{
    AVWeakReference * weakReference;
    AVAssetWriterHelper * helper;
    NSObject<OS_dispatch_queue> * helperReadWriteQueue;
}

@end
