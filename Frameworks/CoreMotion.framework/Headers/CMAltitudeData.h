/* Runtime dump - CMAltitudeData
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAltitudeData : CMLogItem
{
    id _internal;
}

@property (readonly, nonatomic) NSNumber * relativeAltitude;
@property (readonly, nonatomic) NSNumber * pressure;

+ (char)supportsSecureCoding;

- (CMAltitudeData *)initWithAltitude:(float)arg0 andTimestamp:(double)arg1 atBaseAltitude:(float)arg2;
- (NSNumber *)relativeAltitude;
- (NSNumber *)pressure;
- (void)dealloc;
- (CMAltitudeData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CMAltitudeData *)copyWithZone:(struct _NSZone *)arg0;

@end
