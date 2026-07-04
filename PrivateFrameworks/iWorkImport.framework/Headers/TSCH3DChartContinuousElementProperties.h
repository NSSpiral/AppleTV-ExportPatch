/* Runtime dump - TSCH3DChartContinuousElementProperties
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartContinuousElementProperties : TSCH3DChartBasicElementProperties
{
    float mDepthGapFactor;
    float mDepthLimitFactor;
    float mShadowCameraDepthLimitAdjustmentFactor;
    unsigned int mMaxLimitingSeries;
}

@property (readonly, nonatomic) int seriesCount;
@property (readonly, nonatomic) float depthLimitFactor;
@property (readonly, nonatomic) float shadowCameraDepthLimitAdjustmentFactor;
@property (readonly, nonatomic) float p_sageInterSetDepthGapProperty;

- (char)applyElementTransform:(struct ObjectTransforms *)arg0 series:(struct Transform * *)arg1 index:(struct Transform)arg2 propertyAccessor:(struct Transform * *)arg3;
- (float)chartMinZForScene:(NSObject *)arg0;
- (float)depthForScene:(NSObject *)arg0;
- (float)p_sageInterSetDepthGapProperty;
- (void)resetWithEnumerator:(NSEnumerator *)arg0 layoutSettings:(struct ?)arg1;
- (float)p_depthLimitedChartInitialDepthOffset;
- (float)p_interSetDepthGapProperty;
- (struct tvec2<int>)seriesSize;
- (float)depthLimitFactor;
- (float)shadowCameraDepthLimitAdjustmentFactor;
- (void)reset;
- (TSCH3DChartContinuousElementProperties *)copyWithZone:(struct _NSZone *)arg0;
- (void)updateLabels;
- (int)seriesCount;

@end
