/* Runtime dump - CAMTimelapseController
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMTimelapseController : NSObject <CAMStillImageCaptureRequestDelegate, UIAlertViewDelegate>
{
    char __ignoringTimerCallbacksForTearDown;
    char __ignoringTimerCallbacksWaitingForCaptureResponse;
    char __backendRecoveryNeeded;
    char __previewStarted;
    CAMTimelapseState * __state;
    NSObject<OS_dispatch_source> * __captureTimer;
    NSCountedSet * __inFlightTimelapseUUIDs;
    NSMutableSet * __pendingCompletedStates;
    CAMLowDiskSpaceAlertView * __diskSpaceAlert;
}

@property (readonly, nonatomic) char capturing;
@property (readonly, nonatomic) NSDate * captureStartTime;
@property (readonly, nonatomic) CAMTimelapseState * _state;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> * _captureTimer;
@property (readonly, nonatomic) char _ignoringTimerCallbacksForTearDown;
@property (readonly, nonatomic) char _ignoringTimerCallbacksWaitingForCaptureResponse;
@property (readonly, nonatomic) NSCountedSet * _inFlightTimelapseUUIDs;
@property (readonly, nonatomic) NSMutableSet * _pendingCompletedStates;
@property (readonly, nonatomic) CAMLowDiskSpaceAlertView * _diskSpaceAlert;
@property (nonatomic) char _backendRecoveryNeeded;
@property (nonatomic) char _previewStarted;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (CAMTimelapseController *)sharedInstance;
+ (NSObject *)createPlaceholderAssetResponseForTimelapseState:(NSObject *)arg0;
+ (void)recoverFromCrashIfNeededForceEndLastSession:(char)arg0;
+ (NSObject *)_videoPreviewImageForTimelapseState:(NSObject *)arg0;

- (void)dealloc;
- (CAMTimelapseController *)init;
- (void)alertView:(UIAlertView *)arg0 didDismissWithButtonIndex:(int)arg1;
- (CAMTimelapseState *)_state;
- (void)_applicationDidEnterBackground:(NSNotification *)arg0;
- (void)_applicationWillEnterForeground:(NSNotification *)arg0;
- (void).cxx_destruct;
- (void)_previewStarted:(char)arg0;
- (char)isCapturing;
- (void)stopCapturingWithReasons:(int)arg0;
- (void)_deviceStarted:(id)arg0;
- (void)_sessionStarted:(AWDAirPlaySessionStarted *)arg0;
- (void)_sessionRuntimeErrored:(id)arg0;
- (void)_dismissDiskSpaceAlert;
- (void)_teardownCaptureTimer;
- (void)_restoreCaptureStateFromDisk;
- (void)_prepareForTimelapseCapture;
- (void)_setBackendRecoveryNeeded:(char)arg0;
- (void)_triggerBackendCrashRecoveryIfNeeded;
- (char)_backendRecoveryNeeded;
- (char)_previewStarted;
- (void)_updateFocusAndExposureForStartCapturing;
- (void)_startCaptureTimer;
- (char)_startCapturing;
- (void)_notifyAGGDForDidStartCapturingWithState:(CAMTimelapseState *)arg0;
- (void)_stopCapturingWithReasons:(int)arg0;
- (void)_setNewCaptureState;
- (char)_reserveDiskSpaceForTimelapseUUID:(id)arg0;
- (void)_saveStateToDisk:(id)arg0;
- (void)_updateFocusAndExposureForStopCapturing;
- (NSObject *)_createPlaceholderAssetForTimelapseState:(NSObject *)arg0;
- (void)_notifyAGGDForDidStopCapturingWithState:(CAMTimelapseState *)arg0;
- (void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg0 availableBytes:(long long)arg1;
- (void)_captureTimerFired;
- (void)_updateLocationIfNecessary;
- (char)_enqueueCaptureRequest;
- (void)_notifyInsufficientDiskSpaceForContinuingCapture;
- (void)_updateFocusLensPosition:(float)arg0 forTimelapseUUID:(id)arg1 forceUpdate:(char)arg2;
- (void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
- (void)_setPreviewStarted:(char)arg0;
- (void)captureController:(CAMCaptureController *)arg0 didGenerateResponse:(CAMStillImageCaptureResponse *)arg1 forStillImageRequest:(CAMStillImageCaptureRequest *)arg2 error:(NSError *)arg3;
- (void)captureController:(CAMCaptureController *)arg0 didFinishWriteForResponse:(CAMStillImageCaptureResponse *)arg1 forStillImageRequest:(CAMStillImageCaptureRequest *)arg2 error:(NSError *)arg3;
- (void)restoreConfiguration;
- (char)startCapturing;
- (NSDate *)captureStartTime;
- (NSObject<OS_dispatch_source> *)_captureTimer;
- (char)_ignoringTimerCallbacksForTearDown;
- (char)_ignoringTimerCallbacksWaitingForCaptureResponse;
- (NSCountedSet *)_inFlightTimelapseUUIDs;
- (NSMutableSet *)_pendingCompletedStates;
- (CAMLowDiskSpaceAlertView *)_diskSpaceAlert;

@end
