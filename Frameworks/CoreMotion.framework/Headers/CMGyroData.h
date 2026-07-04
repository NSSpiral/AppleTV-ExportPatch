/* Runtime dump - CMGyroData
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMGyroData : CMLogItem
{
    id _internal;
}

@property (readonly, nonatomic) struct ? rotationRate;

+ (char)supportsSecureCoding;

- (CMGyroData *)initWithRotationRate:(struct ?)arg0 andTimestamp:(double)arg1;
- (void)dealloc;
- (CMGyroData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CMGyroData *)copyWithZone:(struct _NSZone *)arg0;
- (struct ?)rotationRate;

@end
