/* Runtime dump - MCMotionTriggerScalar
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCMotionTriggerScalar : MCMotionTrigger
{
    float _value;
}

@property (nonatomic) float value;

+ (NSObject *)motionTriggerForTargetPlugObjectID:(NSObject *)arg0 withKey:(NSString *)arg1 duration:(double)arg2 andValue:(float)arg3;

- (NSString *)description;
- (float)value;
- (void)setValue:(float)arg0;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCMotionTriggerScalar *)initWithImprint:(NSDictionary *)arg0;
- (NSDictionary *)imprint;

@end
