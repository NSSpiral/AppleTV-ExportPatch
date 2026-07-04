/* Runtime dump - TNRenderingExporter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNRenderingExporter : TSARenderingExporter
{
    unsigned int mSheetIndex;
    unsigned int mPageIndex;
    unsigned int mTotalPagesCount;
    struct vector<unsigned int, std::__1::allocator<unsigned int> > mSheetPageCountArray;
    struct vector<unsigned int, std::__1::allocator<unsigned int> > mSheetPageStartArray;
    TNPageController * mPageController;
    TNPdfHyperlinkController * mHyperlinkController;
    NSMutableArray * mCanvasBasedSheets;
    char _renderingAllSheets;
}

@property (nonatomic) char renderingAllSheets;

- (TNRenderingExporter *)initWithDocumentRoot:(NSObject *)arg0;
- (struct CGRect)boundsRect;
- (id)currentInfos;
- (double)totalProgess;
- (struct CGRect)unscaledClipRect;
- (char)drawCurrentPageInContext:(struct CGContext *)arg0 viewScale:(float)arg1 unscaledClipRect:(struct CGRect)arg2 createPage:(struct CGSize)arg3;
- (char)incrementPage;
- (char)preparePage:(unsigned int)arg0;
- (void)drawAllPagesWithContext:(struct CGContext *)arg0 returnSuccess:(char *)arg1;
- (void)drawCurrentPageWithContext:(struct CGContext *)arg0 returnSuccess:(char *)arg1;
- (double)progressForCurrentPage;
- (struct CGRect)p_boundsRectForFirstPage;
- (char)p_isActiveSheetForm;
- (id)p_canvasBasedSheets;
- (unsigned int)numberOfCanvasBasedSheets;
- (char)isRenderingAllSheets;
- (struct vector<unsigned int, std::__1::allocator<unsigned int> >)p_pageCountArray;
- (struct vector<unsigned int, std::__1::allocator<unsigned int> >)p_pageStartArray;
- (unsigned int)sheetIndexForPage:(unsigned int)arg0;
- (unsigned int)inSheetPageIndexForPage:(unsigned int)arg0;
- (void)setSheetIndex:(unsigned int)arg0 andPageIndex:(unsigned int)arg1;
- (NSObject *)p_activeSheet;
- (id)quickLookSheets;
- (char)isPageInPortraitOrientation:(unsigned int)arg0;
- (int)pageIndexFromQuickLookSheet:(NSObject *)arg0;
- (void)setRenderingAllSheets:(char)arg0;
- (void)dealloc;
- (unsigned int)pageCount;
- (void).cxx_construct;
- (UIPageController *)pageController;
- (void).cxx_destruct;
- (void)setup;
- (void)teardown;

@end
