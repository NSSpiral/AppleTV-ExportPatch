/* Runtime dump - TSWPPageLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPPageLayout : TSDLayout
{
    id _headerFooterLayouts;
    id _headerFooterClipRects;
    id _headerFooterBorderRects;
}

@property (readonly, nonatomic) float headerHeight;
@property (readonly, nonatomic) float footerHeight;
@property (readonly, nonatomic) char allowsHeaderFooter;
@property (readonly, nonatomic) char hasHeaders;
@property (readonly, nonatomic) char hasFooters;
@property (readonly, nonatomic) <TSWPHeaderFooterProvider> * headerFooterProvider;
@property (readonly, nonatomic) char headerFooterProviderValid;
@property (readonly, nonatomic) struct CGRect bodyRect;

- (char)hasHeaders;
- (char)hasFooters;
- (<TSWPHeaderFooterProvider> *)headerFooterProvider;
- (char)headerFooterProviderValid;
- (NSObject *)headerFooterLayout:(int)arg0 atIndex:(int)arg1;
- (void)p_updateHeaderFooterClipAndBorderRect;
- (char)shouldHeaderFooterBeVisible:(int)arg0;
- (char)p_isHeaderFooter:(int)arg0 editingAtFragmentIndex:(int)arg1;
- (void)p_updateHeaderFooterClipAndBorderRects:(int)arg0;
- (char)i_updateHeaderFooterLayouts;
- (struct CGRect)bodyRect;
- (char)allowsHeaderFooter;
- (char)isHeaderFooterLayout:(NSObject *)arg0;
- (struct CGRect)clipRectForHeaderFooter:(id)arg0 atIndex:(SEL)arg1;
- (struct CGRect)borderRectForHeaderFooter:(id)arg0 atIndex:(SEL)arg1;
- (void)i_insertValidatedHeaderFooterLayouts;
- (void)i_clearHeaderFooterLayouts;
- (void).cxx_construct;
- (float)headerHeight;
- (float)footerHeight;

@end
