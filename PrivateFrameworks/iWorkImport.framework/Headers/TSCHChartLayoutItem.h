/* Runtime dump - TSCHChartLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartLayoutItem : NSObject <TSCHUnretainedParent>
{
    TSCHChartLayoutItem * mParent;
    NSArray * mChildren;
    char mTreeBuilt;
    struct CGPoint mOffset;
    struct CGSize mLayoutSize;
    char mLayoutSizeSet;
    struct CGRect mDrawingRectCache;
    char mDrawingRectCacheValid;
    struct CGSize mMinSizeCache;
    char mMinSizeCacheValid;
    struct CGRect mOverhangRectCache;
    char mOverhangRectCacheValid;
}

@property (readonly, nonatomic) TSCHChartLayoutItem * parent;
@property (readonly, nonatomic) TSCHChartRootLayoutItem * root;
@property (readonly, nonatomic) TSCHChartInfo * chartInfo;
@property (readonly, nonatomic) TSCHChartModel * model;
@property (nonatomic) struct ? layoutSettings;
@property (readonly) struct CGSize minSize;
@property (nonatomic) struct CGPoint layoutOffset;
@property (nonatomic) struct CGSize layoutSize;
@property (nonatomic) struct CGRect layoutRect;
@property (readonly, nonatomic) struct CGRect rootedLayoutRect;
@property (readonly, nonatomic) struct CGPoint drawingOffset;
@property (readonly, nonatomic) struct CGSize drawingSize;
@property (readonly, nonatomic) struct CGRect drawingRect;
@property (readonly, nonatomic) struct CGRect rootedDrawingRect;
@property (readonly, nonatomic) struct CGRect overhangRect;
@property (readonly, nonatomic) char isInResize;
@property (readonly, nonatomic) struct CGSize startingSize;
@property (readonly, nonatomic) unsigned int dataSetIndex;

+ (NSDictionary *)chartLayoutWithChartInfo:(TSCHChartInfo *)arg0;

- (TSCHChartInfo *)chartInfo;
- (void)clearParent;
- (struct CGRect)rootedLayoutRect;
- (id)subselectionKnobPositionsForSelection:(id)arg0;
- (struct CGSize)calcMinSize;
- (struct CGRect)calcDrawingRect;
- (void)protected_iterateHitChartElements:(struct CGPoint)arg0 withBlock:(id /* block */)arg1;
- (struct ?)layoutSettings;
- (void)clearAll;
- (void)setLayoutSettings:(struct ?)arg0;
- (struct CGRect)layoutRect;
- (struct CGPoint)layoutOffset;
- (void)setLayoutSize:(struct CGSize)arg0;
- (char)isInResize;
- (struct CGSize)startingSize;
- (void)p_layoutInward;
- (void)p_layoutOutward;
- (void)setLayoutOffset:(struct CGPoint)arg0;
- (struct CGRect)rootedDrawingRect;
- (NSObject *)renderersWithRep:(NSObject *)arg0;
- (struct CGRect)drawingRect;
- (void)layoutUsingMethod:(int)arg0;
- (unsigned int)dataSetIndex;
- (id)hitChartElements:(struct CGPoint)arg0 passingTest:(id /* block */)arg1;
- (NSArray *)subselectionHaloPositionsForSelections:(NSArray *)arg0;
- (struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg0;
- (struct CGRect)calcOverhangRect;
- (NSString *)p_description;
- (void)buildSubTree;
- (void)clearLayoutSize;
- (void)clearDrawingRect;
- (void)clearOverhangRect;
- (struct CGRect)overhangRect;
- (char)stopIteratingItemsContainingPoint:(struct CGPoint)arg0 withBlock:(id /* block */)arg1;
- (void)p_iterateChildrenWithBlock:(id /* block */)arg0;
- (void)clearMinSize;
- (void)setLayoutRect:(struct CGRect)arg0;
- (struct CGSize)drawingSize;
- (struct CGPoint)overhangOffset;
- (struct CGSize)overhangSize;
- (float)overhangMagnitudeForEdge:(unsigned int)arg0;
- (struct CGPoint)drawingOffset;
- (void)dealloc;
- (NSString *)description;
- (struct CGSize)minSize;
- (TSCHChartModel *)model;
- (struct CGSize)layoutSize;
- (TSCHChartRootLayoutItem *)root;
- (TSCHChartLayoutItem *)parent;
- (TSCHChartLayoutItem *)initWithParent:(TSCHChartLayoutItem *)arg0;

@end
