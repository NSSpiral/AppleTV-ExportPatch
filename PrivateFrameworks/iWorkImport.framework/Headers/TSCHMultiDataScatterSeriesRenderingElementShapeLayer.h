/* Runtime dump - TSCHMultiDataScatterSeriesRenderingElementShapeLayer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataScatterSeriesRenderingElementShapeLayer : CALayer <TSCHMultiDataElementShapeLayer>

- (char)aboveIntercept;
- (<TSCHSupportsRendering> *)chartRep;
- (CALayer *)currentValueLayer;
- (void)p_addAnimationsForUpdatingImage:(struct CGImage *)arg0 frame:(struct CGRect)arg1 toAnimationInfo:(struct CGSize)arg2;
- (void)setFill:(TSDFill *)arg0 stroke:(TSDStroke *)arg1 withViewScale:(float)arg2;
- (void)updateElementFrame:(struct CGRect)arg0 forSeries:(struct CGSize)arg1 addingAnimationsToAnimationInfo:(NSDictionary *)arg2;
- (void)updateElementFrameToNullForSeries:(id)arg0 addingAnimationsToAnimationInfo:(NSDictionary *)arg1;

@end
