/* Runtime dump - CAMTimelapseBackendController
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMTimelapseBackendController : NSObject <CAMNebulaDaemonProtocol>
{
    char __writingMovie;
    char __capturing;
    NSMutableArray * __sessionContexts;
    NSObject<OS_dispatch_queue> * __workQueue;
    CAMTimelapseMovieWriter * __movieWriter;
    CAMTimelapseState * __currentState;
}

@property (readonly, nonatomic) NSMutableArray * _sessionContexts;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * _workQueue;
@property (readonly, nonatomic) char _writingMovie;
@property (readonly, nonatomic) CAMTimelapseMovieWriter * _movieWriter;
@property (retain, nonatomic) CAMTimelapseState * _currentState;
@property (nonatomic) char _capturing;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (CAMTimelapseBackendController *)sharedInstance;

- (CAMTimelapseBackendController *)init;
- (void).cxx_destruct;
- (CAMTimelapseState *)_currentState;
- (void)_setCurrentState:(NSObject *)arg0;
- (void)_setCapturing:(char)arg0;
- (id)_getOrCreateSessionContextForTimelapseUUID:(id)arg0;
- (void)_updateSessionContext:(NSObject *)arg0 withState:(NSObject *)arg1;
- (void)_performPendingWork;
- (void)_dispatchToWorkQueueWithBlock:(id /* block */)arg0;
- (void)_updatePendingWorkFromDiskForceEndLastSession:(char)arg0;
- (char)_deleteItemAtPath:(NSString *)arg0;
- (void)_dispatchToWorkQueueAfterDelay:(double)arg0 withBlock:(id /* block */)arg1;
- (char)_isCameraRunning;
- (void)_permanentlyFailTimelapseUUID:(id)arg0;
- (char)_scheduleDelayedMovieWriteIfNeededForTimelapseUUID:(id)arg0;
- (void)_writeMovieForSessionContext:(NSObject *)arg0;
- (void)_dispatchToMainQueueWithBlock:(id /* block */)arg0;
- (void)_createPlaceholderAssetForState:(NSObject *)arg0;
- (struct CGAffineTransform)_frameTransformForState:(NSObject *)arg0;
- (void)_movieWrittenToFilePath:(NSString *)arg0 duration:(double)arg1 state:(NSObject *)arg2;
- (void)_reserveDummyFileForTimelapseUUID:(id)arg0 firstImageFilePath:(NSString *)arg1;
- (void)_notifyAssetsdOfIncomingMovieAtPath:(NSString *)arg0 duration:(double)arg1 state:(NSObject *)arg2;
- (void)startNebulaWithUUID:(NSString *)arg0;
- (void)resumeNebulaWithUUID:(NSString *)arg0;
- (void)updateNebulaWithUUID:(NSString *)arg0;
- (void)finishCaptureForNebulaWithUUID:(NSString *)arg0;
- (void)stopNebulaWithUUID:(NSString *)arg0;
- (void)updatePendingWorkFromDiskForceEndLastSession:(char)arg0;
- (void)handleClientConnection:(NSURLConnection *)arg0;
- (void)handleClientDisconnection;
- (NSMutableArray *)_sessionContexts;
- (NSObject<OS_dispatch_queue> *)_workQueue;
- (char)_writingMovie;
- (CAMTimelapseMovieWriter *)_movieWriter;
- (char)_isCapturing;

@end
