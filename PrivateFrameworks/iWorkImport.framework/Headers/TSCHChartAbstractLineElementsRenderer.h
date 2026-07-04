/* Runtime dump - TSCHChartAbstractLineElementsRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAbstractLineElementsRenderer : TSCHRenderer

- (void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect)arg1;
- (int)chunkPlane;
- (NSObject *)p_findChartRootLayoutItem:(NSObject *)arg0;
- (char)useBlendModeCopyForTransparencyLayer;
- (void)p_setupContextForRendering:(struct CGContext *)arg0 layerRect:(struct CGRect)arg1 modelCache:(struct CGSize)arg2 shadow:(TSDShadow *)arg3 outDidEnableTransparencyLayer:(id)arg4;
- (struct CGAffineTransform)p_adjustTransformForAADefeatInContext:(struct CGContext *)arg0 inTransform:(struct CGAffineTransform)arg1 forSeriesShape:(struct CGPath *)arg2 inBodyBounds:(struct CGRect)arg3;
- (void)p_clipOutSymbolsInContext:(struct CGContext *)arg0 withTransformArray:(struct CGAffineTransform *)arg1 withCount:(unsigned int)arg2 forSeries:(CHDPieSeries *)arg3;
- (void)p_renderLabelsIntoContext:(struct CGContext *)arg0 seriesIndex:(unsigned int)arg1 model:(NSObject *)arg2 modelCache:(NSObject *)arg3 bodyLayoutItem:(TSCHChartBodyLayoutItem *)arg4 valueSet:(char)arg5;
- (void)p_finishContextAfterRendering:(struct CGContext *)arg0 modelCache:(NSObject *)arg1 didEnableTransparencyLayer:(char)arg2;
- (id)symbolTransformsForRenderingElements;

@end
