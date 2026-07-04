/* Runtime dump - AVCaptureSession
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureSession : NSObject
{
    AVCaptureSessionInternal * _internal;
}

@property (copy, nonatomic) NSString * sessionPreset;
@property (readonly, nonatomic) NSArray * inputs;
@property (readonly, nonatomic) NSArray * outputs;
@property (readonly, nonatomic) char running;
@property (readonly, nonatomic) char interrupted;
@property (nonatomic) char usesApplicationAudioSession;
@property (nonatomic) char automaticallyConfiguresApplicationAudioSession;
@property (readonly, nonatomic) struct OpaqueCMClock * masterClock;

+ (AVCaptureSession *)allSessionPresets;
+ (NSString *)dotString;
+ (AVCaptureSession *)publicSessionPresets;
+ (char)automaticallyNotifiesObserversOfMasterClock;
+ (char)automaticallyNotifiesObserversOfRunning;
+ (AVCaptureSession *)alloc;
+ (void)initialize;

- (NSArray *)outputs;
- (char)usesApplicationAudioSession;
- (char)automaticallyConfiguresApplicationAudioSession;
- (char)isInterrupted;
- (NSArray *)inputs;
- (void)removeConnection:(NSURLConnection *)arg0;
- (struct OpaqueCMClock *)masterClock;
- (char)canAddOutput:(NSObject *)arg0;
- (char)canAddInput:(NSObject *)arg0;
- (void)addInput:(NSObject *)arg0;
- (void)_handleNotification:(NSNotification *)arg0 payload:(NSData *)arg1;
- (NSString *)sessionPreset;
- (char)notifiesOnMainThread;
- (void)removeInput:(NSObject *)arg0;
- (long)_createFigCaptureSession;
- (void)_beginConfiguration;
- (void)_makeConfigurationLive:(id)arg0;
- (void)_teardownFigCaptureSession;
- (char)canSetSessionPreset:(NSSet *)arg0;
- (void)_commitConfiguration;
- (id)sessionVideoCaptureDevices;
- (char)_buildAndRunGraph;
- (void)_determineMasterClock;
- (void)_setMasterClock:(struct OpaqueCMClock *)arg0;
- (char)_canAddInput:(NSObject *)arg0 failureReason:(id *)arg1;
- (void)_addInputWithNoConnections:(NSArray *)arg0;
- (NSObject *)_connectionsForNewInputPort:(NSObject *)arg0;
- (void)_removeConnectionsForInputPort:(NSObject *)arg0;
- (char)_canAddOutput:(NSObject *)arg0 failureReason:(id *)arg1;
- (void)_addOutputWithNoConnections:(NSArray *)arg0;
- (NSObject *)_connectionsForNewOutput:(NSObject *)arg0;
- (char)_canAddVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg0 failureReason:(id *)arg1;
- (void)_removeAllPreviewLayers;
- (void)beginConfiguration;
- (CALayer *)_connectionsForNewVideoPreviewLayer:(id)arg0;
- (char)canAddConnection:(NSURLConnection *)arg0;
- (void)commitConfiguration;
- (char)_canAddConnection:(NSURLConnection *)arg0 failureReason:(id *)arg1;
- (char)isBeingConfigured;
- (NSError *)_stopError;
- (void)_postRuntimeError:(NSError *)arg0;
- (char)_stopFigCaptureSession;
- (void)_rebuildGraph;
- (char)videoHDREnabledForDevice:(NSObject *)arg0 format:(NSString *)arg1 sessionPreset:(NSString *)arg2;
- (void)setSessionPreset:(NSString *)arg0;
- (void)_updateDeviceActiveFormats;
- (void)_updateActiveConnections;
- (NSDictionary *)_figCaptureSessionConfiguration;
- (char)_startFigCaptureSession;
- (void)_stopAndTearDownGraph;
- (void)_notifySessionStopped;
- (void)_setInterrupted:(char)arg0;
- (void)_notifySessionStarted;
- (void)_notifyMediaServerdDied;
- (void)_handleDidStartRunningNotificationWithPayload:(NSData *)arg0;
- (void)_handleDidStopRunningNotificationWithPayload:(NSData *)arg0;
- (void)_handleConfigurationCommittedNotificationWithPayload:(NSData *)arg0;
- (void)_handleConfigurationDidBecomeLiveNotificationWithPayload:(NSData *)arg0;
- (void)_handleServerConnectionDiedNotification;
- (void)addInputWithNoConnections:(NSArray *)arg0;
- (void)addOutputWithNoConnections:(NSArray *)arg0;
- (void)_addVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg0;
- (void)_addVideoPreviewLayerWithNoConnection:(NSURLConnection *)arg0;
- (void)_removeVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg0;
- (void)addConnection:(NSURLConnection *)arg0;
- (void)setUsesApplicationAudioSession:(char)arg0;
- (void)setAutomaticallyConfiguresApplicationAudioSession:(char)arg0;
- (void)startRunning;
- (void)stopRunning;
- (void)_removeConnection:(NSURLConnection *)arg0;
- (void)_addConnection:(NSURLConnection *)arg0;
- (void)dealloc;
- (AVCaptureSession *)init;
- (NSString *)description;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (char)isRunning;
- (void)_setRunning:(char)arg0;
- (void)removeOutput:(NSObject *)arg0;
- (void)addOutput:(NSObject *)arg0;

@end
