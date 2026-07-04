/* Runtime dump - OABColor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABColor : NSObject

+ (int)oadMapColorIndexWithEshSchemeColorIndex:(unsigned short)arg0;
+ (int)readSystemColorID:(int)arg0;
+ (struct EshColor)propertyColor:(struct AdjustedColor)arg0 colorPropertiesManager:(NSObject *)arg1;
+ (UIColor *)readColor:(struct EshColor *)arg0 colorPropertiesManager:(struct EshColor)arg1 colorPalette:(unsigned short)arg2;
+ (int)readColorAdjustmentType:(int)arg0;
+ (int)writeSystemColorID:(int)arg0;
+ (unsigned short)eshSchemeColorIndexWithOADMapColorIndex:(int)arg0;

@end
