/* Runtime dump - OADIndexedColor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADIndexedColor : OADColor
{
    unsigned int mIndex;
}

+ (NSObject *)indexedColorWithIndex:(unsigned int)arg0;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADIndexedColor *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)index;
- (OADIndexedColor *)initWithIndex:(unsigned int)arg0;
- (id)colorFromPalette:(id)arg0;

@end
