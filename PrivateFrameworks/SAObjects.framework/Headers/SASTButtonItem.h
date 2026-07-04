/* Runtime dump - SASTButtonItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTButtonItem : AceObject <SASTActionableTemplateItem>

@property (retain, nonatomic) <SASTTemplateAction> * action;
@property (nonatomic) char centered;
@property (retain, nonatomic) SAUIDecoratedText * decoratedLabel;
@property (retain, nonatomic) SAUILocalImageResource * localImageResource;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)buttonItem;
+ (NSDictionary *)buttonItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (<SASTTemplateAction> *)action;
- (void)setAction:(<SASTTemplateAction> *)arg0;
- (NSString *)encodedClassName;
- (SAUILocalImageResource *)localImageResource;
- (void)setLocalImageResource:(SAUILocalImageResource *)arg0;
- (char)centered;
- (void)setCentered:(char)arg0;
- (SAUIDecoratedText *)decoratedLabel;
- (void)setDecoratedLabel:(SAUIDecoratedText *)arg0;

@end
