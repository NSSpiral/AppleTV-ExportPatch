/* Runtime dump - EBFill
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBFill : NSObject

+ (EBFill *)edFillFromXlXf:(struct XlXf *)arg0 edResources:(short)arg1;
+ (int)convertXlFillPatternEnumToED:(int)arg0;
+ (EBFill *)edFillFromXlDXf:(struct XlDXf *)arg0 edResources:(struct XlDXfFont *)arg1;
+ (int)convertEDPatternFillEnumToXl:(int)arg0;
+ (BOOL)extractFromEDFill:(id)arg0 foreColorReference:(id *)arg1 backColorReference:(id *)arg2 fillPatternEnum:(int *)arg3;

@end
