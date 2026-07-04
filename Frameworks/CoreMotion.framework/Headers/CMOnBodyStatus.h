/* Runtime dump - CMOnBodyStatus
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMOnBodyStatus : CMLogItem
{
    int fResult;
    int fConfidence;
}

@property (readonly, nonatomic) int result;
@property (readonly, nonatomic) int confidence;

+ (char)supportsSecureCoding;

- (CMOnBodyStatus *)initWithOnBodyResult:(int)arg0 confidence:(int)arg1 timestamp:(double)arg2;
- (CMOnBodyStatus *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CMOnBodyStatus *)copyWithZone:(struct _NSZone *)arg0;
- (int)result;
- (int)confidence;

@end
