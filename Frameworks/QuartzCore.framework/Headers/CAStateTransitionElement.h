/* Runtime dump - CAStateTransitionElement
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateTransitionElement : NSObject <NSCopying, NSCoding>
{
    CALayer * _target;
    CAAnimation * _animation;
    NSString * _key;
    char _enabled;
}

@property char enabled;
@property (weak, nonatomic) CALayer * target;
@property (retain, nonatomic) CAAnimation * animation;
@property (copy, nonatomic) NSString * key;
@property (nonatomic) double beginTime;
@property (nonatomic) double duration;

+ (void)CAMLParserStartElement:(NSObject *)arg0;

- (void)CAMLParser:(NSObject *)arg0 setValue:(NSObject *)arg1 forKey:(NSString *)arg2;
- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (NSString *)CAMLTypeForKey:(NSString *)arg0;
- (void)dealloc;
- (CAStateTransitionElement *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CAStateTransitionElement *)init;
- (NSString *)debugDescription;
- (double)duration;
- (NSString *)key;
- (void)setDuration:(double)arg0;
- (void)setTarget:(CALayer *)arg0;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (CAStateTransitionElement *)copyWithZone:(struct _NSZone *)arg0;
- (CALayer *)target;
- (CAAnimation *)animation;
- (void)setBeginTime:(double)arg0;
- (double)beginTime;
- (void)setAnimation:(CAAnimation *)arg0;
- (void)setKey:(NSString *)arg0;

@end
