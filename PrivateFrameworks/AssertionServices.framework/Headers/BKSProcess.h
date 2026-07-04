/* Runtime dump - BKSProcess
 * Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcess : BSBaseXPCClient
{
    int _pid;
    NSString * _bundlePath;
    NSObject<OS_dispatch_queue> * _clientQueue;
    char _workspaceLocked;
    char _connectedToExternalAccessories;
    char _nowPlayingWithAudio;
    char _recordingAudio;
    char _supportsTaskSuspension;
    <BKSProcessDelegate> * _delegate;
    int _visibility;
    int _terminationReason;
    int _taskState;
    long long _exitStatus;
}

@property (nonatomic) <BKSProcessDelegate> * delegate;
@property (nonatomic) int visibility;
@property (nonatomic) int terminationReason;
@property (nonatomic) long long exitStatus;
@property (nonatomic) char workspaceLocked;
@property (nonatomic) char connectedToExternalAccessories;
@property (nonatomic) char nowPlayingWithAudio;
@property (nonatomic) char recordingAudio;
@property (nonatomic) char supportsTaskSuspension;
@property (nonatomic) int taskState;
@property (readonly, nonatomic) double backgroundTimeRemaining;

+ (double)backgroundTimeRemaining;
+ (void)setTheSystemApp:(int)arg0 identifier:(NSString *)arg1;
+ (BKSProcess *)busyExtensionInstances:(id)arg0;

- (int)terminationReason;
- (void)dealloc;
- (void)setDelegate:(<BKSProcessDelegate> *)arg0;
- (BKSProcess *)init;
- (<BKSProcessDelegate> *)delegate;
- (void)setSupportsTaskSuspension:(char)arg0;
- (double)backgroundTimeRemaining;
- (void)_sendMessageType:(int)arg0 withMessage:(NSString *)arg1;
- (void)_handleSuspendedStateChanged:(NSNotification *)arg0;
- (void)_handleExpirationWarning:(id)arg0;
- (void)_handleDebuggingStateChanged:(NSNotification *)arg0;
- (void)setExitStatus:(long long)arg0;
- (char)workspaceLocked;
- (char)connectedToExternalAccessories;
- (char)nowPlayingWithAudio;
- (char)recordingAudio;
- (void)queue_handleMessage:(NSString *)arg0;
- (void)queue_connectionWasInterrupted;
- (void)queue_connectionWasCreated;
- (int)taskState;
- (void)setTaskState:(int)arg0;
- (void)setWorkspaceLocked:(char)arg0;
- (void)setRecordingAudio:(char)arg0;
- (void)setNowPlayingWithAudio:(char)arg0;
- (void)setConnectedToExternalAccessories:(char)arg0;
- (void)setTerminationReason:(int)arg0;
- (char)supportsTaskSuspension;
- (BKSProcess *)initWithPID:(int)arg0 bundlePath:(NSString *)arg1 visibility:(int)arg2 workspaceLocked:(char)arg3 queue:(NSObject *)arg4;
- (long long)exitStatus;
- (void)_sendMessageType:(int)arg0 withMessage:(NSString *)arg1 withReplyHandler:(/* block */ id)arg2 waitForReply:(id /* block */)arg3;
- (int)visibility;
- (void)setVisibility:(int)arg0;

@end
