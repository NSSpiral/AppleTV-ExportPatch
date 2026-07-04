/* Runtime dump - AVCaptureOutput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureOutput : NSObject
{
    AVCaptureOutputInternal * _outputInternal;
}

@property (readonly, nonatomic) NSArray * connections;

+ (void)initialize;

- (NSMutableArray *)liveConnections;
- (NSObject *)connectionWithMediaType:(NSObject *)arg0;
- (NSArray *)connectionMediaTypes;
- (int)changeSeed;
- (NSURLConnection *)_inputForConnection:(NSURLConnection *)arg0;
- (char)appliesMirroringWithPhysicalFlipForConnection:(NSURLConnection *)arg0;
- (char)appliesOrientationWithPhysicalRotationForConnection:(NSURLConnection *)arg0;
- (NSObject *)firstEnabledConnectionForMediaType:(NSObject *)arg0;
- (char)canAddConnectionForMediaType:(NSObject *)arg0;
- (NSObject *)transformedMetadataObjectForMetadataObject:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (struct CGRect)metadataOutputRectOfInterestForRect:(NSObject *)arg0;
- (struct CGRect)rectForMetadataOutputRectOfInterest:(id)arg0;
- (NSURLConnection *)addConnection:(NSURLConnection *)arg0 error:(id *)arg1;
- (void)removeConnection:(NSURLConnection *)arg0;
- (void)bumpChangeSeed;
- (NSURLConnection *)recommendedOutputSettingsForConnection:(NSURLConnection *)arg0 sourceSettings:(NSDictionary *)arg1 fileType:(NSObject *)arg2;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (NSString *)sinkID;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(id /* block */)arg0;
- (void)setSinkID:(NSString *)arg0;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)performBlockOnSessionNotifyingThread:(NSObject *)arg0;
- (char)hasRequiredOutputFormatForConnection:(NSURLConnection *)arg0;
- (struct CGSize)outputSizeForSourceFormat:(NSString *)arg0;
- (void)updateMetadataTransformForSourceFormat:(NSString *)arg0;
- (NSURLConnection *)_recommendedVideoOutputSettingsForConnection:(NSURLConnection *)arg0 sourceSettings:(NSDictionary *)arg1;
- (NSURLConnection *)_recommendedAudioOutputSettingsForConnection:(NSURLConnection *)arg0 sourceSettings:(NSDictionary *)arg1 fileType:(NSObject *)arg2;
- (int)requiredOutputFormatForConnection:(NSURLConnection *)arg0;
- (NSArray *)connections;
- (void)dealloc;
- (AVCaptureOutput *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSURLSession *)session;
- (void)setSession:(NSObject *)arg0;

@end
