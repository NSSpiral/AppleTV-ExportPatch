/* Runtime dump - AVAsynchronousVideoCompositionRequestInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAsynchronousVideoCompositionRequestInternal : NSObject
{
    AVWeakReference * _session;
    AVVideoCompositionRenderContext * _renderContext;
    struct OpaqueFigVideoCompositorFrame * _compositionFrame;
    struct ? _compositionTime;
    NSDictionary * _sourcesByTrackID;
    NSArray * _sourceTrackIDsInClientOrder;
    <AVVideoCompositionInstruction> * _instruction;
    char _isFinished;
}

@property (retain, nonatomic) AVWeakReference * session;
@property (retain, nonatomic) AVVideoCompositionRenderContext * renderContext;
@property (nonatomic) struct OpaqueFigVideoCompositorFrame * compositionFrame;
@property (nonatomic) struct ? compositionTime;
@property (retain, nonatomic) NSDictionary * sourcesByTrackID;
@property (retain, nonatomic) NSArray * sourceTrackIDsInClientOrder;
@property (retain, nonatomic) <AVVideoCompositionInstruction> * instruction;
@property (nonatomic) char isFinished;

- (struct OpaqueFigVideoCompositorFrame *)compositionFrame;
- (AVVideoCompositionRenderContext *)renderContext;
- (void)setRenderContext:(AVVideoCompositionRenderContext *)arg0;
- (void)setCompositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg0;
- (struct ?)compositionTime;
- (void)setCompositionTime:(struct ?)arg0;
- (NSDictionary *)sourcesByTrackID;
- (void)setSourcesByTrackID:(NSDictionary *)arg0;
- (NSArray *)sourceTrackIDsInClientOrder;
- (void)setSourceTrackIDsInClientOrder:(NSArray *)arg0;
- (<AVVideoCompositionInstruction> *)instruction;
- (void)setInstruction:(<AVVideoCompositionInstruction> *)arg0;
- (void)dealloc;
- (char)isFinished;
- (AVWeakReference *)session;
- (void)setSession:(AVWeakReference *)arg0;
- (void)setIsFinished:(char)arg0;

@end
