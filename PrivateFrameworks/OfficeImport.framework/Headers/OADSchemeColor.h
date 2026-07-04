/* Runtime dump - OADSchemeColor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADSchemeColor : OADColor
{
    int mIndex;
}

+ (NSObject *)schemeColorWithIndex:(int)arg0;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADSchemeColor *)copyWithZone:(struct _NSZone *)arg0;
- (int)schemeColorIndex;
- (OADSchemeColor *)initWithSchemeColorIndex:(int)arg0;

@end
