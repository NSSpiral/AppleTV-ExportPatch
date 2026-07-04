/* Runtime dump - QLPrintPageRenderer
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPrintPageRenderer : UIPrintPageRenderer
{
    <QLPrintPageRendererDataSource> * _dataSource;
    int _cachedNumberOfPages;
    struct CGSize _sizeWhenNumberOfPagesWasCached;
    char _printingDone;
    int _numberOfPrintedPages;
}

@property <QLPrintPageRendererDataSource> * dataSource;

- (void)prepareForPrinting;
- (void)setDataSource:(<QLPrintPageRendererDataSource> *)arg0;
- (QLPrintPageRenderer *)init;
- (<QLPrintPageRendererDataSource> *)dataSource;
- (int)numberOfPages;
- (void)prepareForDrawingPages:(struct _NSRange)arg0;
- (void)drawPageAtIndex:(int)arg0 inRect:(struct CGRect)arg1;

@end
