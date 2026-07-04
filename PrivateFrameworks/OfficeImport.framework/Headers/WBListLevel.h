/* Runtime dump - WBListLevel
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBListLevel : NSObject

+ (void)readFrom:(NSObject *)arg0 listLevel:(WXListLevel *)arg1 format:(struct WrdListLevelFormat *)arg2 document:(struct WrdCharacterProperties *)arg3;
+ (void)write:(char *)arg0 listLevel:(WXListLevel *)arg1 format:(struct WrdListLevelFormat *)arg2;
+ (int)numberFormatEnumFor:(int)arg0;

@end
