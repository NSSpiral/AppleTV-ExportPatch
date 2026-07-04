/* Runtime dump - SASTPropertyListItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTPropertyListItem : AceObject <SASTTemplateItem>

@property (retain, nonatomic) SAUIDecoratedText * decoratedTitle;
@property (copy, nonatomic) NSArray * decoratedValues;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSArray * values;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)propertyListItem;
+ (NSDictionary *)propertyListItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (void)setValues:(NSArray *)arg0;
- (NSArray *)values;
- (NSString *)encodedClassName;
- (SAUIDecoratedText *)decoratedTitle;
- (void)setDecoratedTitle:(SAUIDecoratedText *)arg0;
- (NSArray *)decoratedValues;
- (void)setDecoratedValues:(NSArray *)arg0;

@end
