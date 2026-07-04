/* Runtime dump - EXRow
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXRow : NSObject

+ (void)edRowFrom:(struct _xmlTextReader *)arg0 edRowInfo:(struct EDRowInfo *)arg1 edRowBlock:(id /* block */)arg2 edRowBlocks:(id)arg3 state:(NSObject *)arg4;
+ (void)readRowsFrom:(struct _xmlTextReader *)arg0 state:(NSObject *)arg1;
+ (EXRow *)createFormulaReferenceRangeForRowBlocks:(id)arg0;

@end
