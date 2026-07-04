/* Runtime dump - KNTransitionRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNTransitionRenderer : KNAnimationRenderer
{
    NSMutableArray * mTextures;
    int mNumberOfAnimationsStarted;
    NSDictionary * mAnimatedLayers;
    char mOutgoingSlideRendered;
    char mShouldAnimateTransition;
    char mAnimationsRanToCompletion;
    NSDictionary * mAttributes;
    id mTransitionEndCallbackTarget;
    SEL mTransitionEndCallbackSelector;
    id mTransitionImmediateEndCallbackTarget;
    SEL mTransitionImmediateEndCallbackSelector;
    CALayer * mBackgroundLayer;
    TSDFPSCounter * mFPSCounter;
    NSString * mRenderWaitIdentifier;
}

- (KNTransitionRenderer *)initWithEffectClass:(Class)arg0 direction:(unsigned int)arg1 duration:(double)arg2 session:(NSObject *)arg3 attributes:(NSDictionary *)arg4 animatedSlideView:(KNAnimatedSlideView *)arg5;
- (void)setupPluginContext;
- (void)removeAnimationsAndFinish:(char)arg0;
- (void)updateAnimationsForLayerTime:(double)arg0;
- (void)forceRemoveAnimations;
- (void)pauseAnimationsAtTime:(double)arg0;
- (void)resumeAnimationsIfPausedAtTime:(double)arg0;
- (void)registerForTransitionEndCallback:(SEL)arg0 target:(NSObject *)arg1;
- (void)registerForTransitionImmediateEndCallback:(SEL)arg0 target:(NSObject *)arg1;
- (void)teardownTransitionIsExitingShow:(char)arg0;
- (void)renderOutgoingSlideAndPrecacheIncomingSlide;
- (void)animateWithDelay:(double)arg0;
- (void)p_checkForNullTransitions:(Class)arg0;
- (void)p_generateLayers;
- (void)waitUntilAsyncRenderingIsComplete;
- (void)setupLayerTreeForTransition;
- (void)renderSlideIndex:(unsigned int)arg0;
- (char)addAnimationsAtTime:(double)arg0 relativeToCurrentMediaTime:(char)arg1;
- (char)p_addAnimations:(id)arg0 atTime:(double)arg1 relativeToCurrentMediaTime:(char)arg2;
- (void)p_removeAnimationsOnAnimatedLayers;
- (void)p_reset;
- (void)dealloc;
- (NSString *)description;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (NEContentFilterPlugin *)plugin;
- (void)teardown;
- (void)stopAnimations;

@end
