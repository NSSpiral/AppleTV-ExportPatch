/* Runtime dump - EXReadState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXReadState : OAVReadState
{
    unsigned int mCurrentSheetIndex;
    EDSheet * mCurrentSheet;
    unsigned long mCellStyleXfsOffset;
    double mDefaultColumnWidth;
    double mDefaultRowHeight;
    OCPPackagePart * mCurrentPart;
    OCPPackagePart * mWorkbookPart;
    struct map<long, unsigned int, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, unsigned int> > > mSharedFormulasMap;
    NSMutableArray * mArrayedFormulas;
    EDReference * mSheetDimension;
    EXOfficeArtState * mOfficeArtState;
    EXOAVState * mOAVState;
    BOOL mMaxColumnsWarned;
    BOOL mMaxRowsWarned;
    BOOL mIsPredefinedTableStylesRead;
    NSMutableDictionary * mReferenceForCommentTextBox;
    BOOL mIsPredefinedDxfsBeingRead;
    struct _xmlNs * mRelationshipNS;
    ECColumnWidthConvertor * mColumnWidthConvertor;
    NSMutableArray * mLegacyDrawables;
    EDWorkbook * mWorkbook;
    EDResources * mResources;
    <TCCancelDelegate> * mCancelDelegate;
    TCImportTracing * mTracing;
    CXNamespace * mEXSpreadsheetMLNamespace;
    CXNamespace * mEXSpreadsheetDrawingNamespace;
    CXNamespace * mEXSpreadsheetRelationsNamespace;
    unsigned int mCurrentRowMinColumnIndex;
    unsigned int mCurrentRowMaxColumnIndex;
}

@property (readonly, nonatomic) <TCCancelDelegate> * cancelDelegate;
@property (retain, nonatomic) CXNamespace * EXSpreadsheetMLNamespace;
@property (retain, nonatomic) CXNamespace * EXSpreadsheetDrawingNamespace;
@property (retain, nonatomic) CXNamespace * EXSpreadsheetRelationsNamespace;

- (void)dealloc;
- (char)isCancelled;
- (void).cxx_construct;
- (void).cxx_destruct;
- (EDSheet *)currentSheet;
- (EDWorkbook *)workbook;
- (id)columnWidthConvertor;
- (double)defaultColumnWidth;
- (double)defaultRowHeight;
- (void)setWorkbook:(EDWorkbook *)arg0;
- (void)setCurrentSheet:(EDSheet *)arg0;
- (void)reportWarning:(struct TCTaggedMessageStructure *)arg0;
- (void)setupNSForXMLFormat:(int)arg0;
- (NSObject *)oavState;
- (NSObject *)officeArtState;
- (<TCCancelDelegate> *)cancelDelegate;
- (void)setOfficeArtState:(NSObject *)arg0;
- (void)setCurrentSheetIndex:(unsigned int)arg0;
- (void)reportWorksheetWarning:(struct TCTaggedMessageStructure *)arg0;
- (void)setDefaultColumnWidth:(double)arg0;
- (void)setDefaultRowHeight:(double)arg0;
- (unsigned int)currentRowMinColumnIndex;
- (unsigned int)currentRowMaxColumnIndex;
- (unsigned long)cellStyleXfsOffset;
- (void)setCellStyleXfsOffset:(unsigned long)arg0;
- (CXNamespace *)EXSpreadsheetDrawingNamespace;
- (id)arrayedFormulas;
- (void)addSharedBaseFormulaIndex:(unsigned int)arg0 withIndex:(long)arg1;
- (unsigned int)sharedBaseFormulaIndexWithIndex:(long)arg0;
- (CXNamespace *)EXSpreadsheetMLNamespace;
- (EXReadState *)initWithWorkbookPart:(EDWorkbook *)arg0 cancelDelegate:(<TCCancelDelegate> *)arg1 tracing:(TCImportTracing *)arg2;
- (id)sheetDimension;
- (void)setCurrentRowMinColumnIndex:(unsigned int)arg0;
- (void)setCurrentRowMaxColumnIndex:(unsigned int)arg0;
- (void)resetForNewSheet;
- (id)workbookPart;
- (void)setCurrentPart:(MFMimePart *)arg0;
- (id)legacyDrawables;
- (MFMimePart *)currentPart;
- (BOOL)isPredefinedDxfsBeingRead;
- (BOOL)isPredefinedTableStylesRead;
- (void)setPredefinedTableStylesRead:(BOOL)arg0;
- (void)setPredefinedDxfsBeingRead:(BOOL)arg0;
- (NSObject *)authorForReference:(NSObject *)arg0;
- (NSObject *)textBoxForReference:(NSObject *)arg0;
- (void)relationshipNameSpaceForWorkbook:(struct _xmlNs *)arg0;
- (void)setSheetDimension:(id)arg0;
- (void)setTextBox:(GQHTextBox *)arg0 author:(WDCitationAuthor *)arg1 forReference:(NSObject *)arg2;
- (void)setEXSpreadsheetMLNamespace:(id)arg0;
- (void)setEXSpreadsheetDrawingNamespace:(id)arg0;
- (void)setEXSpreadsheetRelationsNamespace:(id)arg0;
- (unsigned int)currentSheetIndex;
- (struct _xmlNs *)relationshipNameSpaceForWorkbook;
- (CXNamespace *)EXSpreadsheetRelationsNamespace;
- (void)setResources:(NSArray *)arg0;
- (NSArray *)resources;

@end
