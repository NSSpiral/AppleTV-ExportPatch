/* Runtime dump - MRLayerParallelizer
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRLayerParallelizer : MRLayer
{
    MCContainerParallelizer * mContainer;
    NSMutableArray * mSublayers;
    NSMutableDictionary * mSublayersForPlugs;
    id mBackgroundColor;
    char mNeedsToUpdateSublayersOrdering;
    char mNeedsToUpdateBackgroundColor;
}

@property (readonly) NSArray * sublayers;
@property (readonly) float * backgroundColor;

- (float *)backgroundColor;
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
- (char)isInfinite;
- (void)beginMorphingToAspectRatio:(float)arg0 withDuration:(double)arg1;
- (void)endMorphing;
- (void)_unobservePlug;
- (void)depreactivate:(char)arg0;
- (void)setNeedsUpdateForPluggerOfSublayer:(id)arg0;
- (MRLayerParallelizer *)initWithPlug:(MCPlug *)arg0 andParameters:(NSDictionary *)arg1 inSuperlayer:(id)arg2;
- (void)_observePlugOnPreactivate;
- (void)_unobservePlugOnDepreactivate;
- (void)synchronizeTime;
- (void)_renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)hasSomethingToRender;
- (id)_retainedByUserRenderedImageAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)preactivate;
- (char)hasAudio;
- (NSObject *)actionHitAtPoint:(struct CGPoint)arg0 layer:(id *)arg1;
- (NSString *)actionForKey:(NSString *)arg0 recursive:(char)arg1;
- (CAMTimelapseState *)_currentState;
- (NSDictionary *)_dumpLayerWithOptions:(unsigned int)arg0;
- (void)_observePlug;
- (void)_setNeedsToRequestRebuildAudio:(char)arg0;
- (void)_unobserveSublayer:(id)arg0;
- (void)_deleteSublayer:(id)arg0;
- (void)_executeLayerCommandQueue;
- (NSObject *)sublayerHitAtPoint:(struct CGPoint)arg0 onlyIfHitElement:(char)arg1 localPoint:(struct CGPoint *)arg2;
- (NSObject *)sublayerForPlugObjectID:(NSObject *)arg0 recursive:(char)arg1;
- (NSObject *)sublayerForID:(NSObject *)arg0;
- (id)_createSublayerForPlug:(id)arg0;
- (void)_observeSublayer:(id)arg0;
- (void)_unobserveSublayerOnDepreactivate:(id)arg0;
- (char)_sublayersMakesOpaque;
- (void)_observeSublayerOnPreactivate:(id)arg0;
- (void)_updateSublayersOrdering;
- (double)phaseInSublayerForID:(NSObject *)arg0;
- (double)phaseOutSublayerForID:(NSObject *)arg0;

@end
