/* Runtime dump - TNPageLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNPageLayout : TSWPPageLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver>
{
    char mIsChildLayoutsValid;
    struct ? mPageCoordinate;
    TNPageController * mPageController;
    TNPageContentLayout * mContentLayout;
    char mIsPlaceholder;
    TNSheet * mSheet;
}

@property struct ? pageCoordinate;
@property TNPageController * pageController;
@property (readonly) struct CGRect pageBounds;
@property (readonly) struct CGRect contentFrame;
@property (retain) TNPageContentLayout * contentLayout;
@property char placeholder;
@property (retain) TNSheet * sheet;
@property (readonly, nonatomic) TSWPPadding * layoutMargins;
@property (readonly, nonatomic) unsigned int columnCount;
@property (readonly, nonatomic) char alwaysStartsNewTarget;
@property (readonly, nonatomic) char shrinkTextToFit;
@property (readonly, nonatomic) char columnsAreLeftToRight;
@property (readonly, nonatomic) float textScaleFactor;

+ (NSObject *)pageLayoutWithPageController:(TNPageController *)arg0 pageCoordinate:(struct ?)arg1;

- (Class)repClassOverride;
- (void)invalidateSize;
- (NSObject *)computeLayoutGeometry;
- (void)updateChildrenFromInfo;
- (NSArray *)dependentLayouts;
- (void)parentDidChange;
- (void)willBeAddedToLayoutController:(BRController *)arg0;
- (void)willBeRemovedFromLayoutController:(BRController *)arg0;
- (char)textIsVertical;
- (struct CGSize)adjustedInsetsForTarget:(NSObject *)arg0;
- (float)widthForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1;
- (float)gapForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1;
- (float)positionForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1 target:(NSObject *)arg2 outWidth:(float *)arg3 outGap:(float *)arg4;
- (char)alwaysStartsNewTarget;
- (char)shrinkTextToFit;
- (char)columnsAreLeftToRight;
- (float)textScaleFactor;
- (unsigned int)autosizeFlagsForTextLayout:(NSObject *)arg0;
- (int)verticalAlignmentForTextLayout:(NSObject *)arg0;
- (void)invalidateForAutosizingTextLayout:(NSObject *)arg0;
- (struct CGRect)nonAutosizedFrameForTextLayout:(NSObject *)arg0;
- (struct CGRect)autosizedFrameForTextLayout:(NSObject *)arg0 textSize:(SEL)arg1;
- (NSObject *)dependentsOfTextLayout:(NSObject *)arg0;
- (Class)repClassForTextLayout:(NSObject *)arg0;
- (void)storage:(TSWPStorage *)arg0 didChangeRange:(struct _NSRange)arg1 delta:(int)arg2 broadcastKind:(int)arg3;
- (<TSWPHeaderFooterProvider> *)headerFooterProvider;
- (struct CGRect)bodyRect;
- (TNPageLayout *)initWithPageController:(TNPageController *)arg0 pageCoordinate:(struct ?)arg1;
- (void)setPageCoordinate:(struct ?)arg0;
- (struct ?)pageCoordinate;
- (TNPageContentLayout *)contentLayout;
- (NSDictionary *)p_pageInfo;
- (void)performBlockForEachHeaderFooterLayout:(NSObject *)arg0;
- (char)containsLayoutForInfo:(NSDictionary *)arg0;
- (void)setContentLayout:(TNPageContentLayout *)arg0;
- (void)dealloc;
- (NSString *)description;
- (TSWPPadding *)layoutMargins;
- (void)setPlaceholder:(char)arg0;
- (unsigned int)pageCount;
- (unsigned int)columnCount;
- (TNPageController *)pageController;
- (void)setPageController:(TNPageController *)arg0;
- (unsigned int)pageNumber;
- (struct CGRect)pageBounds;
- (char)isPlaceholder;
- (void)setChildren:(NSArray *)arg0;
- (void)addChild:(OADDrawable *)arg0;
- (void)setSheet:(TNSheet *)arg0;
- (TNSheet *)sheet;
- (struct CGRect)contentFrame;

@end
