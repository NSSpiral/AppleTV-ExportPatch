/* Runtime dump - AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate : NSObject <AVAssetWriterFigAssetWriterNotificationHandlerDelegate, AVAssetWriterFinishWritingHelperDelegate>
{
    NSObject<OS_dispatch_semaphore> * _finishedWritingNotificationSemaphore;
    AVWeakReference * _weakReferenceToHelper;
    AVWeakReference * _weakReferenceToSelf;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)didReceiveFigAssetWriterNotificationWithSuccess:(char)arg0 error:(NSError *)arg1;
- (char)shouldHelperPrepareInputs;
- (void)finishWritingHelper:(NSObject *)arg0 didInitiateFinishWritingForFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1;
- (void)finishWritingHelperDidFail:(id)arg0;
- (void)finishWritingHelperDidCancelFinishWriting:(id)arg0;
- (void)dealloc;
- (AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate *)init;
- (void)finalize;

@end
