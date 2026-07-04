/* Runtime dump - AVAsynchronousVideoCompositionRequest
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAsynchronousVideoCompositionRequest : NSObject <NSCopying>
{
    AVAsynchronousVideoCompositionRequestInternal * _internal;
}

@property (readonly, nonatomic) AVVideoCompositionRenderContext * renderContext;
@property (readonly, nonatomic) struct ? compositionTime;
@property (readonly, nonatomic) NSArray * sourceTrackIDs;
@property (readonly, nonatomic) <AVVideoCompositionInstruction> * videoCompositionInstruction;

- (<AVVideoCompositionInstruction> *)videoCompositionInstruction;
- (void)_willDeallocOrFinalize;
- (struct OpaqueFigVideoCompositorFrame *)compositionFrame;
- (AVAsynchronousVideoCompositionRequest *)initUsingSession:(NSObject *)arg0 withRenderContext:(AVVideoCompositionRenderContext *)arg1 compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg2 atTime:(struct ?)arg3 usingSources:(id)arg4 instruction:(<AVVideoCompositionInstruction> *)arg5;
- (AVVideoCompositionRenderContext *)renderContext;
- (struct ?)compositionTime;
- (NSArray *)sourceTrackIDs;
- (struct __CVBuffer *)sourceFrameByTrackID:(int)arg0;
- (void)finishWithComposedVideoFrame:(struct __CVBuffer *)arg0;
- (void)finishCancelledRequest;
- (void)dealloc;
- (AVAsynchronousVideoCompositionRequest *)copyWithZone:(struct _NSZone *)arg0;
- (void)finishWithError:(NSError *)arg0;
- (void)finalize;

@end
