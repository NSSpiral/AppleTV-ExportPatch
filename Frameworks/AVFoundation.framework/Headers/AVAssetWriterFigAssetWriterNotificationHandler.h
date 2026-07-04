/* Runtime dump - AVAssetWriterFigAssetWriterNotificationHandler
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterFigAssetWriterNotificationHandler : NSObject
{
    struct OpaqueFigAssetWriter * _figAssetWriter;
    int _didNotCallDelegate;
    AVWeakReference * _weakReferenceToSelf;
    AVWeakReference * _weakReferenceToDelegate;
    int _notificationHandlersAreRegistered;
}

@property (retain) AVWeakReference * weakReferenceToDelegate;

- (void)_handleServerDiedNotification;
- (void)_teardownNotificationHandlers;
- (void)_callDelegateIfNotCalledWithSuccess:(char)arg0 error:(NSError *)arg1;
- (AVAssetWriterFigAssetWriterNotificationHandler *)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg0 weakReferenceToDelegate:(AVWeakReference *)arg1;
- (void)_handleCompletedWritingNotification;
- (void)_handleFailedNotificationWithError:(NSError *)arg0;
- (AVWeakReference *)weakReferenceToDelegate;
- (void)setWeakReferenceToDelegate:(AVWeakReference *)arg0;
- (void)dealloc;
- (void)finalize;

@end
