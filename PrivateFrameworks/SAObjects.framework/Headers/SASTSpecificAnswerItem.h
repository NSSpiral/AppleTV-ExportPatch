/* Runtime dump - SASTSpecificAnswerItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTSpecificAnswerItem : AceObject <SASTTemplateItem>

@property (retain, nonatomic) SAUIDecoratedText * decoratedFooter;
@property (retain, nonatomic) SAUIDecoratedText * decoratedValue;
@property (copy, nonatomic) NSString * footer;
@property (copy, nonatomic) NSString * value;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)specificAnswerItem;
+ (NSDictionary *)specificAnswerItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (NSString *)footer;
- (void)setFooter:(NSString *)arg0;
- (NSString *)encodedClassName;
- (SAUIDecoratedText *)decoratedValue;
- (void)setDecoratedValue:(SAUIDecoratedText *)arg0;
- (SAUIDecoratedText *)decoratedFooter;
- (void)setDecoratedFooter:(SAUIDecoratedText *)arg0;

@end
