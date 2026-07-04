/* Runtime dump - EBBorders
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBBorders : NSObject

+ (int)convertXlBorderEnumToED:(int)arg0;
+ (int)convertXlDiagStyleEnumToED:(int)arg0;
+ (EBBorders *)edBordersFromXlDXf:(struct XlDXf *)arg0 edResources:(struct XlDXfFont *)arg1;
+ (int)convertEDBorderEnumToXl:(int)arg0;
+ (int)convertEDDiagonalEnumToXl:(int)arg0;
+ (EBBorders *)edBordersFromXlXf:(struct XlXf *)arg0 edResources:(short)arg1;

@end
