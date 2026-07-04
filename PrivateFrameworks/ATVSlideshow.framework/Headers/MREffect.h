/* Runtime dump - MREffect
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffect : NSObject <MRLoadable, MRRenderable>
{
    NSDictionary * mDescription;
    MRLayerEffect * mEffectLayer;
    MRImage * mOutputImage;
    NSString * mEffectID;
    NSDictionary * mAttributes;
    NSDictionary * mFlattenedAttributes;
    unsigned int mSeed;
    struct _NSRange mMultiImageSlideRange;
    char mNeedsToUpdateSlides;
    char mNeedsToUpdateTexts;
    char mNeedsToUpdateAttributes;
    char mIsNative3D;
    char mIsOpaque;
    char mIsAlphaFriendly;
    NSOperation * mPreloadOperation;
    struct CGSize mPixelSize;
    MRImage * mAccumulatedImage;
    char mNeedsToUpdateAccumulatedImage;
    double mDefaultPhaseInDuration;
    double mDefaultMainDuration;
    double mDefaultPhaseOutDuration;
    double mPhaseInDuration;
    double mMainDuration;
    double mPhaseOutDuration;
}

@property (readonly, nonatomic) char supportsDynamicExpansion;
@property (readonly, nonatomic) int typicalSlideBatchSize;
@property (readonly) NSString * effectID;
@property (retain, nonatomic) NSDictionary * attributes;
@property (nonatomic) struct CGSize pixelSize;
@property (nonatomic) char needsToUpdateSlides;
@property (nonatomic) char needsToUpdateTexts;
@property (nonatomic) struct _NSRange multiImageSlideRange;
@property (retain, nonatomic) MRImage * accumulatedImage;
@property (readonly, nonatomic) double phaseInDuration;
@property (readonly, nonatomic) double mainDuration;
@property (readonly, nonatomic) double phaseOutDuration;
@property (readonly, nonatomic) char isNative3D;
@property (readonly, nonatomic) char isOpaque;
@property (readonly, nonatomic) char isAlphaFriendly;
@property (readonly, nonatomic) char isInfinite;

+ (NSObject *)customTimingWithEffectID:(NSString *)arg0 effectAttributes:(NSDictionary *)arg1 slideInformation:(NSDictionary *)arg2 textInformation:(NSDictionary *)arg3 inAspectRatio:(float)arg4;
+ (MREffect *)defaultEffectAttributesWithEffectID:(NSString *)arg0 andSlideInformation:(id)arg1;
+ (NSObject *)retainedEffectWithEffectID:(NSString *)arg0 forEffectLayer:(BLRetouchEffectLayer *)arg1;
+ (char)hasCustomTiming;
+ (char)supportsDynamicExpansionForEffectID:(NSObject *)arg0;
+ (unsigned int)typicalSlideBatchSizeForEffectID:(NSObject *)arg0;

- (void)_unload;
- (void)dealloc;
- (char)isOpaque;
- (void)_cleanup;
- (NSDictionary *)attributes;
- (void)setAttributes:(NSDictionary *)arg0;
- (void)cleanup;
- (double)phaseInDuration;
- (double)phaseOutDuration;
- (double)mainDuration;
- (NSString *)effectID;
- (MREffect *)initWithEffectID:(NSString *)arg0;
- (void)setPhaseInDuration:(double)arg0 mainDuration:(double)arg1 phaseOutDuration:(double)arg2;
- (void)setMultiImageSlideRange:(struct _NSRange)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (void)retainByEffectLayer:(id)arg0;
- (void)releaseByEffectLayer:(id)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)_loadForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)loadWithArguments:(NSDictionary *)arg0;
- (void)loadForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2 now:(char)arg3;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (id)retainedByUserRenderedImageAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (id)patchworkAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)isNative3D;
- (char)isAlphaFriendly;
- (char)isInfinite;
- (char)isRetainedByEffectLayer;
- (double)_computePhaseTimeForTime:(double)arg0;
- (double)_computeTimeForPhaseTime:(double)arg0;
- (void)setLiveAttributes:(NSDictionary *)arg0;
- (void)setAccumulatedImage:(MRImage *)arg0;
- (void)beginMorphingToAspectRatio:(float)arg0 withDuration:(double)arg1;
- (void)endMorphing;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (struct CGSize)_maxSizeForTextElement:(NSObject *)arg0;
- (int)_maxLinesForTextElement:(NSObject *)arg0;
- (char)needsToUpdateSlides;
- (void)setNeedsToUpdateSlides:(char)arg0;
- (char)needsToUpdateTexts;
- (void)setNeedsToUpdateTexts:(char)arg0;
- (MRImage *)accumulatedImage;
- (struct _NSRange)multiImageSlideRange;
- (char)supportsDynamicExpansion;
- (int)typicalSlideBatchSize;
- (unsigned int)firstSlideIndexStillNeededAtTime:(double)arg0;
- (char)needsMoreSlidesAtTime:(double)arg0;
- (void)unload;
- (struct CGSize)pixelSize;
- (void)finalize;
- (void)cancelLoading;

@end
