/* Runtime dump - EBState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBState : NSObject
{
    struct XlLinkTable * mXlLinkTable;
    struct XlNameTable * mXlNameTable;
    struct ChVector<OcText> * mSheetNames;
    struct XlFormulaProcessor * mXlFormulaProcessor;
    EDWorkbook * mWorkbook;
    EDResources * mResources;
    <TCCancelDelegate> * mCancelDelegate;
    TCTracing * mTracing;
}

@property (readonly, nonatomic) <TCCancelDelegate> * cancelDelegate;

- (void)dealloc;
- (char)isCancelled;
- (EDWorkbook *)workbook;
- (void)setWorkbook:(EDWorkbook *)arg0;
- (EBState *)initWithCancelDelegate:(<TCCancelDelegate> *)arg0 tracing:(TCImportTracing *)arg1;
- (TCImportTracing *)tracing;
- (<TCCancelDelegate> *)cancelDelegate;
- (struct XlFormulaProcessor *)xlFormulaProcessor;
- (struct XlNameTable *)xlNameTable;
- (struct XlLinkTable *)xlLinkTable;
- (struct ChVector<OcText> *)sheetNames;
- (void)setResources:(NSArray *)arg0;
- (NSArray *)resources;

@end
