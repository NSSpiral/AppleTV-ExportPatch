/* Runtime dump - SAGKAlternateResult
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKAlternateResult : AceObject <SAAceSerializable>

@property (retain, nonatomic) <SAClientBoundCommand> * command;
@property (copy, nonatomic) NSString * name;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)alternateResult;
+ (NSDictionary *)alternateResultWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (<SAClientBoundCommand> *)command;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setCommand:(<SAClientBoundCommand> *)arg0;
- (NSString *)encodedClassName;

@end
