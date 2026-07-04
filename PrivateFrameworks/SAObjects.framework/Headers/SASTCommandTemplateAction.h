/* Runtime dump - SASTCommandTemplateAction
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTCommandTemplateAction : AceObject <SASTTemplateAction>

@property (copy, nonatomic) NSArray * commands;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)commandTemplateAction;
+ (NSDictionary *)commandTemplateActionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)commands;
- (void)setCommands:(NSArray *)arg0;
- (NSString *)encodedClassName;

@end
