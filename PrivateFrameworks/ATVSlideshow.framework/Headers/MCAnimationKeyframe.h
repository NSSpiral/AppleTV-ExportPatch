/* Runtime dump - MCAnimationKeyframe
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCAnimationKeyframe : MCObjectLight
{
    MCAnimationPathKeyframed * mAnimationPath;
    char mIsSnapshot;
    int mTimeOffsetKind;
    float mPreControl;
    float mPostControl;
    double mTimeOffset;
}

@property (nonatomic) double timeOffset;
@property (nonatomic) int timeOffsetKind;
@property (nonatomic) float preControl;
@property (nonatomic) float postControl;
@property MCAnimationPathKeyframed * animationPath;

+ (NSString *)keyPathsForValuesAffectingValueForKey:(NSString *)arg0;

- (NSString *)description;
- (double)timeOffset;
- (void)setTimeOffset:(double)arg0;
- (void)setTimeOffsetKind:(int)arg0;
- (void)setPreControl:(float)arg0;
- (void)setPostControl:(float)arg0;
- (float)preControl;
- (float)postControl;
- (MCAnimationPathKeyframed *)animationPath;
- (void)setAnimationPath:(MCAnimationPathKeyframed *)arg0;
- (void)demolish;
- (int)timeOffsetKind;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (char)isSnapshot;
- (MCAnimationKeyframe *)initWithImprint:(NSDictionary *)arg0;
- (NSDictionary *)imprint;

@end
