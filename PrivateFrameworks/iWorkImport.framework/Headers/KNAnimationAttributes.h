/* Runtime dump - KNAnimationAttributes
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationAttributes : NSObject <NSCopying>
{
    NSString * mEffect;
    NSDictionary * mAttributes;
}

@property (readonly, nonatomic) NSString * effect;
@property (readonly, nonatomic) NSDictionary * attributes;

+ (NSDictionary *)supportedCustomAttributes;
+ (NSObject *)attributesWithEffect:(NSString *)arg0 attributes:(NSDictionary *)arg1;
+ (char)customAttributeKeyIsValid:(id)arg0;

- (NSDictionary *)attributesByAddingAttributesFromDictionary:(NSDictionary *)arg0;
- (NSString *)valueForAttributeKey:(NSString *)arg0;
- (KNAnimationAttributes *)initWithEffect:(NSString *)arg0 attributes:(NSDictionary *)arg1;
- (id)attributesBySettingValue:(id)arg0 forAttributeKey:(NSString *)arg1;
- (char)containsAttributeForKey:(NSString *)arg0;
- (id)attributesAdjustedForTheme:(id)arg0;
- (NSString *)p_curveForNameKey:(NSString *)arg0 forTheme:(TSSTheme *)arg1;
- (NSObject *)attributesByChangingEffectToEffect:(NSObject *)arg0;
- (NSDictionary *)attributesByAddingMissingAttributesFromDictionary:(NSDictionary *)arg0;
- (NSString *)attributesByRemovingAttributeForKey:(NSString *)arg0;
- (NSObject *)attributesByUpdatingThemeCurveNamesWithOldToNewCurveNameMap:(NSObject *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (KNAnimationAttributes *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)effect;
- (NSDictionary *)attributes;

@end
