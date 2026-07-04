/* Runtime dump - CMMotionActivity
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMotionActivity : CMLogItem
{
    struct CLMotionActivity fState;
}

@property (readonly, nonatomic) int confidence;
@property (readonly, nonatomic) NSDate * startDate;
@property (readonly, nonatomic) char unknown;
@property (readonly, nonatomic) char stationary;
@property (readonly, nonatomic) char walking;
@property (readonly, nonatomic) char running;
@property (readonly, nonatomic) char automotive;
@property (readonly, nonatomic) char cycling;

+ (char)supportsSecureCoding;

- (CMMotionActivity *)initWithMotionActivity:(struct CLMotionActivity)arg0;
- (char)unknown;
- (char)stationary;
- (char)walking;
- (char)automotive;
- (char)cycling;
- (CMMotionActivity *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CMMotionActivity *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (int)confidence;
- (char)running;
- (NSDate *)startDate;

@end
