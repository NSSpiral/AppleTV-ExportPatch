/* Runtime dump - MRLayerEffect
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRLayerEffect : MRLayer
{
    MREffect * mEffect;
    NSMutableDictionary * mSlideProvidersForElementIDs;
    NSArray * mSlideProviders;
    NSMutableDictionary * mSlideShowTimeScripts;
    NSMutableDictionary * mTextsForElementIDs;
    MRSlideProvider * mMultiImageModelInput;
    unsigned long mIndexOfFirstMultiImageInput;
    struct _NSRange mMultiImageSlideRange;
    char mNeedsToUpdateEffect;
    char mNeedsToUpdateTiming;
    char mNeedsToUpdateSlides;
    char mNeedsToUpdateTexts;
    char mNeedsToUpdateEffectAttributes;
    char mNeedsToUpdateEffectLiveAttributes;
    char mSlidesAreReadonly;
    char mHasRequestedMoreSlides;
    MRImage * mAccumulatedImage;
    NSString * mTargetedElement;
    NSString * mEditedElement;
    MCContainerEffect * mContainer;
}

@property (readonly) MCContainerEffect * container;
@property (retain, nonatomic) MRImage * accumulatedImage;
@property (readonly) NSDictionary * slideProvidersForElementIDs;
@property (readonly) NSDictionary * textsForElementIDs;
@property (copy, nonatomic) NSString * targetedElement;
@property (copy, nonatomic) NSString * editedElement;
@property char asynchronousOperationsAreSuspended;

- (char)isOpaque;
- (MCContainerEffect *)container;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)cleanup;
- (NSDictionary *)_effectAttributes;
- (void)setPixelSize:(struct CGSize)arg0;
- (char)isLoadedForTime:(double)arg0;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (id)patchworkAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)isAlphaFriendly;
- (void)setAccumulatedImage:(MRImage *)arg0;
- (void)beginMorphingToAspectRatio:(float)arg0 withDuration:(double)arg1;
- (void)endMorphing;
- (struct CGSize)_maxSizeForTextElement:(NSObject *)arg0;
- (int)_maxLinesForTextElement:(NSObject *)arg0;
- (MRImage *)accumulatedImage;
- (char)supportsDynamicExpansion;
- (NSDictionary *)slideProvidersForElementIDs;
- (char)asynchronousOperationsAreSuspended;
- (void)_stallRenderer;
- (void)suspendAsynchronousOperations:(char)arg0;
- (NSDictionary *)textsForElementIDs;
- (struct CGSize)_rendererSize;
- (NSString *)editedElement;
- (char)_hideTextWhileEditing;
- (void)_unobservePlug;
- (MRLayerEffect *)initWithPlug:(MCPlug *)arg0 andParameters:(NSDictionary *)arg1 inSuperlayer:(id)arg2;
- (void)_observePlugOnPreactivate;
- (void)resumeOrPause:(char)arg0;
- (void)_unobservePlugOnDepreactivate;
- (char)_isNative3D;
- (char)_setStateValue:(id)arg0 forKey:(NSString *)arg1;
- (void)synchronizeTime;
- (void)_renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)hasSomethingToRender;
- (id)_retainedByUserRenderedImageAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)hasAudio;
- (NSObject *)actionHitAtPoint:(struct CGPoint)arg0 layer:(id *)arg1;
- (NSDictionary *)_dumpLayerWithOptions:(unsigned int)arg0;
- (void)_observePlug;
- (void)_cleanupProviders;
- (void)_rebuildEffect;
- (void)_updateSlides;
- (void)_updateTexts;
- (void)_updateEffectAttributes;
- (void)_updateTiming;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 localPoint:(struct CGPoint *)arg1;
- (void)setTargetedElement:(NSString *)arg0;
- (void)setEditedElement:(NSString *)arg0;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 localPoint:(struct CGPoint *)arg1 localTime:(double *)arg2;
- (char)getVerticesCoordinates:(id *)arg0 forElement:(struct CGPoint)arg1;
- (void)_requestRendering;
- (void)_effectTriggeredStop;
- (void)_addAudioPlayer:(AVAudioPlayer *)arg0;
- (void)_removeAudioPlayer:(AVAudioPlayer *)arg0;
- (NSString *)targetedElement;
- (double)pzrStart:(id)arg0;
- (double)pzrUpdate:(NSDate *)arg0;
- (double)pzrEnd:(id)arg0;
- (double)pzrCancel:(id)arg0;
- (void)unload;

@end
