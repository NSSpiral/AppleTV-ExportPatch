/* Runtime dump - HMLocationEvent
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMLocationEvent : HMEvent <_HMLocationHandlerDelegate, NSSecureCoding>
{
    CLRegion * _region;
    int _locationAuthorization;
}

@property (retain, nonatomic) CLRegion * region;
@property (nonatomic) int locationAuthorization;

+ (NSDictionary *)createWithDictionary:(NSDictionary *)arg0 home:(id)arg1;
+ (char)supportsSecureCoding;

- (void)_configure:(id)arg0 eventTrigger:(HMEventTrigger *)arg1 clientQueue:(NSObject<OS_dispatch_queue> *)arg2 delegateCaller:(HMDelegateCaller *)arg3;
- (void)_updateRegion:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)didUpdateAuthorization:(int)arg0;
- (void)updateRegion:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (id)_serializeForAdd;
- (HMLocationEvent *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setRegion:(CLRegion *)arg0;
- (CLRegion *)region;
- (HMLocationEvent *)initWithRegion:(CLRegion *)arg0;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;
- (int)locationAuthorization;
- (void)setLocationAuthorization:(int)arg0;

@end
