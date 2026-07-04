/* Runtime dump - TSCHChartNonRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartNonRep : NSObject <TSCHSupportsRendering>
{
    TSCHChartInfo * mChartInfo;
    NSArray * mRenderers;
    TSCHChartLayout * mChartLayout;
}

@property (retain, nonatomic) TSCHChartInfo * chartInfo;
@property (retain, nonatomic) TSCHChartLayout * chartLayout;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (float)viewScale;
- (TSCHChartInfo *)chartInfo;
- (TSCHChartLayout *)chartLayout;
- (char)renderGrid;
- (TSCHChartNonRep *)initWithChartInfo:(TSCHChartInfo *)arg0;
- (void)setChartInfo:(TSCHChartInfo *)arg0;
- (NSArray *)renderers;
- (char)forceRenderBlankBackground;
- (char)renderElementsShadowOnly;
- (char)renderElementsWithoutShadows;
- (NSIndexSet *)renderSeriesIndexSet;
- (id)renderValueIndexSetForSeries:(unsigned int)arg0;
- (char)renderElements;
- (char)renderLabels;
- (char)requireSeparateLabelLayer;
- (char)isDrawingIntoPDF;
- (char)renderReferenceLines;
- (struct CGRect)outerShadowFrame;
- (void)clearRenderers;
- (struct CGRect)convertUnscaledToBoundsRect:(NSObject *)arg0;
- (char)renderTrendLinesForSeriesIndex:(unsigned int)arg0;
- (NSObject *)commandController;
- (char)shouldShowLegendHighlight;
- (void)setupForDrawingInLayer:(id)arg0 context:(struct CGContext *)arg1;
- (void)didDrawInLayer:(id)arg0 context:(struct CGContext *)arg1;
- (struct CGRect)convertNaturalRectToLayerRelative:(id)arg0;
- (void)setChartLayout:(TSCHChartLayout *)arg0;
- (char)shadowsEnabled;
- (void)dealloc;
- (SCNGeometry *)geometry;
- (void)drawInContext:(struct CGContext *)arg0;

@end
