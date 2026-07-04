/* Runtime dump - CMDeviceMotion
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMDeviceMotion : CMLogItem
{
    id _internal;
}

@property (readonly, nonatomic) CMAttitude * attitude;
@property (readonly, nonatomic) struct ? rotationRate;
@property (readonly, nonatomic) struct ? gravity;
@property (readonly, nonatomic) struct ? userAcceleration;
@property (readonly, nonatomic) struct ? magneticField;
@property (readonly, nonatomic) BOOL doingYawCorrection;
@property (readonly, nonatomic) BOOL doingBiasEstimation;
@property (readonly, nonatomic) int magneticFieldCalibrationLevel;

+ (char)supportsSecureCoding;

- (CMDeviceMotion *)initWithDeviceMotion:(struct ?)arg0 andTimestamp:(struct ?)arg1;
- (int)magneticFieldCalibrationLevel;
- (BOOL)doingYawCorrection;
- (BOOL)doingBiasEstimation;
- (struct ?)magneticField;
- (void)dealloc;
- (CMDeviceMotion *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CMDeviceMotion *)copyWithZone:(struct _NSZone *)arg0;
- (struct ?)gravity;
- (CMAttitude *)attitude;
- (struct ?)userAcceleration;
- (struct ?)rotationRate;

@end
