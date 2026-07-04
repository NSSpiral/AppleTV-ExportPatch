/* Runtime dump - AVAssetWriterAsynchronousFinishWritingDelegate
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterAsynchronousFinishWritingDelegate : NSObject <AVAssetWriterFigAssetWriterNotificationHandlerDelegate, AVAssetWriterFinishWritingHelperDelegate>
{
    id _handler;
    int _handlerCalled;
    AVAssetWriterFigAssetWriterNotificationHandler * _notificationHandler;
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
- (void)_callHandlerIfNotCalled;
- (void)dealloc;
- (AVAssetWriterAsynchronousFinishWritingDelegate *)initWithHandler:(id /* block */)arg0;

@end
