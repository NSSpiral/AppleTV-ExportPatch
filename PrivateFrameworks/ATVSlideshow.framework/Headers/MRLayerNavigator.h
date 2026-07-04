/* Runtime dump - MRLayerNavigator
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRLayerNavigator : MRLayer
{
    MCContainerNavigator * mContainer;
    NSMutableArray * mSublayers;
    NSMutableDictionary * mSublayersForPlugs;
    MRLayer * mNextSublayer;
    MRTransition * mCurrentTransition;
    char mIsTransitioning;
    char mTransitionWasAborted;
    MRLayer * mSublayerToPrecompute;
    id mPrecomputingTarget;
    unsigned int mPrecomputingType;
    double mTransitionStartTime;
    double mTransitionDuration;
    char mTransitionIsBackwards;
    NSDictionary * mTransitionChanges;
    NSMutableArray * mHistoryBack;
    NSMutableArray * mHistoryForth;
    char mBackAndForthIsEnabled;
    MRLayer * mCurrentSublayer;
    double mForcedTransitionTime;
}

@property (readonly) NSArray * sublayers;
@property (readonly) MRLayer * currentSublayer;
@property char backAndForthIsEnabled;
@property (nonatomic) double forcedTransitionTime;

- (char)isOpaque;
- (NSArray *)sublayers;
- (void)deactivate;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (double)goBack;
- (void)cleanup;
- (void)setPixelSize:(struct CGSize)arg0;
- (char)isLoadedForTime:(double)arg0;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (id)patchworkAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)isAlphaFriendly;
- (char)isInfinite;
- (void)beginMorphingToAspectRatio:(float)arg0 withDuration:(double)arg1;
- (void)endMorphing;
- (void)_unobservePlug;
- (void)depreactivate:(char)arg0;
- (MRLayerNavigator *)initWithPlug:(MCPlug *)arg0 andParameters:(NSDictionary *)arg1 inSuperlayer:(id)arg2;
- (void)_observePlugOnPreactivate;
- (void)_unobservePlugOnDepreactivate;
- (char)_isNative3D;
- (void)synchronizeTime;
- (void)_renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)hasSomethingToRender;
- (id)_retainedByUserRenderedImageAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)setForcedTransitionTime:(double)arg0;
- (double)goForth;
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
- (double)doTransition:(NSObject *)arg0 backwards:(char)arg1;
- (NSObject *)sublayerForID:(NSObject *)arg0;
- (double)finishTransition:(NSObject *)arg0;
- (double)abortTransition:(NSObject *)arg0;
- (double)doTransition:(NSObject *)arg0;
- (double)doTransitionBackwards:(id)arg0;
- (MRLayer *)currentSublayer;
- (char)backAndForthIsEnabled;
- (void)setBackAndForthIsEnabled:(char)arg0;
- (double)forcedTransitionTime;
- (id)_createSublayerForPlug:(id)arg0;
- (void)_observeSublayer:(id)arg0;
- (void)_precomputeAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;

@end
