/* Runtime dump - MCMotionTriggerExpression
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCMotionTriggerExpression : MCMotionTrigger
{
    NSString * _expression;
    NSDictionary * _attributes;
}

@property (copy) NSString * expression;
@property (copy) NSDictionary * attributes;

+ (NSObject *)motionTriggerForTargetPlugObjectID:(NSObject *)arg0 withKey:(NSString *)arg1 duration:(double)arg2 andExpression:(NSObject *)arg3;

- (NSString *)expression;
- (NSString *)description;
- (NSDictionary *)attributes;
- (void)setAttributes:(NSDictionary *)arg0;
- (void)demolish;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCMotionTriggerExpression *)initWithImprint:(NSDictionary *)arg0;
- (NSDictionary *)imprint;
- (void)setExpression:(NSString *)arg0;

@end
