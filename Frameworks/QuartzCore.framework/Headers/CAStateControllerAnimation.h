/* Runtime dump - CAStateControllerAnimation
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateControllerAnimation : NSObject
{
    CALayer * _layer;
    NSString * _key;
}

@property (readonly, nonatomic) CALayer * layer;
@property (readonly, nonatomic) NSString * key;

- (CAStateControllerAnimation *)initWithLayer:(CALayer *)arg0 key:(NSString *)arg1;
- (void)dealloc;
- (CALayer *)layer;
- (NSString *)key;

@end
