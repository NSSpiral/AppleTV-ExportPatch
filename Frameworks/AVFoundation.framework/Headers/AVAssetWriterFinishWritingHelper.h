/* Runtime dump - AVAssetWriterFinishWritingHelper
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper
{
    <AVAssetWriterFinishWritingHelperDelegate> * _delegate;
    struct OpaqueFigAssetWriter * _figAssetWriter;
    NSObject<OS_dispatch_queue> * _figAssetWriterAccessQueue;
    AVWeakReference * _weakReferenceToSelf;
}

- (void)cancelWriting;
- (struct OpaqueFigAssetWriter *)_retainedFigAssetWriter;
- (AVAssetWriterFinishWritingHelper *)initWithConfigurationState:(NSObject *)arg0 figAssetWriter:(struct OpaqueFigAssetWriter *)arg1 delegate:(<AVAssetWriterFinishWritingHelperDelegate> *)arg2;
- (void)performFinishOperation;
- (void)finishOperationCompletedSuccessfully:(char)arg0 withError:(NSError *)arg1;
- (void)dealloc;
- (int)status;
- (void)finalize;

@end
