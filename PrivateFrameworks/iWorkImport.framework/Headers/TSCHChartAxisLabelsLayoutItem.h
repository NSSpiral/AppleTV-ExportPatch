/* Runtime dump - TSCHChartAxisLabelsLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisLabelsLayoutItem : TSCHChartLayoutItem
{
    unsigned int mStride;
    float mAngleInDegrees;
    float mAngleInRadians;
}

@property (readonly, nonatomic) unsigned int stride;

- (NSObject *)labelsLayoutItem;
- (unsigned int)numberOfLabelsForAxis:(id)arg0;
- (struct CGAffineTransform)transformForRenderingLabel:(unsigned int)arg0 outElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2;
- (id)labelStringForAxis:(id)arg0 index:(unsigned int)arg1;
- (double)unitSpaceValueForAxis:(id)arg0 index:(unsigned int)arg1;
- (struct CGSize)calcMinSize;
- (struct CGRect)calcDrawingRect;
- (void)protected_iterateHitChartElements:(struct CGPoint)arg0 withBlock:(id /* block */)arg1;
- (void)clearAll;
- (void)setLayoutSize:(struct CGSize)arg0;
- (NSObject *)axisLayoutItem;
- (unsigned int)selectionPathLabelIndexForIndex:(unsigned int)arg0 axis:(id)arg1;
- (struct CGAffineTransform)transformForRenderingLabel:(unsigned int)arg0 range:(struct _NSRange)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3;
- (struct CGAffineTransform)transformForRenderingLabel:(unsigned int)arg0 usingString:(NSString *)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3 useAngle:(struct CGSize)arg4;
- (struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg0;
- (struct CGRect)calcOverhangRect;
- (char)showLabelsForAxis:(id)arg0;
- (unsigned int)strideInLayoutArea:(struct CGRect)arg0;
- (NSObject *)selectionPathLabelType;
- (struct CGPoint)axisAnchorForPosition:(int)arg0 degrees:(float)arg1 area:(struct CGRect)arg2 unrotatedSize:(struct CGSize)arg3 unitSpaceValue:(id)arg4;
- (struct CGPoint)labelAnchorForPosition:(int)arg0 degrees:(float)arg1;
- (struct CGRect)layoutSpaceRectForAllLabels;
- (struct CGAffineTransform)p_transformForRenderingLabel:(unsigned int)arg0 range:(struct _NSRange *)arg1 inLayoutArea:(struct CGRect)arg2 outElementSize:(struct CGSize)arg3 outClipRect:(struct CGRect *)arg4 usingString:(struct CGSize *)arg5 stride:(struct CGRect *)arg6 useAngle:(struct CGSize)arg7;
- (unsigned int)p_computeAutoStrideInLayoutArea:(struct CGRect)arg0;
- (void)p_rect:(struct CGRect *)arg0 andTransform:(struct CGSize)arg1 inLayoutArea:(struct CGRect)arg2 forIndex:(struct CGAffineTransform *)arg3 paragraphStyle:(struct CGRect)arg4;
- (int)p_smallestSecondValueLabelIndex:(int)arg0 start:(int)arg1 end:(int)arg2 inLayoutArea:(struct CGRect)arg3 paragraphStyle:(struct CGSize)arg4 isTop:(char)arg5;
- (int)p_smallestSecondValueLabelIndex:(int)arg0 start:(int)arg1 end:(int)arg2 inLayoutArea:(struct CGRect)arg3 paragraphStyle:(struct CGSize)arg4;
- (NSObject *)p_axisFromLayoutItem;
- (NSString *)p_overrideLabelStringForHitTestingEmptyLabel;
- (unsigned int)stride;

@end
