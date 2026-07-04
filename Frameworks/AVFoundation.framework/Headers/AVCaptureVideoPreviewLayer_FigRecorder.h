/* Runtime dump - AVCaptureVideoPreviewLayer_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoPreviewLayer_FigRecorder : CALayer
{
    AVCaptureVideoPreviewLayerInternal_FigRecorder * _internal;
}

@property (retain, nonatomic) AVCaptureSession_FigRecorder * session;
@property (readonly, nonatomic) AVCaptureConnection_FigRecorder * connection;
@property (copy) NSString * videoGravity;
@property (readonly, nonatomic) char orientationSupported;
@property (nonatomic) int orientation;
@property (readonly, nonatomic) char mirroringSupported;
@property (nonatomic) char automaticallyAdjustsMirroring;
@property (nonatomic) char mirrored;

+ (NSObject *)layerWithSession:(AVCaptureSession_FigRecorder *)arg0;
+ (void)initialize;

- (NSMutableArray *)liveConnections;
- (void)_applyOverridesToCaptureOptions:(NSDictionary *)arg0;
- (NSArray *)connectionMediaTypes;
- (void)handleEnabledChangedForConnection:(NSURLConnection *)arg0;
- (void)didStopForSession:(NSObject *)arg0 error:(NSError *)arg1;
- (void)didStartForSession:(NSObject *)arg0;
- (int)changeSeed;
- (char)canAddConnectionForMediaType:(NSObject *)arg0;
- (struct CGRect)metadataOutputRectOfInterestForRect:(NSObject *)arg0;
- (struct CGRect)rectForMetadataOutputRectOfInterest:(id)arg0;
- (NSURLConnection *)addConnection:(NSURLConnection *)arg0 error:(id *)arg1;
- (void)removeConnection:(NSURLConnection *)arg0;
- (void)handleNotification:(NSNotification *)arg0 payload:(NSData *)arg1;
- (NSError *)notReadyError;
- (void)bumpChangeSeed;
- (float)previewRotationDegrees;
- (char)automaticallyAdjustsMirroring;
- (int)_orientation;
- (char)_automaticallyAdjustsMirroring;
- (char)_isMirrored;
- (void)_updateCaptureDeviceTransform;
- (char)isMirroringSupported;
- (char)isChromaNoiseReductionSupported;
- (struct CGRect)rectForCaptureDeviceFaceRect:(NSObject *)arg0;
- (char)isOrientationSupported;
- (void)setAutomaticallyAdjustsMirroring:(char)arg0;
- (void)setMirrored:(char)arg0;
- (char)isChromaNoiseReductionEnabled;
- (void)setChromaNoiseReductionEnabled:(char)arg0;
- (NSMutableArray *)activeConnections;
- (struct CGPoint)captureDevicePointOfInterestForPoint:(struct CGPoint)arg0;
- (struct CGPoint)pointForCaptureDevicePointOfInterest:(struct CGPoint)arg0;
- (struct CGRect)rectForMetadataObject:(NSObject *)arg0;
- (NSObject *)transformedMetadataObjectForMetadataObject:(NSObject *)arg0;
- (void)centerSublayer;
- (void)updateInternalStateForCaptureOptions:(NSDictionary *)arg0;
- (CALayer *)subLayer;
- (NSArray *)connections;
- (NSString *)videoGravity;
- (void)layerDidBecomeVisible:(char)arg0;
- (void)dealloc;
- (void)setHidden:(char)arg0;
- (AVCaptureVideoPreviewLayer_FigRecorder *)init;
- (char)isKindOfClass:(Class)arg0;
- (void)setBounds:(struct CGRect)arg0;
- (int)orientation;
- (NSObject<UIFormPeripheral> *)_input;
- (void)setOrientation:(int)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)setPaused:(char)arg0;
- (AVCaptureVideoPreviewLayer_FigRecorder *)initWithLayer:(CALayer *)arg0;
- (void)layoutSublayers;
- (AVCaptureConnection_FigRecorder *)connection;
- (AVCaptureSession_FigRecorder *)session;
- (void)setSession:(AVCaptureSession_FigRecorder *)arg0;
- (AVCaptureVideoPreviewLayer_FigRecorder *)initWithSession:(AVCaptureSession_FigRecorder *)arg0;
- (char)isMirrored;
- (char)isPaused;
- (void)setVideoGravity:(NSString *)arg0;

@end
