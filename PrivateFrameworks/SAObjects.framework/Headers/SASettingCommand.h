/* Runtime dump - SASettingCommand
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingCommand : SADomainCommand

+ (<SAClientBoundCommand> *)command;
+ (NSDictionary *)commandWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
