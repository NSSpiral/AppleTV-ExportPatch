/* Runtime dump - MCContainerEffect
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCContainerEffect : MCContainer <MCActionSupport>
{
    NSMutableArray * mSlides;
    NSMutableArray * mTexts;
    NSMutableDictionary * mActions;
    NSMutableDictionary * mEffectAttributes;
    char mIsLive;
    NSString * mEffectID;
}

@property (readonly) NSDictionary * actions;
@property (readonly, nonatomic) unsigned int countOfActions;
@property (readonly) NSSet * slides;
@property (readonly) NSArray * orderedSlides;
@property (readonly, nonatomic) unsigned int countOfSlides;
@property (readonly, nonatomic) unsigned int nextAvailableSlideIndex;
@property (readonly) NSSet * texts;
@property (readonly) NSArray * orderedTexts;
@property (readonly, nonatomic) unsigned int countOfTexts;
@property (readonly, nonatomic) unsigned int nextAvailableTextIndex;
@property (copy) NSString * effectID;
@property (copy) NSDictionary * effectAttributes;
@property (nonatomic) char isLive;

+ (NSString *)keyPathsForValuesAffectingValueForKey:(NSString *)arg0;

- (void)removeActionForKey:(NSString *)arg0;
- (NSDictionary *)actions;
- (NSString *)actionForKey:(NSString *)arg0;
- (void)removeAllActions;
- (void)setAction:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)removeAllSlides;
- (NSSet *)slides;
- (id)addSlides:(int)arg0;
- (void)removeSlidesAtIndices:(id)arg0;
- (unsigned int)countOfTexts;
- (NSSet *)texts;
- (NSString *)effectID;
- (void)removeAllTexts;
- (unsigned int)countOfSlides;
- (void)setEffectAttribute:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSDictionary *)effectAttributes;
- (void)setEffectAttributes:(NSDictionary *)arg0;
- (NSString *)effectAttributeForKey:(NSString *)arg0;
- (void)setEffectID:(NSString *)arg0;
- (void)demolish;
- (unsigned int)nextAvailableSlideIndex;
- (NSSet *)insertSlideForAsset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (NSObject *)insertSlideAtIndex:(int)arg0;
- (NSArray *)insertSlidesForAssets:(NSArray *)arg0 atIndex:(unsigned int)arg1;
- (void)moveSlidesAtIndices:(id)arg0 toIndex:(unsigned int)arg1;
- (NSArray *)insertTextsForAttributedStrings:(id)arg0 atIndex:(unsigned int)arg1;
- (void)removeTextsAtIndices:(id)arg0;
- (void)moveTextsAtIndices:(id)arg0 toIndex:(unsigned int)arg1;
- (void)setIsLive:(char)arg0;
- (NSArray *)addSlidesForAssets:(NSArray *)arg0;
- (id)addSlide;
- (NSArray *)addTextsForAttributedStrings:(id)arg0;
- (unsigned int)countOfActions;
- (MCContainerEffect *)initWithImprint:(NSDictionary *)arg0 andMontage:(NSObject *)arg1;
- (void)initActionsWithImprints:(id)arg0;
- (void)demolishActions;
- (id)imprintsForActions;
- (NSObject *)insertSlideForContainer:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (unsigned int)nextAvailableTextIndex;
- (NSArray *)insertTextsForAssets:(NSArray *)arg0 andKey:(NSString *)arg1 atIndex:(unsigned int)arg2;
- (NSArray *)orderedSlides;
- (NSSet *)addSlideForAsset:(NSSet *)arg0;
- (NSObject *)addSlideForContainer:(NSObject *)arg0;
- (NSArray *)orderedTexts;
- (NSObject *)textAtIndex:(unsigned int)arg0;
- (NSString *)addTextForAttributedString:(NSString *)arg0;
- (NSSet *)addTextForAsset:(NSSet *)arg0 andKey:(NSString *)arg1;
- (NSArray *)addTextsForAssets:(NSArray *)arg0 andKey:(NSString *)arg1;
- (NSString *)insertTextForAttributedString:(NSString *)arg0 atIndex:(unsigned int)arg1;
- (NSSet *)insertTextForAsset:(NSSet *)arg0 andKey:(NSString *)arg1 atIndex:(unsigned int)arg2;
- (void)addEffectAttributes:(NSDictionary *)arg0;
- (char)isLive;
- (NSDictionary *)imprint;
- (NSObject *)slideAtIndex:(unsigned int)arg0;

@end
