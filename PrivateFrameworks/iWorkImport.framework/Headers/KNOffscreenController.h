/* Runtime dump - KNOffscreenController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNOffscreenController : NSObject
{
    KNShow * mShow;
    KNPlaybackSession * mSession;
    KNAnimatedSlideView * mAnimator;
    struct CGSize mOutputSize;
    unsigned int mSlideIndex;
    char mFirstEvent;
    char mIsImageGenerationCancelled;
    CALayer * _baseLayer;
}

@property (readonly, nonatomic) KNShow * show;
@property (readonly, nonatomic) KNPlaybackSession * playbackSession;
@property (readonly, nonatomic) struct CGSize outputSize;
@property (readonly, nonatomic) unsigned int eventIndex;
@property (readonly, nonatomic) unsigned int eventCount;
@property (readonly, nonatomic) unsigned int slideIndex;
@property (readonly, nonatomic) unsigned int slideCount;
@property (readonly, nonatomic) KNAnimatedSlideView * animatedSlideView;
@property (readonly, nonatomic) int playMode;
@property (readonly, nonatomic) CALayer * baseLayer;
@property (readonly, nonatomic) KNSlide * currentSlide;
@property (readonly, nonatomic) KNSlideNode * currentSlideNode;

- (char)gotoFirstSlide;
- (KNSlideNode *)currentSlideNode;
- (char)gotoLastSlide;
- (int)playMode;
- (unsigned int)eventIndex;
- (KNOffscreenController *)initWithShow:(KNShow *)arg0 canvasDelegate:(<TSDCanvasDelegate> *)arg1 outputSize:(struct CGSize)arg2;
- (void)p_setAnimator:(id)arg0;
- (unsigned int)eventCount;
- (struct CGImage *)copyImageOfCurrentEventIgnoringBuildVisilibity:(char)arg0;
- (struct CGSize)outputSize;
- (KNOffscreenController *)initWithShow:(KNShow *)arg0 canvasDelegate:(<TSDCanvasDelegate> *)arg1;
- (char)gotoNextEvent;
- (char)gotoEventIndex:(unsigned int)arg0;
- (char)gotoSlideNode:(NSObject *)arg0 andEvent:(unsigned int)arg1;
- (void)generateImageOfCurrentEventWithCompletonHandler:(id /* block */)arg0;
- (void)drawCurrentEventIntoContext:(struct CGContext *)arg0 intoRect:(struct CGRect)arg1 ignoreBuildVisibility:(struct CGSize)arg2;
- (void)cancelImageGeneration;
- (unsigned int)slideIndex;
- (KNPlaybackSession *)playbackSession;
- (NSObject *)transitionRendererAtCurrentEvent;
- (KNAnimatedSlideView *)animatedSlideView;
- (CALayer *)baseLayer;
- (KNShow *)show;
- (void)dealloc;
- (KNSlide *)currentSlide;
- (char)gotoNextSlide;
- (char)gotoPreviousSlide;
- (unsigned int)slideCount;

@end
