/* Runtime dump - TSCHChartTitleLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartTitleLayoutItem : TSCHChartLayoutItem
{
    float mChartBodyWidth;
    NSString * mEditedString;
    float mMinHitSize;
}

@property (nonatomic) float chartBodyWidth;
@property (copy, nonatomic) NSString * editedString;
@property (nonatomic) float minHitSize;

- (id)subselectionKnobPositionsForSelection:(id)arg0;
- (struct CGSize)calcMinSize;
- (struct CGRect)calcDrawingRect;
- (void)protected_iterateHitChartElements:(struct CGPoint)arg0 withBlock:(id /* block */)arg1;
- (struct CGAffineTransform)transformForRenderingOutElementSize:(struct CGSize *)arg0 outClipRect:(struct CGRect *)arg1;
- (struct CGAffineTransform)transformForRenderingRange:(struct _NSRange)arg0 outElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2;
- (void)setEditedString:(NSString *)arg0;
- (NSObject *)renderersWithRep:(NSObject *)arg0;
- (NSArray *)subselectionHaloPositionsForSelections:(NSArray *)arg0;
- (struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg0;
- (struct CGRect)calcOverhangRect;
- (void)setChartBodyWidth:(float)arg0;
- (struct CGSize)calcMinSizeForModel:(NSObject *)arg0;
- (NSObject *)p_titleParagraphStyle;
- (float)chartBodyWidth;
- (struct CGAffineTransform)p_transformForRenderingRangePtr:(struct _NSRange *)arg0 outElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2;
- (float)minHitSize;
- (NSString *)editedString;
- (void)setMinHitSize:(float)arg0;
- (void)dealloc;
- (NSString *)titleText;
- (TSCHChartTitleLayoutItem *)initWithParent:(TSCHChartLayoutItem *)arg0;

@end
