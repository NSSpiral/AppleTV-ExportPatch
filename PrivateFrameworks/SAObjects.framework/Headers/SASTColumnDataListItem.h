/* Runtime dump - SASTColumnDataListItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTColumnDataListItem : AceObject <SASTActionableTemplateItem>

@property (retain, nonatomic) <SASTTemplateAction> * action;
@property (copy, nonatomic) NSArray * decoratedRows;
@property (retain, nonatomic) SAUINanoImageResource * imageResource;
@property (copy, nonatomic) NSString * rowLayout;
@property (retain, nonatomic) SAUIDecoratedText * title;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)columnDataListItem;
+ (NSDictionary *)columnDataListItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(SAUIDecoratedText *)arg0;
- (<SASTTemplateAction> *)action;
- (SAUIDecoratedText *)title;
- (void)setAction:(<SASTTemplateAction> *)arg0;
- (NSString *)encodedClassName;
- (SAUINanoImageResource *)imageResource;
- (void)setImageResource:(SAUINanoImageResource *)arg0;
- (NSArray *)decoratedRows;
- (void)setDecoratedRows:(NSArray *)arg0;
- (NSString *)rowLayout;
- (void)setRowLayout:(NSString *)arg0;

@end
