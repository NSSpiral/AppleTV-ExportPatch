/* Runtime dump - TSCHChartPieElementsRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartPieElementsRenderer : TSCHRenderer
{
    struct CGPoint mHitPoint;
    unsigned int mHitSeries;
    float mHitStartAngle;
    float mHitRadius;
    float mHitExplosion;
    char mDidMoveDuringTouchIfNotThenRotateChartForDemo;
    NSIndexSet * mPartialRenderingSeriesIndexSet;
    char mPartialRenderingInclusionFlag;
}

- (void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect)arg1;
- (int)chunkPlane;
- (struct CGLayer *)p_newCGLayerForUserSpaceRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1 outUserSpaceLayerBounds:(id)arg2;
- (void)p_drawWedgePathIntoContext:(struct CGContext *)arg0 path:(struct CGPath *)arg1 fill:(id)arg2 stroke:(TSDStroke *)arg3 opacity:(float)arg4;
- (char)p_shouldRenderSeriesIndex:(unsigned int)arg0;
- (struct CGLayer *)p_newPreRenderedImageWithContext:(struct CGContext *)arg0 path:(struct CGPath *)arg1 fill:(id)arg2 stroke:(TSDStroke *)arg3 shadow:(TSDShadow *)arg4 outUserSpaceLayerBounds:(struct CGRect *)arg5;
- (void)p_drawOnlyShadow:(id)arg0 forImage:(struct CGLayer *)arg1 intoRect:(struct CGRect)arg2 intoContext:(struct CGSize)arg3 atViewScale:(id)arg4 usingBlendMode:(struct CGContext *)arg5 opacity:(float)arg6;
- (void)p_drawOnlyShapeImage:(struct CGLayer *)arg0 intoRect:(struct CGRect)arg1 intoContext:(struct CGSize)arg2 usingBlendMode:(id)arg3 opacity:(struct CGContext *)arg4;
- (struct CGRect)chartLayoutSpaceRenderingRect;
- (void)drawOnlySeriesIndicies:(id)arg0;
- (void)drawAllButSeriesIndicies:(id)arg0;
- (void)drawAll;
- (void)dealloc;

@end
