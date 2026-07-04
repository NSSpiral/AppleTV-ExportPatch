/* Runtime dump - SASTTableRowItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTTableRowItem : AceObject <SASTTemplateItem>

@property (copy, nonatomic) NSArray * columnValues;
@property (retain, nonatomic) SAUINanoImageResource * imageResource;
@property (retain, nonatomic) SAUIDecoratedText * title;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)tableRowItem;
+ (NSDictionary *)tableRowItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(SAUIDecoratedText *)arg0;
- (SAUIDecoratedText *)title;
- (NSString *)encodedClassName;
- (SAUINanoImageResource *)imageResource;
- (void)setImageResource:(SAUINanoImageResource *)arg0;
- (NSArray *)columnValues;
- (void)setColumnValues:(NSArray *)arg0;

@end
