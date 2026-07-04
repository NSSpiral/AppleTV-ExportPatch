/* Runtime dump - SASTAttributionItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTAttributionItem : AceObject <SASTActionableTemplateItem>

@property (retain, nonatomic) <SASTTemplateAction> * action;
@property (retain, nonatomic) SAUINanoImageResource * imageResource;
@property (copy, nonatomic) NSString * text;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)attributionItem;
+ (NSDictionary *)attributionItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (<SASTTemplateAction> *)action;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void)setAction:(<SASTTemplateAction> *)arg0;
- (NSString *)encodedClassName;
- (SAUINanoImageResource *)imageResource;
- (void)setImageResource:(SAUINanoImageResource *)arg0;

@end
