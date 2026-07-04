/* Runtime dump - CMAltitudeDataInternal
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAltitudeDataInternal : NSObject <NSCopying>
{
    float fAltitude;
    float fPressure;
}

- (void)setAltitude:(float)arg0 andPressure:(float)arg1;
- (CMAltitudeDataInternal *)initWithAltitude:(float)arg0 andPressure:(float)arg1;
- (CMAltitudeDataInternal *)copyWithZone:(struct _NSZone *)arg0;

@end
