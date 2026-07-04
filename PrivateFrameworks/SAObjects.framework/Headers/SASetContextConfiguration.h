/* Runtime dump - SASetContextConfiguration
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetContextConfiguration : SABaseClientBoundCommand

@property (nonatomic) int contextTimeoutSeconds;

+ (NSDictionary *)setContextConfiguration;
+ (NSDictionary *)setContextConfigurationWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (int)contextTimeoutSeconds;
- (void)setContextTimeoutSeconds:(int)arg0;

@end
