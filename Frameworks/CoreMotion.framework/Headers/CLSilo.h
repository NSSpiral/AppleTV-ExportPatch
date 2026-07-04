/* Runtime dump - CLSilo
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLSilo : NSObject <NSCopying>
{
    NSString * _identifier;
}

@property (readonly, nonatomic) NSString * identifier;

+ (TSCH3DSceneObject *)main;

- (void)async:(char)arg0;
- (void)sync:(NSObject<OS_dispatch_queue> *)arg0;
- (void)assertInside;
- (void)assertOutside;
- (NSTimer *)newTimer;
- (void)afterInterval:(double)arg0 async:(char)arg1;
- (NSString *)debugDescription;
- (NSString *)identifier;
- (CLSilo *)copyWithZone:(struct _NSZone *)arg0;
- (CLSilo *)initWithIdentifier:(NSString *)arg0;
- (void).cxx_destruct;

@end
