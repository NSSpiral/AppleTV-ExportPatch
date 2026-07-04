/* Runtime dump - AVAssetWriterInputInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputInternal : NSObject
{
    AVWeakReference * weakReference;
    AVAssetWriterInputHelper * helper;
    NSObject<OS_dispatch_queue> * helperQueue;
    char attachedToPixelBufferAdaptor;
    char attachedToMetadataAdaptor;
    AVWeakReference * weakReferenceToAssetWriter;
    int numberOfAppendFailures;
    NSObject<OS_dispatch_queue> * appendFailureReadWriteQueue;
    AVAssetWriterInputPassDescriptionResponder * passDescriptionResponder;
}

@end
