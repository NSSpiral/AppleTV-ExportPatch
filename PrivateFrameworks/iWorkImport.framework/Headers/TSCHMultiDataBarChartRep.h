/* Runtime dump - TSCHMultiDataBarChartRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataBarChartRep : TSCHMultiDataChartRep

- (void)updateAppearanceForElementLayer:(id)arg0 seriesIndex:(unsigned int)arg1;
- (unsigned int)p_currentSeriesIndex;
- (NSObject *)p_barElementsRenderer;
- (unsigned int)p_currentGroupIndex;
- (NSCache *)p_currentBarSeriesModelCache;
- (struct CGRect)p_clampRenderingElementFrame:(NSObject *)arg0 barElementFrame:(SEL)arg1;
- (struct CGRect)p_renderingElementFrameForBarElementFrame:(NSObject *)arg0;
- (void)updateElementLayerLayoutForCurrentRepElementIndexAnimationInfo:(NSDictionary *)arg0;
- (char)p_repElementIsAboveInterceptForSeriesIndex:(unsigned int)arg0 groupIndex:(unsigned int)arg1;
- (void)p_calculateInterceptForElementFrame:(struct CGRect)arg0 elementLayer:(struct CGSize)arg1 animationInfo:(KNAnimationInfo *)arg2;
- (void)updateElementFrame:(struct CGRect)arg0 forElementLayer:(struct CGSize)arg1 series:(struct Transform * *)arg2 addingAnimationsToAnimationInfo:(NSDictionary *)arg3;
- (struct CGRect)currentRepElementBoundsInNaturalSpace;

@end
