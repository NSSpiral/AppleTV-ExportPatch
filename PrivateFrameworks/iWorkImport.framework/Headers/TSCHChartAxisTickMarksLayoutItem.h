/* Runtime dump - TSCHChartAxisTickMarksLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisTickMarksLayoutItem : TSCHChartLayoutItem

@property (readonly, nonatomic) float majorTickmarkLength;
@property (readonly, nonatomic) float minorTickmarkLength;

- (struct CGSize)calcMinSize;
- (struct CGRect)calcDrawingRect;
- (struct CGAffineTransform)transformForRenderingOutElementSize:(struct CGSize *)arg0 outClipRect:(struct CGRect *)arg1;
- (float)majorTickmarkLength;
- (float)minorTickmarkLength;
- (struct CGRect)p_effectiveRootedLayoutRect;
- (int)location;
- (TSCHChartAxisTickMarksLayoutItem *)initWithParent:(TSCHChartLayoutItem *)arg0;

@end
