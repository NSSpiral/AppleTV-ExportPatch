/* Runtime dump - EBConditionalFormat
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBConditionalFormat : NSObject

+ (int)convertXlConditionalFmtTypeEnumToED:(int)arg0;
+ (int)convertXlConditionalFmtOperatorEnumToED:(int)arg0;
+ (BOOL)validXlCf:(struct XlCf *)arg0;
+ (int)convertEDConditionalFmtTypeEnumToXl:(int)arg0;
+ (int)convertEDConditionalFmtOperatorEnumToXl:(int)arg0;
+ (void)readXlConditionalFormat:(struct XlConditionalFormat *)arg0 toEDConditionalFormatting:(struct XlRecord * *)arg1 state:(struct XlRecord)arg2;

@end
