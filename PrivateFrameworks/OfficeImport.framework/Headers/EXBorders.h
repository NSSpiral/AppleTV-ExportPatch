/* Runtime dump - EXBorders
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXBorders : NSObject

+ (void)initialize;
+ (NSObject *)edBorderFromXmlElement:(struct _xmlNode *)arg0 diagonalType:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (int)edDiagStyleFromXmlElement:(struct _xmlNode *)arg0;
+ (NSObject *)edBordersFromXmlBordersElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (int)edBorderStyleFromXmlBorderStyleString:(NSString *)arg0;

@end
