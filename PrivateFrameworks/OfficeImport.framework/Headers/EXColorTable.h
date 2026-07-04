/* Runtime dump - EXColorTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXColorTable : NSObject

+ (void)readFrom:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)readColorsFrom:(struct _xmlNode *)arg0 toEDColors:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readOADThemeFrom:(NSObject *)arg0 toEDThemeColors:(id)arg1;

@end
