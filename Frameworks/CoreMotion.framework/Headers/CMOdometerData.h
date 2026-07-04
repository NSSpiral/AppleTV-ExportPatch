/* Runtime dump - CMOdometerData
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMOdometerData : NSObject <NSSecureCoding, NSCopying>
{
    NSDate * _startDate;
    NSDate * _endDate;
    NSNumber * _distance;
    NSNumber * _currentSpeed;
    NSNumber * _averageSpeed;
}

@property (readonly, nonatomic) NSDate * startDate;
@property (readonly, nonatomic) NSDate * endDate;
@property (readonly, nonatomic) NSNumber * distance;
@property (readonly, nonatomic) NSNumber * currentSpeed;
@property (readonly, nonatomic) NSNumber * averageSpeed;

+ (char)supportsSecureCoding;

- (NSNumber *)currentSpeed;
- (NSNumber *)averageSpeed;
- (CMOdometerData *)initWithDistance:(NSNumber *)arg0 startDate:(NSDate *)arg1 endDate:(NSDate *)arg2 currentSpeed:(NSNumber *)arg3 averageSpeed:(NSNumber *)arg4;
- (void)dealloc;
- (CMOdometerData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CMOdometerData *)copyWithZone:(struct _NSZone *)arg0;
- (NSNumber *)distance;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
