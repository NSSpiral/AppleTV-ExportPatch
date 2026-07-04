/* Runtime dump - SASendCommands
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASendCommands : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray * commands;

+ (SASendCommands *)sendCommands;
+ (NSDictionary *)sendCommandsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)commands;
- (void)setCommands:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
