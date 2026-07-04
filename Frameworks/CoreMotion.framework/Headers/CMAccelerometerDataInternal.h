/* Runtime dump - CMAccelerometerDataInternal
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAccelerometerDataInternal : NSObject <NSCopying>
{
    struct ? fAcceleration;
}

- (CMAccelerometerDataInternal *)initWithAcceleration:(struct ?)arg0;
- (void)setAcceleration:(struct ?)arg0;
- (CMAccelerometerDataInternal *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;

@end
