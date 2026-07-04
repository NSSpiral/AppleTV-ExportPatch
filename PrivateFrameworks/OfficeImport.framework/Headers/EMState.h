/* Runtime dump - EMState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMState : CMState
{
    EDWorkbook * _workbook;
    EDSheet * _currentSheet;
}

@property (retain) EDWorkbook * workbook;
@property EDSheet * currentSheet;

- (void)dealloc;
- (EDSheet *)currentSheet;
- (EDWorkbook *)workbook;
- (void)setWorkbook:(EDWorkbook *)arg0;
- (void)setCurrentSheet:(EDSheet *)arg0;

@end
