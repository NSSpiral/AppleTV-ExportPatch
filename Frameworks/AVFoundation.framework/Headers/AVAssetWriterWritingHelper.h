/* Runtime dump - AVAssetWriterWritingHelper
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper <AVAssetWriterFigAssetWriterNotificationHandlerDelegate>
{
    AVWeakReference * _weakReference;
    struct OpaqueFigAssetWriter * _figAssetWriter;
    NSObject<OS_dispatch_queue> * _figAssetWriterAccessQueue;
    char _startSessionCalled;
    AVAssetWriterFigAssetWriterNotificationHandler * _notificationHandler;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startSessionAtSourceTime:(struct ?)arg0;
- (void)endSessionAtSourceTime:(struct ?)arg0;
- (void)cancelWriting;
- (void)finishWriting;
- (void)finishWritingWithCompletionHandler:(id /* block */)arg0;
- (AVAssetWriterWritingHelper *)initWithConfigurationState:(AVAssetWriterConfigurationState *)arg0;
- (AVAssetWriterWritingHelper *)initWithConfigurationState:(NSObject *)arg0 error:(id *)arg1;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(char)arg0 error:(NSError *)arg1;
- (id)figTrackReferences;
- (struct OpaqueFigAssetWriter *)_retainedFigAssetWriter;
- (void)dealloc;
- (int)status;
- (void)finalize;

@end
