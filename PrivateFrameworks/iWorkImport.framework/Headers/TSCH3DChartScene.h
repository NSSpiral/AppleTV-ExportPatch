/* Runtime dump - TSCH3DChartScene
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartScene : NSObject
{
    struct ChartSceneInfo mSceneInfo;
}

+ (char)supportsValueAxisLabelAlignmentCaching;
+ (void)addObjectsToSceneWithSceneInfo:(struct ChartSceneInfo *)arg0;

- (NSDictionary *)chartInfo;
- (TSCHChartSeriesType *)seriesType;
- (struct ? *)layoutSettings;
- (TSCH3DChartScene *)initWithSceneInfo:(struct ChartSceneInfo *)arg0;
- (void)addAllObjectsToScene;
- (void)addLabelsToScene;
- (void)addChartTitlesToScene;
- (void)adjustSceneSettings;
- (void)addObjectsToScene;
- (void)addAllLabelsToScene;
- (void)addSeriesObjectsToScene;
- (SCNScene *)scene;
- (void).cxx_construct;
- (TSCHChartType *)chartType;

@end
