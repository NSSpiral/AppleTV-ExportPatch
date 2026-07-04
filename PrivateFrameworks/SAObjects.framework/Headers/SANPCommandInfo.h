/* Runtime dump - SANPCommandInfo
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPCommandInfo : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSArray * registeredCommands;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDictionary *)commandInfo;
+ (NSDictionary *)commandInfoWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)registeredCommands;
- (void)setRegisteredCommands:(NSArray *)arg0;

@end
