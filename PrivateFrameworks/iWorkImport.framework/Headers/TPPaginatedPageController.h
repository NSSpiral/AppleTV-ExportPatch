/* Runtime dump - TPPaginatedPageController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPaginatedPageController : TPPageController
{
    TPTextWrapController * _wrapController;
}

- (TPPaginatedPageController *)initWithDocumentRoot:(TPDocumentRoot *)arg0;
- (NSObject *)textWrapper;
- (char)isPaginated;
- (unsigned int)pageIndexFromCanvasPoint:(struct CGPoint)arg0;
- (struct CGRect)pageRectForPageIndex:(NSObject *)arg0;
- (Class)p_pageInfoClass;
- (struct CGPoint)pageOriginForPageIndex:(unsigned int)arg0;
- (unsigned int)calculatePageIndexFromCanvasPoint:(struct CGPoint)arg0;
- (void)p_performWithCachedPageLayouts:(id)arg0;
- (struct _NSRange)p_pageRangeAffectedByInfo:(NSDictionary *)arg0;
- (unsigned int)p_backupPageIndexForCharIndex:(unsigned int)arg0;
- (void)d_toggleWrapAnimation;
- (struct CGSize)canvasSizeToFitAllPages;
- (void)processHeaderFooterPropertyChanged;
- (void)syncProcessChanges:(id)arg0 forChangeSource:(NSObject *)arg1;
- (void)p_rebuildCachedLayoutChildrenFromStartPage:(unsigned int)arg0 toEndPage:(unsigned int)arg1 setNeedsLayout:(char)arg2;
- (void)dealloc;
- (struct CGSize)pageSize;
- (void)teardown;

@end
