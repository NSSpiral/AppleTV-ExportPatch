/* Runtime dump - CMAmbientPressureDataInternal
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAmbientPressureDataInternal : NSObject
{
    struct ? fPressure;
}

- (void)setAmbientPressure:(struct ?)arg0;
- (CMAmbientPressureDataInternal *)initWithPressure:(struct ?)arg0;
- (CMAmbientPressureDataInternal *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;

@end
