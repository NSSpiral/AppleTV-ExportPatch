/* Runtime dump - CMActivity
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivity : CMLogItem
{
    struct CLMotionActivity fActivity;
}

@property (readonly, nonatomic) int confidence;
@property (readonly, nonatomic) char isMoving;
@property (readonly, nonatomic) char isWalking;
@property (readonly, nonatomic) char isRunning;
@property (readonly, nonatomic) char isDriving;
@property (readonly, nonatomic) char maybeExitingVehicle;
@property (readonly, nonatomic) char hasExitedVehicle;

+ (char)supportsSecureCoding;

- (CMActivity *)initWithMotionActivity:(struct CLMotionActivity)arg0;
- (char)isMoving;
- (char)isWalking;
- (char)isDriving;
- (char)maybeExitingVehicle;
- (char)hasExitedVehicle;
- (CMActivity *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CMActivity *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (char)isRunning;
- (struct CLMotionActivity)activity;
- (int)confidence;

@end
