/* Runtime dump - HMDLocationEvent
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLocationEvent : HMDEvent <NSSecureCoding>
{
    CLRegion * _region;
}

@property (retain, nonatomic) CLRegion * region;
@property (readonly, copy, nonatomic) CLRegion * uniqueRegion;

+ (char)supportsSecureCoding;
+ (NSDictionary *)locationEventWithDictionary:(NSDictionary *)arg0 error:(id *)arg1;

- (HMDLocationEvent *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setRegion:(CLRegion *)arg0;
- (CLRegion *)region;
- (HMDLocationEvent *)initWithRegion:(CLRegion *)arg0;
- (char)setRegionIfValid:(id)arg0;
- (CLRegion *)uniqueRegion;

@end
