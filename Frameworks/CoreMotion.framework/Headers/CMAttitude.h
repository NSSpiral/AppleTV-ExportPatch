/* Runtime dump - CMAttitude
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAttitude : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

@property (readonly, nonatomic) double roll;
@property (readonly, nonatomic) double pitch;
@property (readonly, nonatomic) double yaw;
@property (readonly, nonatomic) struct ? rotationMatrix;
@property (readonly, nonatomic) struct ? quaternion;

+ (char)supportsSecureCoding;

- (id)GLKQuaternion;
- (CMAttitude *)initWithQuaternion:(struct ?)arg0;
- (struct ?)rotationMatrix;
- (void)multiplyByInverseOfAttitude:(id)arg0;
- (void)setQuaternion:(struct ?)arg0;
- (void)dealloc;
- (CMAttitude *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CMAttitude *)copyWithZone:(struct _NSZone *)arg0;
- (struct ?)quaternion;
- (double)pitch;
- (double)yaw;
- (double)roll;

@end
