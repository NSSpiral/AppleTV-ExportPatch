/* Runtime dump - SASTCardItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTCardItem : AceObject <SASTTemplateItem>

@property (retain, nonatomic) SAUIDecoratedText * footnote;
@property (retain, nonatomic) SAUIDecoratedText * label;
@property (retain, nonatomic) SAUIDecoratedText * title;
@property (retain, nonatomic) SAUIColor * titleBackgroundColor;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)cardItem;
+ (NSDictionary *)cardItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(SAUIDecoratedText *)arg0;
- (SAUIDecoratedText *)title;
- (SAUIDecoratedText *)label;
- (void)setLabel:(SAUIDecoratedText *)arg0;
- (NSString *)encodedClassName;
- (SAUIDecoratedText *)footnote;
- (void)setFootnote:(SAUIDecoratedText *)arg0;
- (SAUIColor *)titleBackgroundColor;
- (void)setTitleBackgroundColor:(SAUIColor *)arg0;

@end
