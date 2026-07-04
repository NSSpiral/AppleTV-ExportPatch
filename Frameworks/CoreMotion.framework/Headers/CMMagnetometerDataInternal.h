/* Runtime dump - CMMagnetometerDataInternal
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMagnetometerDataInternal : NSObject <NSCopying>
{
    struct ? fMagneticField;
}

- (void)setMagneticField:(struct ?)arg0;
- (CMMagnetometerDataInternal *)initWithMagneticField:(struct ?)arg0;
- (CMMagnetometerDataInternal *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;

@end
