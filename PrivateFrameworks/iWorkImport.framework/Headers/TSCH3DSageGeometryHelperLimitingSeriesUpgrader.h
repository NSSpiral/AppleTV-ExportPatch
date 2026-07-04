/* Runtime dump - TSCH3DSageGeometryHelperLimitingSeriesUpgrader
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSageGeometryHelperLimitingSeriesUpgrader : TSCH3DAbstractLimitingSeriesUpgrader
{
    TSCH3DChartResizerHelper * mResizerHelper;
    TSCH3DChartBoundsLayout * mBoundsLayout;
}

@property (readonly, nonatomic) TSCH3DChartResizerHelper * resizerHelper;
@property (readonly, nonatomic) TSCH3DChartBoundsLayout * boundsLayout;

- (TSCH3DChartBoundsLayout *)boundsLayout;
- (NSDictionary *)sceneResetWithLayoutSettings:(struct ?)arg0;
- (struct CGRect)oldResizingFrame;
- (NSObject *)containingViewportByResizingScene:(NSObject *)arg0 toResizingFrame:(struct CGRect)arg1;
- (NSObject *)boundsLayoutByResizingToLayoutSize:(struct tvec2<float> *)arg0;
- (TSCH3DChartResizerHelper *)resizerHelper;
- (void)dealloc;

@end
