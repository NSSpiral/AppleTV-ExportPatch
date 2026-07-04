/* Runtime dump - OADCachedTextStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADCachedTextStyle : NSObject
{
    struct OADCachedTextStyleData mData;
    unsigned int mHash;
}

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void).cxx_construct;
- (OADCachedTextStyle *)initWithTextBodyProperties:(NSDictionary *)arg0 paragraphProperties:(NSDictionary *)arg1 characterProperties:(struct _xmlNode *)arg2 colorContext:(NSObject *)arg3 graphicStyleCache:(OADGraphicStyleCache *)arg4;
- (void)applyToParagraphProperties:(NSDictionary *)arg0 graphicStyleCache:(OADGraphicStyleCache *)arg1;
- (void)applyToTextBodyProperties:(NSDictionary *)arg0 graphicStyleCache:(OADGraphicStyleCache *)arg1;

@end
