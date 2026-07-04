/* Runtime dump - SASTStockComparisonItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTStockComparisonItem : AceObject <SASTTemplateItem>

@property (copy, nonatomic) NSString * stockValueFacet;
@property (retain, nonatomic) SAUIDecoratedText * subtitle;
@property (retain, nonatomic) SAUIDecoratedText * title;
@property (retain, nonatomic) SAUIDecoratedText * value;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)stockComparisonItem;
+ (NSDictionary *)stockComparisonItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(SAUIDecoratedText *)arg0;
- (SAUIDecoratedText *)title;
- (SAUIDecoratedText *)value;
- (void)setValue:(SAUIDecoratedText *)arg0;
- (SAUIDecoratedText *)subtitle;
- (void)setSubtitle:(SAUIDecoratedText *)arg0;
- (NSString *)encodedClassName;
- (NSString *)stockValueFacet;
- (void)setStockValueFacet:(NSString *)arg0;

@end
