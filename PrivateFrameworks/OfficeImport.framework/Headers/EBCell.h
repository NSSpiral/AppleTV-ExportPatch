/* Runtime dump - EBCell
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBCell : NSObject

+ (int)convertXlCellTypeToED:(int)arg0;
+ (int)convertXlErrorEnumToED:(int)arg0;
+ (void)readXlCell:(struct XlCell *)arg0 edRowInfo:(int)arg1 edRowBlock:(struct XlFormulaInfo *)arg2 edRowBlocks:(BOOL)arg3 state:(BOOL)arg4;
+ (int)convertEDErrorValueEnumToXl:(int)arg0;

@end
