/* Runtime dump - EXCell
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXCell : NSObject

+ (void)initialize;
+ (int)edCellTypeFromXmlCellElement:(struct _xmlNode *)arg0 isDate:(struct _xmlNode *)arg1 stringIndex:(struct _xmlNode *)arg2;
+ (BOOL)edBoolFromXmlBoolString:(NSString *)arg0;
+ (double)dateTimeNumberFromXmlDateString:(NSString *)arg0 state:(NSObject *)arg1;
+ (int)edErrorFromXmlErrorString:(NSString *)arg0;
+ (void)edCellFromXmlCellElement:(struct _xmlNode *)arg0 edRowInfo:(struct _xmlNode *)arg1 edRowBlock:(struct _xmlNode *)arg2 edRowBlocks:(struct _xmlNode *)arg3 state:(struct _xmlNode *)arg4;

@end
