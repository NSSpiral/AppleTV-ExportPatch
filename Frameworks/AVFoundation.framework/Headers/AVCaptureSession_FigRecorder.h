/* Runtime dump - AVCaptureSession_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureSession_FigRecorder : NSObject
{
    AVCaptureSessionInternal_FigRecorder * _internal;
}

@property (copy, nonatomic) NSString * sessionPreset;
@property (readonly, nonatomic) NSArray * inputs;
@property (readonly, nonatomic) NSArray * outputs;
@property (readonly, nonatomic) char running;
@property (readonly, nonatomic) char interrupted;
@property (nonatomic) char usesApplicationAudioSession;
@property (nonatomic) char automaticallyConfiguresApplicationAudioSession;
@property (readonly, nonatomic) struct OpaqueCMClock * masterClock;

+ (AVCaptureSession_FigRecorder *)allSessionPresets;
+ (AVCaptureSession_FigRecorder *)publicSessionPresets;
+ (char)automaticallyNotifiesObserversOfMasterClock;
+ (NSDictionary *)avCaptureSessionPlist;
+ (NSSet *)_createCaptureOptionsForPreset:(NSSet *)arg0 audioDevice:(AVCaptureFigAudioDevice_FigRecorder *)arg1 videoDevice:(AVCaptureFigVideoDevice_FigRecorder *)arg2 errorStatus:(int *)arg3;
+ (void)initialize;

- (NSArray *)outputs;
- (long)_stopRecording;
- (char)usesApplicationAudioSession;
- (char)automaticallyConfiguresApplicationAudioSession;
- (long)_startRecording;
- (char)isInterrupted;
- (NSObject *)outputWithClass:(Class)arg0;
- (NSArray *)inputs;
- (void)removeConnection:(NSURLConnection *)arg0;
- (struct OpaqueCMClock *)masterClock;
- (char)canAddOutput:(NSObject *)arg0;
- (char)canAddInput:(NSObject *)arg0;
- (void)addInput:(NSObject *)arg0;
- (void)_handleNotification:(NSNotification *)arg0 payload:(NSData *)arg1;
- (CALayer *)videoPreviewLayer;
- (NSString *)sessionPreset;
- (void)removeInput:(NSObject *)arg0;
- (void)_beginConfiguration;
- (char)canSetSessionPreset:(NSSet *)arg0;
- (void)_commitConfiguration;
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
- (void)beginConfiguration;
- (CALayer *)_connectionsForNewVideoPreviewLayer:(id)arg0;
- (char)canAddConnection:(NSURLConnection *)arg0;
- (void)commitConfiguration;
- (char)_canAddConnection:(NSURLConnection *)arg0 failureReason:(id *)arg1;
- (char)isBeingConfigured;
- (NSError *)_stopError;
- (void)_postRuntimeError:(NSError *)arg0;
- (void)_rebuildGraph;
- (void)setSessionPreset:(NSString *)arg0;
- (void)_stopAndTearDownGraph;
- (void)_setInterrupted:(char)arg0;
- (void)addInputWithNoConnections:(NSArray *)arg0;
- (void)addOutputWithNoConnections:(NSArray *)arg0;
- (void)addConnection:(NSURLConnection *)arg0;
- (void)setUsesApplicationAudioSession:(char)arg0;
- (void)setAutomaticallyConfiguresApplicationAudioSession:(char)arg0;
- (void)startRunning;
- (void)stopRunning;
- (NSMutableDictionary *)captureOptions;
- (NSDictionary *)_resolvedCaptureOptions;
- (NSMutableDictionary *)figRecorderOptions;
- (void)removeVideoPreviewLayer;
- (void)setVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg0;
- (void)_teardownFigRecorder;
- (void)_rebuildInternalCaptureOptions;
- (void)addVideoPreviewLayerConnection:(NSURLConnection *)arg0;
- (NSArray *)_liveConnections;
- (void)_removeVideoPreviewLayerConnectionsForInputPort:(NSObject *)arg0;
- (void)removeVideoPreviewLayerConnection:(NSURLConnection *)arg0;
- (void)addVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg0;
- (void)_doWillStart;
- (char)isPreviewing;
- (char)_stopPreviewing;
- (void)_rebuildLiveConnections;
- (void)_excludeOutputsForCaptureOptions:(NSDictionary *)arg0;
- (char)_sessionHasEnabledMovieFileOutput;
- (NSDictionary *)_addFastSwitchOptionsToCaptureOptions:(NSDictionary *)arg0 forDevice:(char)arg1 preset:(NSSet *)arg2;
- (NSDictionary *)_resolvedCaptureOptionsByApplyingOverridesToCaptureOptions:(NSDictionary *)arg0 preset:(NSSet *)arg1;
- (NSObject *)_currentDeviceWithMediaType:(NSObject *)arg0;
- (NSSet *)_resolvedCaptureOptionsForPreset:(NSSet *)arg0 audioDevice:(AVCaptureFigAudioDevice_FigRecorder *)arg1 videoDevice:(AVCaptureFigVideoDevice_FigRecorder *)arg2;
- (long)_createRecorderIfNeeded;
- (char)_figRecorderOldOptionsAreEqual:(id)arg0 toNewOptions:(NSDictionary *)arg1 livesourceOptionsAreEqual:(char *)arg2 frameRatesChanged:(char *)arg3;
- (char)_startPreviewing;
- (void)_doDidStart:(char)arg0;
- (NSNotification *)_errorForFigRecorderNotification:(NSNotification *)arg0;
- (void)_doDidStop:(id)arg0;
- (void)_doDidStartSources;
- (NSObject *)inputWithClass:(Class)arg0;
- (void)_removeConnection:(NSURLConnection *)arg0;
- (void)_addConnection:(NSURLConnection *)arg0;
- (void)dealloc;
- (AVCaptureSession_FigRecorder *)init;
- (char)isKindOfClass:(Class)arg0;
- (NSString *)description;
- (struct OpaqueFigRecorder *)recorder;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (char)isRunning;
- (void)_setRunning:(char)arg0;
- (void)removeOutput:(NSObject *)arg0;
- (void)addOutput:(NSObject *)arg0;

@end
