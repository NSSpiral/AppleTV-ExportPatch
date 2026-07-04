/* Runtime dump - AVCaptureVideoPreviewLayer
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoPreviewLayer : CALayer
{
    AVCaptureVideoPreviewLayerInternal * _internal;
}

@property (retain, nonatomic) AVCaptureSession * session;
@property (readonly, nonatomic) AVCaptureConnection * connection;
@property (copy) NSString * videoGravity;
@property (readonly, nonatomic) char orientationSupported;
@property (nonatomic) int orientation;
@property (readonly, nonatomic) char mirroringSupported;
@property (nonatomic) char automaticallyAdjustsMirroring;
@property (nonatomic) char mirrored;

+ (NSObject *)layerWithSession:(AVCaptureSession *)arg0;
+ (NSURLConnection *)layerWithSessionWithNoConnection:(NSURLConnection *)arg0;
+ (AVCaptureVideoPreviewLayer *)alloc;
+ (void)initialize;

- (NSMutableArray *)liveConnections;
- (NSArray *)connectionMediaTypes;
- (int)changeSeed;
- (char)canAddConnectionForMediaType:(NSObject *)arg0;
- (struct CGRect)metadataOutputRectOfInterestForRect:(NSObject *)arg0;
- (struct CGRect)rectForMetadataOutputRectOfInterest:(id)arg0;
- (NSURLConnection *)addConnection:(NSURLConnection *)arg0 error:(id *)arg1;
- (void)removeConnection:(NSURLConnection *)arg0;
- (void)bumpChangeSeed;
- (NSString *)sinkID;
- (void)_handleNotification:(NSNotification *)arg0 payload:(NSData *)arg1;
- (void)setSinkID:(NSString *)arg0;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (float)previewRotationDegrees;
- (char)automaticallyAdjustsMirroring;
- (AVCaptureVideoPreviewLayer *)initWithSessionWithNoConnection:(NSURLConnection *)arg0;
- (NSObject *)_initWithSession:(AVCaptureSession *)arg0 makeConnection:(char)arg1;
- (void)centerSublayer:(int)arg0;
- (void)setSessionWithNoConnection:(NSURLConnection *)arg0;
- (int)_orientation;
- (char)_automaticallyAdjustsMirroring;
- (char)_isMirrored;
- (void)_updateCaptureDeviceTransform;
- (char)isMirroringSupported;
- (char)isChromaNoiseReductionSupported;
- (void)_setSensorAndEstimatedPreviewSizes;
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
- (NSArray *)connections;
- (NSString *)videoGravity;
- (void)layerDidBecomeVisible:(char)arg0;
- (void)dealloc;
- (AVCaptureVideoPreviewLayer *)init;
- (void)setBounds:(struct CGRect)arg0;
- (int)orientation;
- (NSObject<UIFormPeripheral> *)_input;
- (void)setOrientation:(int)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)setPaused:(char)arg0;
- (AVCaptureVideoPreviewLayer *)initWithLayer:(CALayer *)arg0;
- (void)layoutSublayers;
- (AVCaptureConnection *)connection;
- (AVCaptureSession *)session;
- (void)setSession:(AVCaptureSession *)arg0;
- (AVCaptureVideoPreviewLayer *)initWithSession:(AVCaptureSession *)arg0;
- (char)isMirrored;
- (char)isPaused;
- (void)setVideoGravity:(NSString *)arg0;

@end
