/* Runtime dump - TSCH3DChartLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartLayout : TSCH2DChartLayout

@property (readonly, nonatomic) TSCH3DScene * scene;
@property (readonly, nonatomic) struct ChartProjectedBoundsSpaces * projectedBounds;
@property (readonly, nonatomic) char hasProjectedBounds;
@property (readonly, nonatomic) TSCH3DChartSceneAreaLayoutItem * areaItem;

+ (NSObject *)propertiesThatInvalidateLayout;
+ (TSCH3DChartLayout *)p_propertiesThatResetSeriesStorage;
+ (NSDictionary *)p_propertiesThatResetSceneProperties;
+ (void)upgradeSceneDepthSettingsForChartInfo:(NSDictionary *)arg0 hasConstantDepth:(char)arg1 willModifyBlock:(id /* block */)arg2;
+ (NSDictionary *)p_allScaleProperties;
+ (TSCH3DChartLayout *)p_propertiesThatInvalidateShadows;

- (TSCH3DVector *)containingViewportVector;
- (void)setLayoutSettings:(struct ?)arg0;
- (struct ChartProjectedBoundsSpaces *)projectedBounds;
- (struct tvec4<float>)infoChartScale;
- (TSCH3DChartLayout *)initWithChartInfo:(NSDictionary *)arg0;
- (void)layoutForResizingSize:(struct CGSize)arg0;
- (struct CGRect)boundsForResize;
- (void)p_ensureValidForInwardLayout;
- (void)setSeriesIndexedPieWedgeExplosions:(NSDictionary *)arg0;
- (char)p_shouldClearSceneForLayoutSettings:(struct ?)arg0;
- (TSCH3DChartSceneAreaLayoutItem *)areaItem;
- (void)p_resetSceneProperties;
- (char)hasProjectedBounds;
- (void)p_resetSeriesStorage;
- (void)modelInvalidated:(id)arg0;
- (TSCH3DScene *)scene;
- (void)dealloc;

@end
