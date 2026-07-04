/* Runtime dump - TSCHChartBarElementsRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartBarElementsRenderer : TSCHRenderer
{
    char mVertical;
    char mTouchInResize;
    char mTouchInBody;
    unsigned int mHitSeriesIndex;
    unsigned int mHitValueIndex;
    double mHitFudgeOffset;
    char mResizeIsOutsideBody;
    struct CGRect mLastDrawRect;
}

- (void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect)arg1;
- (TSCHChartBarElementsRenderer *)initWithChartRep:(<TSCHSupportsRendering> *)arg0 layoutItem:(TSCHChartLayoutItem *)arg1;
- (struct ?)p_valueRangeForModelCache:(NSObject *)arg0 groupIndex:(unsigned int)arg1;
- (struct CGRect)renderingElementFrameForBarElementFrame:(NSObject *)arg0 groupIndex:(SEL)arg1 modelCache:(struct CGRect)arg2 stroke:(struct CGSize)arg3 viewScale:(float)arg4 contextInfo:(unsigned int)arg5 returningFillRect:(NSObject *)arg6 strokeRect:(struct CGRect)arg7;
- (void)p_drawBars:(struct CGContext *)arg0 visible:(struct CGRect)arg1;
- (void)p_drawLabels:(struct CGContext *)arg0 visible:(struct CGRect)arg1;
- (int)chunkPlane;
- (char)supportsSeparateLabelsRenderPass;
- (struct CGRect)barElementFrameForSeries:(id)arg0 groupIndex:(SEL)arg1;

@end
