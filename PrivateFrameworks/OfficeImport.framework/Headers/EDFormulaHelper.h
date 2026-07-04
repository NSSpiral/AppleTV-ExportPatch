/* Runtime dump - EDFormulaHelper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDFormulaHelper : NSObject <EFHelper>
{
    EDWorkbook * mWorkbook;
    EDWorksheet * mWorksheet;
    int mRowNumber;
    int mColumnNumber;
    ECMappingContext * mMappingContext;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (int)rowNumber;
- (EDWorkbook *)workbook;
- (unsigned int)createIndexWithType:(int)arg0 firstSheetIndex:(unsigned int)arg1 lastSheetIndex:(unsigned int)arg2;
- (unsigned int)resolveFile:(NSString *)arg0;
- (unsigned int)resolveTableColumn:(EDTable *)arg0 columnName:(NSString *)arg1;
- (int)resolveFunctionName:(NSString *)arg0;
- (int)columnNumber;
- (unsigned int)resolveName:(NSString *)arg0;
- (unsigned int)resolveSheet:(NSString *)arg0;
- (char)isCurrentSheet:(NSString *)arg0;
- (unsigned int)resolveFirstSheet:(NSString *)arg0 lastSheet:(NSString *)arg1;
- (EDTable *)resolveTable:(NSString *)arg0;
- (unsigned int)resolveTableToSheetId:(NSString *)arg0;
- (EDFormulaHelper *)initWithWorkbook:(EDWorkbook *)arg0 worksheet:(EDWorksheet *)arg1 rowNumber:(int)arg2 columnNumber:(int)arg3;

@end
