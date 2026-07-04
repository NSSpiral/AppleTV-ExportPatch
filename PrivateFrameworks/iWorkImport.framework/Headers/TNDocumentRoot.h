/* Runtime dump - TNDocumentRoot
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNDocumentRoot : TSADocumentRoot <TSTResolverContainerNameProvider>
{
    TNTheme * mTheme;
    TSSStylesheet * mStylesheet;
    NSMutableArray * mSheets;
    TSKTreeNode * mSidebarOrder;
    unsigned int mSheetNameCounter;
    TNUIState * mUIState;
    char mDocumentWasPreparedFromTemplate;
    char _printingAllSheets;
    NSString * _printerID;
    NSString * _paperID;
    struct CGSize _pageSize;
}

@property (readonly, nonatomic) TSSStylesheet * stylesheet;
@property (retain, nonatomic) TNTheme * theme;
@property (readonly, nonatomic) NSArray * sheets;
@property (copy, nonatomic) NSString * printerID;
@property (copy, nonatomic) NSString * paperID;
@property (nonatomic) struct CGSize pageSize;
@property (readonly, nonatomic) unsigned int tableCount;
@property (readonly, retain, nonatomic) TSKTreeNode * sidebarOrder;
@property (retain, nonatomic) TNUIState * uiState;
@property (nonatomic) char printingAllSheets;
@property (copy, nonatomic) NSArray * selectedQuickCalcFunctions;
@property (nonatomic) char removedAllQuickCalcFunctions;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct CGSize)previewImageMaxSizeForType:(unsigned int)arg0;
+ (struct CGSize)previewImageSizeForType:(unsigned int)arg0;

- (void)setPageSize:(struct CGSize)arg0;
- (TNDocumentRoot *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)resolverMatchingName:(NSString *)arg0;
- (void)documentDidLoad;
- (char)isMultiPageForQuickLook;
- (NSObject *)previewImageForSize:(struct CGSize)arg0;
- (void)setStylesheetForUpgradeToSingleStylesheet:(NSObject *)arg0;
- (void)prepareNewDocumentWithTemplateBundle:(NSObject *)arg0;
- (void)initializeForImport;
- (char)shouldAllowDrawableInGroups:(id)arg0 forImport:(char)arg1;
- (void)setStylesheet:(TSSStylesheet *)arg0 andThemeForImport:(id)arg1;
- (id)UIStateForChart:(id)arg0;
- (void)setUIState:(NSObject *)arg0 forChart:(GQHChart *)arg1;
- (char)shouldShowComments;
- (void)setThemeForTemplateImport:(id)arg0;
- (id)resolverContainerNameForResolver:(id)arg0;
- (NSObject *)nameForResolverContainer:(NSObject *)arg0;
- (NSString *)resolverContainerForName:(NSString *)arg0 caseSensitive:(char)arg1;
- (NSString *)resolverContainerNamesMatchingPrefix:(NSString *)arg0;
- (NSString *)resolverMatchingName:(NSString *)arg0 contextResolver:(NSObject *)arg1;
- (NSString *)resolverMatchingName:(NSString *)arg0 contextContainerName:(NSString *)arg1;
- (NSString *)resolversMatchingPrefix:(NSString *)arg0;
- (int)naturalAlignmentAtCharIndex:(unsigned int)arg0 inTextStorage:(NSTextStorage *)arg1;
- (int)verticalAlignmentForTextStorage:(id)arg0;
- (TNUIState *)uiState;
- (void)setUiState:(TNUIState *)arg0;
- (NSArray *)selectedQuickCalcFunctions;
- (void)setSelectedQuickCalcFunctions:(NSArray *)arg0;
- (char)removedAllQuickCalcFunctions;
- (void)setRemovedAllQuickCalcFunctions:(char)arg0;
- (void)p_buildSidebarOrder;
- (void)setPaperID:(NSString *)arg0;
- (unsigned int)p_tableCountForSheet:(NSObject *)arg0;
- (void)incrementSheetNameCounter;
- (void)insertSheet:(NSObject *)arg0 sheetIndex:(unsigned int)arg1 context:(NSObject *)arg2;
- (void)p_removeSidebarNodeForSheet:(NSObject *)arg0;
- (NSString *)p_untitledSheetName;
- (void)p_addSidebarNodeForSheet:(NSObject *)arg0;
- (char)validName:(NSString *)arg0 forRenamingSheet:(NSObject *)arg1;
- (NSArray *)sheets;
- (id)p_resolverContainerForResolver:(id)arg0;
- (NSString *)paperID;
- (id)p_chartsWantingDeferredUpgrade;
- (void)performDeferredUpgradeImportOperationsOnNewThreadForCharts:(id)arg0;
- (void)performDeferredUpgradeImportOperationsRequiringCalcEngine;
- (NSObject *)p_previewImageWithImageSize:(struct CGSize)arg0;
- (struct CGRect)p_contentFrameToCaptureForSheet:(NSObject *)arg0;
- (float)p_imageBorderForSize:(struct CGSize)arg0;
- (struct CGSize)p_adjustCapturedContentSize:(struct CGSize)arg0 toAspectRatio:(struct CGSize)arg1;
- (void)initializeHardCodedBlankDocument;
- (void)setImportedPaperID:(NSObject *)arg0 printerID:(NSString *)arg1;
- (unsigned int)tableCount;
- (void)removeAllSheets;
- (void)addSheet:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)removeSheet:(NSObject *)arg0;
- (void)moveSheetFromIndex:(unsigned int)arg0 toIndex:(unsigned int)arg1;
- (char)validNameForNewSheet:(NSObject *)arg0;
- (void)setSidebarChildren:(NSArray *)arg0 forSheet:(NSObject *)arg1;
- (void)sheet:(NSObject *)arg0 insertedDrawable:(id)arg1;
- (void)sheet:(NSObject *)arg0 removedDrawable:(id)arg1;
- (void)validateViewState:(NSObject *)arg0;
- (char)isPrintingAllSheets;
- (void)setPrintingAllSheets:(char)arg0;
- (TSKTreeNode *)sidebarOrder;
- (void)dealloc;
- (TNDocumentRoot *)initWithContext:(TSPObjectContext *)arg0;
- (void).cxx_construct;
- (void)setPrinterID:(NSString *)arg0;
- (NSString *)printerID;
- (unsigned int)applicationType;
- (NSEnumerator *)childEnumerator;
- (TNTheme *)theme;
- (struct CGSize)pageSize;
- (NSObject *)activeSheet;
- (void)setTheme:(TNTheme *)arg0;
- (TSSStylesheet *)stylesheet;

@end
