/* Runtime dump - EMCellNumberMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMCellNumberMapper : CMMapper
{
    double edValue;
    EDStyle * edStyle;
    EDWorkbook * workbook;
}

- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (EMCellNumberMapper *)initWithDoubleValue:(double)arg0 style:(NSObject *)arg1 workbook:(EDWorkbook *)arg2 parent:(NSObject *)arg3;
- (NSNumber *)formatValueAsNumber;
- (id)insertRedSpanIfNegativeAt:(id)arg0;

@end
