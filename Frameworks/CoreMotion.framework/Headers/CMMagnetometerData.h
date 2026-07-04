/* Runtime dump - CMMagnetometerData
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMagnetometerData : CMLogItem
{
    id _internal;
}

@property (readonly, nonatomic) struct ? magneticField;

+ (char)supportsSecureCoding;

- (CMMagnetometerData *)initWithMagneticField:(struct ?)arg0 andTimestamp:(double)arg1;
- (struct ?)magneticField;
- (void)dealloc;
- (CMMagnetometerData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CMMagnetometerData *)copyWithZone:(struct _NSZone *)arg0;

@end
