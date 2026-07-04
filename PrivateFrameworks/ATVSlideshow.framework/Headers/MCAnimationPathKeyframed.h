/* Runtime dump - MCAnimationPathKeyframed
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCAnimationPathKeyframed : MCAnimationPath
{
    NSMutableSet * mKeyframes;
    NSArray * mCachedOrderedKeyframes;
}

@property (readonly) NSSet * keyframes;

+ (NSString *)animationPathWithKey:(NSString *)arg0;
+ (double)timeForKeyframe:(id)arg0 inPlug:(MCPlug *)arg1;
+ (NSString *)keyPathsForValuesAffectingValueForKey:(NSString *)arg0;

- (MCAnimationPathKeyframed *)init;
- (NSString *)description;
- (id)createKeyframeWithScalar:(float)arg0 atTime:(double)arg1 offsetKind:(int)arg2;
- (id)createKeyframeWithFunction:(NSString *)arg0 atTime:(double)arg1 offsetKind:(int)arg2 forDuration:(double)arg3;
- (NSSet *)keyframes;
- (NSObject *)createKeyframeWithPoint:(struct CGPoint)arg0 atTime:(double)arg1 offsetKind:(int)arg2;
- (id)createKeyframeWithVector:(struct ?)arg0 atTime:(double)arg1 offsetKind:(int)arg2;
- (void)removeKeyframe:(MRCAMLKeyframe *)arg0;
- (void)addKeyframe:(MRCAMLKeyframe *)arg0;
- (void)removeAllKeyframes;
- (id)createKeyframeWithScalar:(float)arg0 atTime:(double)arg1;
- (NSObject *)createKeyframeWithPoint:(struct CGPoint)arg0 atTime:(double)arg1;
- (id)createKeyframeWithVector:(struct ?)arg0 atTime:(double)arg1;
- (void)demolish;
- (id)orderedKeyframesInPlug:(id)arg0;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCAnimationPathKeyframed *)initWithImprint:(NSDictionary *)arg0;
- (unsigned int)countOfKeyframes;
- (NSDictionary *)imprint;

@end
