/* Runtime dump - SAEndpointService
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAEndpointService : SAEndpoint

@property (copy, nonatomic) NSString * serverUrl;

+ (NSObject *)endpointService;
+ (NSDictionary *)endpointServiceWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)serverUrl;
- (void)setServerUrl:(NSString *)arg0;

@end
