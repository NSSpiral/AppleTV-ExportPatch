/* Runtime dump - TPRenderingExporter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPRenderingExporter : TSARenderingExporter
{
    TPPdfHyperlinkController * mHyperlinkController;
    unsigned int mPageIndex;
    unsigned int mPageCount;
    int mLastPageIndexForLayout;
    char mDidLimitPageLayout;
}

@property (nonatomic) int lastPageIndexForLayout;
@property (readonly) char didLimitPageLayout;

- (TPRenderingExporter *)initWithDocumentRoot:(NSObject *)arg0;
- (struct CGRect)boundsRect;
- (id)currentInfos;
- (double)totalProgess;
- (struct CGRect)unscaledClipRect;
- (char)incrementPage;
- (char)preparePage:(unsigned int)arg0;
- (double)progressForCurrentPage;
- (char)hasMoreThanOnePageToPrint;
- (int)lastPageIndexForLayout;
- (void)setLastPageIndexForLayout:(int)arg0;
- (char)didLimitPageLayout;
- (void)dealloc;
- (unsigned int)pageCount;
- (void)setup;
- (void)teardown;

@end
