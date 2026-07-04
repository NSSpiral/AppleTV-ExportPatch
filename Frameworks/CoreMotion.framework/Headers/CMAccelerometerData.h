/* Runtime dump - CMAccelerometerData
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAccelerometerData : CMLogItem
{
    id _internal;
}

@property (readonly, nonatomic) struct ? acceleration;

+ (char)supportsSecureCoding;

- (CMAccelerometerData *)initWithAcceleration:(struct ?)arg0 andTimestamp:(double)arg1;
- (void)dealloc;
- (CMAccelerometerData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CMAccelerometerData *)copyWithZone:(struct _NSZone *)arg0;
- (struct ?)acceleration;

@end
