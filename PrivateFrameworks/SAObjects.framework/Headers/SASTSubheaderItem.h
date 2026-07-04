/* Runtime dump - SASTSubheaderItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTSubheaderItem : AceObject <SASTTemplateItem>

@property (retain, nonatomic) SAUIDecoratedText * leftText;
@property (retain, nonatomic) SAUIDecoratedText * rightText;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)subheaderItem;
+ (NSDictionary *)subheaderItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (SAUIDecoratedText *)leftText;
- (void)setLeftText:(SAUIDecoratedText *)arg0;
- (SAUIDecoratedText *)rightText;
- (void)setRightText:(SAUIDecoratedText *)arg0;

@end
