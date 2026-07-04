/* Runtime dump - AVCustomVideoCompositorSession
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCustomVideoCompositorSession : NSObject
{
    struct OpaqueFigVideoCompositor * _figCustomCompositor;
    char _hasRegisteredFigCustomCompositorCallbacks;
    NSDictionary * _clientRequiredPixelBufferAttributes;
    AVWeakReference * _weakSelf;
    NSObject<OS_dispatch_queue> * _videoCompositionQ;
    AVVideoComposition * _videoComposition;
    char _videoCompositionDidChange;
    NSObject<OS_dispatch_queue> * _clientCustomCompositorQ;
    <AVVideoCompositing> * _clientCustomCompositor;
    NSObject<OS_dispatch_queue> * _clientErrorQ;
    NSError * _clientError;
    NSObject<OS_dispatch_queue> * _renderContextQ;
    AVVideoCompositionRenderContext * _renderContext;
    NSObject<OS_dispatch_queue> * _finishedRequestQ;
}

+ (AVCustomVideoCompositorSession *)sessionWithVideoComposition:(AVVideoComposition *)arg0 recyclingSession:(NSObject *)arg1;

- (void)setVideoComposition:(AVVideoComposition *)arg0;
- (<AVVideoCompositing> *)customVideoCompositor;
- (void)detachVideoComposition;
- (NSError *)getAndClearClientError;
- (struct OpaqueFigVideoCompositor *)_copyFigVideoCompositor;
- (AVCustomVideoCompositorSession *)initWithVideoComposition:(AVVideoComposition *)arg0;
- (long)_setupFigCallbacks;
- (void)_cleanupFigCallbacks;
- (void)_willDeallocOrFinalize;
- (void)request:(NSURLRequest *)arg0 didFinishWithComposedPixelBuffer:(struct __CVBuffer *)arg1;
- (void)request:(NSURLRequest *)arg0 didFinishWithError:(NSError *)arg1;
- (void)requestDidCancel:(id)arg0;
- (long)_compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg0 atTime:(struct ?)arg1 requiresRenderUsingSources:(id)arg2 withInstruction:(void *)arg3;
- (long)_customCompositorShouldCancelPendingFrames;
- (void)_customCompositorFigPropertyDidChange;
- (void)dealloc;
- (void)finalize;

@end
