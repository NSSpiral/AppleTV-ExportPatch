/* Runtime dump - SAConnectionPolicy
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAConnectionPolicy : AceObject <SAAceSerializable>

@property (nonatomic) char enabled;
@property (copy, nonatomic) NSNumber * globalTimeout;
@property (copy, nonatomic) NSString * policyId;
@property (copy, nonatomic) NSArray * routes;
@property (copy, nonatomic) NSNumber * timeToLive;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAConnectionPolicy *)connectionPolicy;
+ (NSDictionary *)connectionPolicyWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setEnabled:(char)arg0;
- (char)enabled;
- (void)setRoutes:(NSArray *)arg0;
- (NSArray *)routes;
- (NSString *)encodedClassName;
- (NSNumber *)globalTimeout;
- (void)setGlobalTimeout:(NSNumber *)arg0;
- (NSString *)policyId;
- (void)setPolicyId:(NSString *)arg0;
- (NSNumber *)timeToLive;
- (void)setTimeToLive:(NSNumber *)arg0;

@end
