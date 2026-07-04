/* Runtime dump - CMAmbientPressureData
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAmbientPressureData : CMLogItem
{
    id _internal;
}

@property (readonly, nonatomic) struct ? ambientPressure;

+ (char)supportsSecureCoding;

- (CMAmbientPressureData *)initWithPressure:(struct ?)arg0 andTimestamp:(double)arg1;
- (struct ?)ambientPressure;
- (void)dealloc;
- (CMAmbientPressureData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CMAmbientPressureData *)copyWithZone:(struct _NSZone *)arg0;

@end
