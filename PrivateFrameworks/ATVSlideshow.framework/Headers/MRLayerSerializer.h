/* Runtime dump - MRLayerSerializer
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRLayerSerializer : MRLayer
{
    MCContainerSerializer * mContainer;
    NSMutableArray * mSublayers;
    NSMutableDictionary * mSublayersForPlugs;
    MRLayer * mCurrentSublayer;
    MRLayer * mNextSublayer;
    MRTransition * mCurrentTransition;
    MRLayer * mSublayerForTransition;
    MRLayer * mSublayerToPrecompute;
    id mPrecomputingTarget;
    unsigned int mPrecomputingType;
    MRLayer * mLiveSourceSublayer;
    MRLayer * mLiveTargetSublayer;
    char mLiveTransitionIsBackwards;
    char mIsTransitioning;
    char mNeedsToUpdateSublayersTiming;
    char mNeedsToUpdateTransitionAttributes;
    char mHasWarnedDelegateAboutNearingEnd;
}

@property (readonly) NSArray * sublayers;

- (char)isOpaque;
- (NSArray *)sublayers;
- (void)deactivate;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)cleanup;
- (void)setPixelSize:(struct CGSize)arg0;
- (char)isLoadedForTime:(double)arg0;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (id)patchworkAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)isAlphaFriendly;
- (void)beginMorphingToAspectRatio:(float)arg0 withDuration:(double)arg1;
- (void)endMorphing;
- (char)supportsDynamicExpansion;
- (void)_unobservePlug;
- (void)depreactivate:(char)arg0;
- (MRLayerSerializer *)initWithPlug:(MCPlug *)arg0 andParameters:(NSDictionary *)arg1 inSuperlayer:(id)arg2;
- (void)_observePlugOnPreactivate;
- (void)_unobservePlugOnDepreactivate;
- (char)_isNative3D;
- (void)synchronizeTime;
- (void)_renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)hasSomethingToRender;
- (id)_retainedByUserRenderedImageAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)hasAudio;
- (NSObject *)actionHitAtPoint:(struct CGPoint)arg0 layer:(id *)arg1;
- (NSString *)actionForKey:(NSString *)arg0 recursive:(char)arg1;
- (CAMTimelapseState *)_currentState;
- (NSDictionary *)_dumpLayerWithOptions:(unsigned int)arg0;
- (void)_observePlug;
- (void)_setNeedsToRequestRebuildAudio:(char)arg0;
- (void)_unobserveSublayer:(id)arg0;
- (void)_deleteSublayer:(id)arg0;
- (void)endTransitionToSublayer;
- (void)_executeLayerCommandQueue;
- (void)_prerenderSublayersAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)_preprecomputeAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (NSObject *)sublayerHitAtPoint:(struct CGPoint)arg0 onlyIfHitElement:(char)arg1 localPoint:(struct CGPoint *)arg2;
- (NSObject *)sublayerForPlugObjectID:(NSObject *)arg0 recursive:(char)arg1;
- (id)_createSublayerForPlug:(id)arg0;
- (void)_observeSublayer:(id)arg0;
- (void)_precomputeAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)_unobserveSublayerOnDepreactivate:(id)arg0;
- (void)_observeSublayerOnPreactivate:(id)arg0;
- (void)_updateSublayersTiming;
- (double)transitionToSublayerAtIndex:(unsigned int)arg0;
- (NSObject *)sublayerAtIndex:(unsigned int)arg0;
- (double)transitionToNextSublayer;
- (double)transitionToPreviousSublayer;

@end
