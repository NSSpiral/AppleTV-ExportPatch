/* Runtime dump - CMDeviceMotionInternal
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMDeviceMotionInternal : NSObject <NSCopying>
{
    struct ? fGravity;
    struct ? fUserAcceleration;
    struct ? fRotationRate;
    CMAttitude * fAttitude;
    struct ? fMagneticField;
    int fMagneticFieldCalibrationLevel;
    BOOL fDoingYawCorrection;
    BOOL fDoingBiasEstimation;
}

- (void)setDeviceMotion:(struct ?)arg0;
- (CMDeviceMotionInternal *)initWithDeviceMotion:(struct ?)arg0;
- (void)dealloc;
- (CMDeviceMotionInternal *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;

@end
