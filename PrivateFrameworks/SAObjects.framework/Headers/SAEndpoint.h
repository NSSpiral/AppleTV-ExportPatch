/* Runtime dump - SAEndpoint
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAEndpoint : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSDictionary * operations;
@property (copy, nonatomic) NSString * providerId;
@property (nonatomic) char supportsAuthentication;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSURL *)endpoint;
+ (NSDictionary *)endpointWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setOperations:(NSDictionary *)arg0;
- (NSDictionary *)operations;
- (void)setSupportsAuthentication:(char)arg0;
- (char)supportsAuthentication;
- (void)setProviderId:(NSString *)arg0;
- (NSString *)providerId;
- (NSString *)encodedClassName;

@end
