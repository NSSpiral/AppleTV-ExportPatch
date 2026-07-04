/* Runtime dump - MPLayerEffect
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPLayerEffect : MPLayer <MPEffectSupportPrivate, MPEffectSupport>
{
    MCContainerEffect * _layerEffect;
    NSString * _effectID;
    NSString * _presetID;
    NSMutableArray * _slides;
    NSMutableArray * _secondarySlides;
    NSMutableArray * _texts;
    NSMutableDictionary * _effectAttributes;
    int _randomSeed;
    NSObject<MZEffectTiming> * _effectTiming;
    char _supportsEffectTiming;
    char _skipEffectTiming;
    int _liveIndex;
}

@property (copy, nonatomic) NSString * effectID;
@property (copy, nonatomic) NSString * presetID;
@property (readonly, nonatomic) NSArray * slides;
@property (readonly, nonatomic) NSArray * texts;
@property (readonly, nonatomic) NSObject<MZEffectTiming> * effectTiming;

+ (MPLayerEffect *)layerEffectWithEffectID:(NSString *)arg0;
+ (MPLayerEffect *)layerEffectWithEffectID:(NSString *)arg0 andPaths:(NSArray *)arg1;
+ (MPLayerEffect *)layerEffectWithEffectID:(NSString *)arg0 andStrings:(id)arg1;
+ (MPLayerEffect *)layerEffectWithEffectID:(NSString *)arg0 strings:(NSArray *)arg1 paths:(NSArray *)arg2;

- (void)dealloc;
- (MPLayerEffect *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPLayerEffect *)init;
- (NSString *)description;
- (void)setDuration:(double)arg0;
- (MPLayerEffect *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)container;
- (void)setPhaseInDuration:(double)arg0;
- (void)setPhaseOutDuration:(double)arg0;
- (void)removeAllSlides;
- (NSArray *)slides;
- (double)fullDuration;
- (double)mainDuration;
- (void)addSlides:(MREffectMapSlides *)arg0;
- (int)liveIndex;
- (void)setLiveIndex:(int)arg0;
- (void)removeSlidesAtIndices:(id)arg0;
- (NSArray *)texts;
- (NSString *)effectID;
- (NSString *)presetID;
- (void)setPresetID:(NSString *)arg0;
- (void)removeAllTexts;
- (MPLayerEffect *)initWithEffectID:(NSString *)arg0;
- (void)addText:(NSString *)arg0;
- (MPLayerEffect *)initWithEffectID:(NSString *)arg0 andPaths:(NSArray *)arg1;
- (void)setEffectAttribute:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSMutableDictionary *)effectAttributes;
- (void)setSkipEffectTiming:(char)arg0;
- (void)setEffectAttributes:(NSMutableDictionary *)arg0;
- (void)createSecondarySlidesWithPaths:(NSArray *)arg0;
- (void)updateTiming;
- (void)createTextsWithStrings:(NSArray *)arg0 secondLineFactor:(float)arg1;
- (NSString *)effectAttributeForKey:(NSString *)arg0;
- (NSMutableArray *)secondarySlides;
- (void)setEffectID:(NSString *)arg0;
- (void)createTextsWithStrings:(NSArray *)arg0 secondLineFactor:(float)arg1 fillIn:(char)arg2;
- (void)removeAllSecondarySlides;
- (NSArray *)allSlides:(char)arg0;
- (MPLayerEffect *)initWithEffectID:(NSString *)arg0 andStrings:(id)arg1;
- (MPLayerEffect *)initWithEffectID:(NSString *)arg0 strings:(NSArray *)arg1 paths:(NSArray *)arg2;
- (void)createSlidesWithPaths:(NSArray *)arg0;
- (void)_updateTiming:(char)arg0;
- (void)copySlides:(id)arg0;
- (void)copySecondarySlides:(id)arg0;
- (void)copyTexts:(id)arg0;
- (void)applyFormattedAttributes;
- (NSDictionary *)_effectAttributes;
- (void)insertSlides:(id)arg0 atIndex:(int)arg1;
- (void)insertSecondarySlides:(id)arg0 atIndex:(int)arg1;
- (int)maxNumberOfSlides;
- (void)removeSecondarySlidesAtIndices:(id)arg0;
- (NSDictionary *)formattedAttributes;
- (double)lowestDisplayTime;
- (void)insertTexts:(id)arg0 atIndex:(int)arg1;
- (void)removeTextsAtIndices:(id)arg0;
- (void)moveSlidesFromIndices:(id)arg0 toIndex:(int)arg1;
- (void)addSecondarySlide:(id)arg0;
- (void)addSecondarySlides:(id)arg0;
- (void)addTexts:(id)arg0;
- (void)moveTextsFromIndices:(id)arg0 toIndex:(int)arg1;
- (int)randomSeed;
- (void)setRandomSeed:(int)arg0;
- (NSObject<MZEffectTiming> *)effectTiming;
- (int)maxNumberOfSecondarySlides;
- (id)slideForMCSlide:(id)arg0;
- (void)_updateEffectTiming;
- (id)slideInformation;
- (void)setLayerEffect:(MCContainerEffect *)arg0;
- (char)isLive;
- (void)addSlide:(MPSlide *)arg0;
- (void)finalize;

@end
