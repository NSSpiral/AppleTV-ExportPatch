/* Runtime dump - MCMotionTrigger
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCMotionTrigger : MCAction
{
    NSString * _key;
    float _easeIn;
    float _easeOut;
    double _duration;
}

@property (copy) NSString * key;
@property (nonatomic) double duration;
@property (nonatomic) float easeIn;
@property (nonatomic) float easeOut;

+ (MCMotionTrigger *)motionTriggerForTargetPlugObjectID:(NSObject *)arg0 withKey:(NSString *)arg1 andDuration:(double)arg2;

- (NSString *)description;
- (double)duration;
- (NSString *)key;
- (void)setDuration:(double)arg0;
- (void)setKey:(NSString *)arg0;
- (void)demolish;
- (float)easeIn;
- (float)easeOut;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCMotionTrigger *)initWithImprint:(NSDictionary *)arg0;
- (void)setEaseIn:(float)arg0;
- (void)setEaseOut:(float)arg0;
- (NSDictionary *)imprint;

@end
