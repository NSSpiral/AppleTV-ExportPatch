/* Runtime dump - MPAnimatedSet
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPAnimatedSet : NSObject <NSCoding>
{
    NSString * mAnimatedSetID;
    NSDictionary * mDescription;
    MUMathExpressionDoubleBased * mTimeOfGoodPositionFormula;
    char mTimeWraps;
    NSMutableDictionary * mSlides;
    NSMutableArray * mFeaturedSlidePositions;
    NSMutableArray * mFeaturingAttributes;
    double mStartTime;
    double mIntroDuration;
    double mMainDuration;
    double mOutroDuration;
    double mTotalNumberOfIntervals;
    double mDefaultFeaturingDuration;
    double mDefaultFeaturingAnimationDuration;
    NSDictionary * mDefaultFeaturingAnimationAttributes;
    NSDictionary * mAttributes;
    char mEaseInEaseOutBetweenFeaturedSlides;
    char mFirstSlideIsShared;
    char mLastSlideIsShared;
    NSString * mIntroAnimationID;
    NSString * mOutroAnimationID;
    float mDistance;
    float mSpeed;
    MCContainerParallelizer * mContainer;
}

@property (readonly) NSString * animatedSetID;
@property (readonly) char timeWraps;
@property double startTime;
@property (readonly) double fullDuration;
@property double defaultFeaturingDuration;
@property double defaultFeaturingAnimationDuration;
@property (readonly) unsigned int minimumNumberOfSlides;
@property (readonly) unsigned int maximumNumberOfSlides;
@property (readonly) char needsEvenNumberOfSlides;
@property (copy) NSDictionary * attributes;
@property char easeInEaseOutBetweenFeaturedSlides;
@property char firstSlideIsShared;
@property char lastSlideIsShared;
@property (copy) NSString * introAnimationID;
@property (copy) NSString * outroAnimationID;
@property float distance;
@property float speed;
@property (readonly) MCContainerParallelizer * container;

- (void)dealloc;
- (MPAnimatedSet *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setSpeed:(float)arg0;
- (void)setStartTime:(double)arg0;
- (float)speed;
- (MCContainerParallelizer *)container;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSDictionary *)attributes;
- (double)startTime;
- (void)setAttributes:(NSDictionary *)arg0;
- (void)updateContainer;
- (void)removeSlideAtPosition:(unsigned int)arg0;
- (void)setAnimationPathsForPlug:(id)arg0 atPosition:(unsigned int)arg1;
- (void)setAnimationPaths:(NSArray *)arg0 onPlug:(MCPlug *)arg1 atPosition:(unsigned int)arg2 atTimeOffset:(double)arg3 withTimeOffsetKind:(int)arg4 forDuration:(double)arg5 withFunctionTimeOffset:(double)arg6 andFunctionTimeFactor:(double)arg7 easeIn:(char)arg8 easeOut:(char)arg9 otherAttributes:(NSDictionary *)arg10;
- (void)applyIntroAnimationPathsToPlug:(id)arg0 atPosition:(unsigned int)arg1;
- (double)timeOfGoodPositionForPosition:(int)arg0;
- (MPAnimatedSet *)initWithAnimatedSetID:(NSString *)arg0;
- (unsigned int)minimumNumberOfSlides;
- (unsigned int)maximumNumberOfSlides;
- (char)needsEvenNumberOfSlides;
- (void)decodeFromSlides:(id)arg0;
- (void)showSlide:(id)arg0 atPosition:(unsigned int)arg1 featuringAttributes:(NSDictionary *)arg2;
- (void)removeAllSlides;
- (NSArray *)slides;
- (double)featuringTimeForSlideAtPosition:(unsigned int)arg0;
- (void)insertIntoContainer:(NSObject *)arg0;
- (void)computeAnimationPathsForTime:(double)arg0 andPosition:(unsigned int)arg1 usingAnimationPaths:(NSArray *)arg2 otherAttributes:(NSDictionary *)arg3 plugTimeOffset:(double)arg4 plugTimeOffsetKind:(int)arg5 plugAnimationPaths:(NSArray *)arg6;
- (double)fullDuration;
- (void)chooseAnIntroAnimation;
- (void)chooseAnOutroAnimation;
- (NSString *)animatedSetID;
- (char)timeWraps;
- (double)defaultFeaturingDuration;
- (void)setDefaultFeaturingDuration:(double)arg0;
- (double)defaultFeaturingAnimationDuration;
- (void)setDefaultFeaturingAnimationDuration:(double)arg0;
- (char)easeInEaseOutBetweenFeaturedSlides;
- (void)setEaseInEaseOutBetweenFeaturedSlides:(char)arg0;
- (char)firstSlideIsShared;
- (void)setFirstSlideIsShared:(char)arg0;
- (char)lastSlideIsShared;
- (void)setLastSlideIsShared:(char)arg0;
- (NSString *)introAnimationID;
- (void)setIntroAnimationID:(NSString *)arg0;
- (NSString *)outroAnimationID;
- (void)setOutroAnimationID:(NSString *)arg0;
- (double)time1OfGoodPositionForPosition:(int)arg0;
- (double)time2OfGoodPositionForPosition:(int)arg0;
- (void)setDistance:(float)arg0;
- (float)distance;

@end
