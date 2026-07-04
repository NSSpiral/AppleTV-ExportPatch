/* Runtime dump - SAConnectionPolicyRoute
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAConnectionPolicyRoute : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * cname;
@property (copy, nonatomic) NSString * host;
@property (copy, nonatomic) NSNumber * mptcp;
@property (nonatomic) int priority;
@property (copy, nonatomic) NSString * resolver;
@property (copy, nonatomic) NSString * resolverProtocol;
@property (copy, nonatomic) NSString * routeId;
@property (copy, nonatomic) NSNumber * timeout;
@property (copy, nonatomic) NSString * type;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAConnectionPolicyRoute *)connectionPolicyRoute;
+ (NSDictionary *)connectionPolicyRouteWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSString *)host;
- (void)setPriority:(int)arg0;
- (int)priority;
- (void)setHost:(NSString *)arg0;
- (void)setTimeout:(NSNumber *)arg0;
- (NSNumber *)timeout;
- (NSString *)encodedClassName;
- (NSString *)cname;
- (void)setCname:(NSString *)arg0;
- (NSNumber *)mptcp;
- (void)setMptcp:(NSNumber *)arg0;
- (NSString *)resolver;
- (void)setResolver:(NSString *)arg0;
- (NSString *)resolverProtocol;
- (void)setResolverProtocol:(NSString *)arg0;
- (NSString *)routeId;
- (void)setRouteId:(NSString *)arg0;

@end
