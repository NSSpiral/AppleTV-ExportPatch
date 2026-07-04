/* Runtime dump - CAMDebugCaptureService
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMDebugCaptureService : CAMCaptureService
{
    char _debugLoggingEnabled;
    double __enqueueTime;
}

@property (nonatomic) char debugLoggingEnabled;
@property (readonly, nonatomic) double _enqueueTime;

- (void)requestWasEnqueued:(id)arg0;
- (void)responseWasGenerated:(id)arg0 error:(NSError *)arg1;
- (void)responseWasCompleted:(id)arg0 error:(NSError *)arg1;
- (void)willCaptureStillImageForRequest:(NSURLRequest *)arg0;
- (void)didCaptureStillImageForRequest:(NSURLRequest *)arg0;
- (void)receivedStillImageForRequest:(NSURLRequest *)arg0;
- (char)isDebugLoggingEnabled;
- (void)setDebugLoggingEnabled:(char)arg0;
- (double)_enqueueTime;

@end
