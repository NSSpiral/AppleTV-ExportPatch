/* Runtime dump - AVTextStyleRule
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVTextStyleRule : NSObject <NSCopying>
{
    AVTextStyleRuleInternal * _textStyleRule;
}

@property (readonly, nonatomic) NSDictionary * textMarkupAttributes;
@property (readonly, nonatomic) NSString * textSelector;

+ (NSArray *)propertyListForTextStyleRules:(id)arg0;
+ (AVTextStyleRule *)textStyleRuleWithTextMarkupAttributes:(NSDictionary *)arg0 textSelector:(NSString *)arg1;
+ (AVTextStyleRule *)textStyleRulesFromPropertyList:(NSArray *)arg0;
+ (AVTextStyleRule *)textStyleRuleWithTextMarkupAttributes:(NSDictionary *)arg0;

- (NSString *)textSelector;
- (NSDictionary *)textMarkupAttributes;
- (NSDictionary *)_dictionaryPlistRepresentation;
- (AVTextStyleRule *)initWithTextMarkupAttributes:(NSDictionary *)arg0 textSelector:(NSString *)arg1;
- (AVTextStyleRule *)initWithTextMarkupAttributes:(NSDictionary *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (AVTextStyleRule *)copyWithZone:(struct _NSZone *)arg0;
- (void)finalize;

@end
