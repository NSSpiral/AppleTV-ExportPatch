/* Runtime dump - CMDeviceOrientation
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMDeviceOrientation : CMLogItem
{
    int fOrientation;
}

@property (readonly, nonatomic) int orientation;

+ (char)supportsSecureCoding;

- (NSString *)orientationString;
- (CMDeviceOrientation *)initWithOrientation:(int)arg0 andTimestamp:(double)arg1;
- (void)dealloc;
- (CMDeviceOrientation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (int)orientation;
- (CMDeviceOrientation *)copyWithZone:(struct _NSZone *)arg0;

@end
