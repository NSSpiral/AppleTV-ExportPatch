/* Runtime dump - AVCaptureOutput_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureOutput_FigRecorder : NSObject
{
    AVCaptureOutputInternal_FigRecorder * _outputInternal;
}

@property (readonly, nonatomic) NSArray * connections;

+ (void)initialize;

- (NSMutableArray *)liveConnections;
- (NSObject *)connectionWithMediaType:(NSObject *)arg0;
- (void)_applyOverridesToCaptureOptions:(NSDictionary *)arg0;
- (void)handleEnabledChangedForConnection:(NSURLConnection *)arg0;
- (void)didStopForSession:(NSObject *)arg0 error:(NSError *)arg1;
- (void)didStartForSession:(NSObject *)arg0;
- (int)changeSeed;
- (NSURLConnection *)_inputForConnection:(NSURLConnection *)arg0;
- (struct CGSize)outputSizeForCaptureOptions:(NSDictionary *)arg0;
- (char)appliesMirroringWithPhysicalFlipForConnection:(NSURLConnection *)arg0;
- (char)appliesOrientationWithPhysicalRotationForConnection:(NSURLConnection *)arg0;
- (void)updateMetadataTransformForCaptureOptions:(NSDictionary *)arg0;
- (NSObject *)firstEnabledConnectionForMediaType:(NSObject *)arg0;
- (char)canAddConnectionForMediaType:(NSObject *)arg0;
- (NSObject *)transformedMetadataObjectForMetadataObject:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (struct CGRect)metadataOutputRectOfInterestForRect:(NSObject *)arg0;
- (struct CGRect)rectForMetadataOutputRectOfInterest:(id)arg0;
- (NSURLConnection *)addConnection:(NSURLConnection *)arg0 error:(id *)arg1;
- (void)removeConnection:(NSURLConnection *)arg0;
- (void)didStartForSessionWithoutGraphRebuild:(id)arg0;
- (void)handleNotification:(NSNotification *)arg0 payload:(NSData *)arg1;
- (NSError *)notReadyError;
- (void)bumpChangeSeed;
- (NSArray *)connections;
- (void)dealloc;
- (AVCaptureOutput_FigRecorder *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSURLSession *)session;
- (void)setSession:(NSObject *)arg0;

@end
