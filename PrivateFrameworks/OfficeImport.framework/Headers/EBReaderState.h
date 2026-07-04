/* Runtime dump - EBReaderState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBReaderState : EBState
{
    struct XlBinaryReader * mXlReader;
    struct XlSheetInfoTable * mXlSheetInfoTable;
    ECColumnWidthConvertor * mColumnWidthConvertor;
    struct XlEshObjectFactory * mXlEshObjectFactory;
    OABReaderState * mOAState;
    char mImportCSV;
}

@property (nonatomic) char importCSV;

- (void)dealloc;
- (id)columnWidthConvertor;
- (void)reportWarning:(struct TCTaggedMessageStructure *)arg0;
- (struct XlBinaryReader *)xlReader;
- (NSObject *)oaState;
- (EBReaderState *)initWithXlReader:(struct XlBinaryReader *)arg0 cancelDelegate:(struct SsrwOOStorage *)arg1 tracing:(struct XlEshBinaryReader)arg2;
- (void)pauseReading;
- (void)resumeReading;
- (void)readGlobalXlObjects;
- (struct XlSheetInfoTable *)xlSheetInfoTable;
- (char)importCSV;
- (void)setImportCSV:(char)arg0;

@end
