/* Runtime dump - BKSTouchDeliveryPolicy
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSTouchDeliveryPolicy : NSObject <NSSecureCoding>

@property (retain, nonatomic) NSObject<OS_xpc_object> * assertionEndpoint;

+ (BKSTouchDeliveryPolicy *)allocWithZone:(struct _NSZone *)arg0;
+ (char)supportsSecureCoding;
+ (NSObject *)policyRequiringSharingOfTouchesDeliveredToChildContextId:(unsigned int)arg0 withHostContextId:(unsigned int)arg1;
+ (NSObject *)policyCancelingTouchesDeliveredToContextId:(unsigned int)arg0 withInitialTouchTimestamp:(double)arg1;
+ (BKSTouchDeliveryPolicy *)policyByCombiningPolicies:(id)arg0;

- (BKSTouchDeliveryPolicy *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setAssertionEndpoint:(NSObject<OS_xpc_object> *)arg0;
- (NSObject *)matchSharingTouchesPolicy:(NSObject *)arg0 orCancelTouchesPolicy:(/* block */ id)arg1 orCombinedPolicy:(NSObject *)arg2;
- (id)reducePolicyToObjectWithBlock:(id /* block */)arg0;
- (id)policyByMappingContainedPoliciesWithBlock:(id /* block */)arg0;
- (NSObject<OS_xpc_object> *)assertionEndpoint;
- (NSObject *)policyIncludingPolicy:(NSObject *)arg0;
- (NSObject *)policyExcludingPolicy:(NSObject *)arg0;

@end
