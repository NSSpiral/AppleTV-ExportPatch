/* Runtime dump - TNPageContentLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNPageContentLayout : TSDLayout
{
    TNPageLayout * mPageLayout;
    unsigned int mPageNumber;
}

@property TNPageLayout * pageLayout;
@property (readonly) unsigned int pageNumber;

- (Class)repClassOverride;
- (NSObject *)computeLayoutGeometry;
- (TNPageContentLayout *)initWithPageLayout:(TNPageLayout *)arg0;
- (void)setPageLayout:(TNPageLayout *)arg0;
- (TNPageLayout *)pageLayout;
- (void)validate;
- (unsigned int)pageCount;
- (unsigned int)pageNumber;

@end
