/* Runtime dump - TSCHMultiDataChartRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartRep : TSCHChartRep
{
    CALayer * mRootLayer;
    CALayer * mElementsContainerLayer;
    char mRenderingBackgroundLayer;
    char mRenderingElementShapeLayer;
    char mRenderingElementLabelsLayer;
    char mRenderingDataSetNameLayer;
    char mRenderingReferenceLineLayer;
    char mAnimatedLayersNeedUpdate;
    char mShouldAnimateLabelsQuickly;
    char mIsAnimatingForBuilds;
    unsigned int mElementLayersMultiDataSetIndex;
    int mGridDirection;
    NSMutableDictionary * mIndexedElements;
    TSCHMultiDataChartRepElementIndex * mCurrentRepElementIndex;
    CALayer * mDataSetNameLayer;
    CALayer * mReferenceLinesContainerLayer;
    NSSet * mReferenceLinesToRender;
    NSSet * mReferenceLineLabelsSearchSelectionsToRender;
    NSMutableDictionary * mLayerIdToLayerMap;
    NSMutableDictionary * mPreviousOutsideBodyBounds;
    char _shouldDisableMultiDataControls;
}

@property (readonly, nonatomic) char shouldDisableMultiDataControls;

- (TSCHMultiDataChartRep *)initWithLayout:(TSDLayout *)arg0 canvas:(TSDCanvas *)arg1;
- (char)frameInUnscaledCanvasNeedsPaddingForShadows;
- (void)willBeginZooming;
- (void)didEndZooming;
- (char)isHorizontalChart;
- (NSObject *)p_chartModel;
- (id)p_elementLayers;
- (char)needsAnimationForAnimationInfo:(NSDictionary *)arg0;
- (NSObject *)layerIdToLayerMap;
- (id)previousOutsideBodyBounds;
- (id)imageFromFill:(OADImageFill *)arg0 forResolutionWithBounds:(struct CGRect)arg1 toRepElementTransform:(struct CGSize)arg2 skipIntegral:(id)arg3 returningFillFrame:(struct CGAffineTransform)arg4;
- (char)shouldUseLegendLayerForLayerBasedRep;
- (char)shouldDisableMultiDataControls;
- (void)dealloc;

@end
