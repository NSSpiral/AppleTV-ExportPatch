/* Runtime dump - SADomainCommand
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainCommand : SABaseClientBoundCommand

@property (copy, nonatomic) NSURL * targetAppId;
@property (copy, nonatomic) NSURL * targetPluginId;
@property (copy, nonatomic) NSNumber * timeout;

+ (NSObject *)domainCommand;
+ (NSDictionary *)domainCommandWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTimeout:(NSNumber *)arg0;
- (NSNumber *)timeout;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSURL *)targetAppId;
- (void)setTargetAppId:(NSURL *)arg0;
- (NSURL *)targetPluginId;
- (void)setTargetPluginId:(NSURL *)arg0;

@end
