/* Runtime dump - SCN_CAKeyframeAnimation
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation
{
    struct __C3DKeyframedAnimation * _c3dAnimation;
    char _caReady;
}

- (void)setC3dAnimation:(struct __C3DKeyframedAnimation *)arg0;
- (void)setUsesSceneTimeBase:(char)arg0;
- (char)usesSceneTimeBase;
- (void)_convertToCA;
- (void)_clearC3DCache;
- (NSArray *)tensionValues;
- (void)setTensionValues:(NSArray *)arg0;
- (NSArray *)continuityValues;
- (void)setContinuityValues:(NSArray *)arg0;
- (NSArray *)biasValues;
- (void)setBiasValues:(NSArray *)arg0;
- (void)setRepeatDuration:(double)arg0;
- (double)repeatDuration;
- (void)setCommitsOnCompletion:(char)arg0;
- (char)commitsOnCompletion;
- (void)setAnimationEvents:(NSArray *)arg0;
- (NSArray *)animationEvents;
- (void)setCumulative:(char)arg0;
- (char)isCumulative;
- (struct __C3DKeyframedAnimation *)c3dAnimation;
- (void)dealloc;
- (NSString *)description;
- (void)setSpeed:(float)arg0;
- (double)duration;
- (void)setDuration:(double)arg0;
- (SCN_CAKeyframeAnimation *)copyWithZone:(struct _NSZone *)arg0;
- (void)setAdditive:(char)arg0;
- (char)isAdditive;
- (float)repeatCount;
- (void)setFillMode:(NSString *)arg0;
- (void)setTimingFunction:(CAMediaTimingFunction *)arg0;
- (void)setRepeatCount:(float)arg0;
- (void)setAutoreverses:(char)arg0;
- (void)setValues:(NSArray *)arg0;
- (void)setKeyTimes:(NSArray *)arg0;
- (float)speed;
- (double)timeOffset;
- (CAMediaTimingFunction *)timingFunction;
- (void)setRemovedOnCompletion:(char)arg0;
- (NSArray *)values;
- (void)setTimeOffset:(double)arg0;
- (NSArray *)keyTimes;
- (void)setTimingFunctions:(NSArray *)arg0;
- (float)fadeOutDuration;
- (void)setFadeInDuration:(float)arg0;
- (void)setFadeOutDuration:(float)arg0;
- (float)fadeInDuration;
- (char)autoreverses;
- (NSString *)fillMode;
- (char)isRemovedOnCompletion;
- (NSArray *)timingFunctions;

@end
