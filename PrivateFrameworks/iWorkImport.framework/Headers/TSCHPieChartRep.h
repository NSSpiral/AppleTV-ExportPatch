/* Runtime dump - TSCHPieChartRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPieChartRep : TSCHChartRep
{
    TSCHChartPieElementsRenderer * mPieElementRenderer;
    NSArray * mWedgeKnobs;
    NSDictionary * mSeriesIndexedPieWedgeDraggingLayers;
    char mHasDrawnSinceWedgeKnobTrackerCreated;
}

- (TSCHPieChartRep *)initWithLayout:(TSDLayout *)arg0 canvas:(TSDCanvas *)arg1;
- (void)renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect)arg1;
- (char)forceRenderBlankBackground;
- (void)clearRenderers;
- (NSObject *)pieElementRenderer;
- (float)dragTravelAlongBisectorBetweenStartPoint:(struct CGPoint)arg0 andEndingPoint:(struct CGPoint)arg1 forSeries:(unsigned int)arg2;
- (float)p_radius;
- (void)dealloc;

@end
