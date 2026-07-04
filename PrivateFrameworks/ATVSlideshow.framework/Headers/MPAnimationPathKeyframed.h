/* Runtime dump - MPAnimationPathKeyframed
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPAnimationPathKeyframed : MPAnimationPath
{
    NSMutableSet * _keyframes;
}

+ (NSString *)animationPath;

- (void)dealloc;
- (MPAnimationPathKeyframed *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPAnimationPathKeyframed *)init;
- (NSString *)description;
- (MPAnimationPathKeyframed *)copyWithZone:(struct _NSZone *)arg0;
- (void)cleanup;
- (double)relativeTimeForKeyframe:(id)arg0;
- (NSString *)fullDebugLog;
- (void)setAnimationPath:(NSString *)arg0;
- (void)copyKeyframes:(id)arg0;
- (NSMutableSet *)keyframes;
- (void)addKeyframes:(id)arg0;
- (void)removeKeyframe:(MRCAMLKeyframe *)arg0;
- (void)addKeyframe:(MRCAMLKeyframe *)arg0;
- (double)parentPhaseInDuration;
- (double)parentPhaseOutDuration;
- (double)parentMainDuration;
- (id)orderedKeyframes;
- (void)removeKeyframes:(id)arg0;
- (void)removeAllKeyframes;
- (id)createKeyframeWithScalar:(float)arg0 atTime:(double)arg1;
- (id)createKeyframeWithScalar:(float)arg0 atTime:(double)arg1 offsetType:(unsigned int)arg2;
- (NSObject *)createKeyframeWithPoint:(struct CGPoint)arg0 atTime:(double)arg1;
- (NSObject *)createKeyframeWithPoint:(struct CGPoint)arg0 atTime:(double)arg1 offsetType:(unsigned int)arg2;
- (id)createKeyframeWithVector:(struct ?)arg0 atTime:(double)arg1;
- (id)createKeyframeWithVector:(struct ?)arg0 atTime:(double)arg1 offsetType:(unsigned int)arg2;
- (id)createKeyframeWithFunction:(NSString *)arg0 atTime:(double)arg1 forDuration:(double)arg2;
- (id)createKeyframeWithFunction:(NSString *)arg0 atTime:(double)arg1 offsetType:(unsigned int)arg2 forDuration:(double)arg3;
- (void)dump;
- (GLKShaderBlockNode *)parent;

@end
