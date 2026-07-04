/* Runtime dump - SASTViewTemplateAction
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTViewTemplateAction : AceObject <SASTTemplateAction>

@property (copy, nonatomic) NSArray * commands;
@property (retain, nonatomic) SASTItemGroup * itemGroupView;
@property (copy, nonatomic) NSString * viewTitle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)viewTemplateAction;
+ (NSDictionary *)viewTemplateActionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)commands;
- (void)setCommands:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (SASTItemGroup *)itemGroupView;
- (void)setItemGroupView:(SASTItemGroup *)arg0;
- (NSString *)viewTitle;
- (void)setViewTitle:(NSString *)arg0;

@end
