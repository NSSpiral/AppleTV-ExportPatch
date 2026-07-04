/* Runtime dump - TSCH3DChartSceneAreaLayoutItemCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartSceneAreaLayoutItemCache : NSObject
{
    struct TSCH3DChartSceneAreaLayoutItemCacheValues mValues;
    TSCH3DVector * _containingViewportVector;
}

@property (readonly, nonatomic) struct tvec4<float> infoChartScale;
@property (readonly, nonatomic) struct tvec2<int> containingViewport;
@property (readonly, nonatomic) TSCH3DVector * containingViewportVector;
@property (readonly, nonatomic) struct tvec2<float> chartBodyLayoutOffsetInChartAreaLayoutSpace;
@property (readonly, nonatomic) struct CGSize layoutSize;
@property (readonly, nonatomic) struct CGSize requestLayoutSize;
@property (readonly, nonatomic) struct CGSize chartBodyLayoutSize;
@property (readonly, nonatomic) struct CGSize requestChartBodyLayoutSize;
@property (readonly, nonatomic) struct tvec2<int> modelSize;
@property (readonly, nonatomic) struct ? layoutSettings;
@property (readonly, nonatomic) char forcedValid;

+ (NSArray *)cacheWithCacheValues:(struct TSCH3DChartSceneAreaLayoutItemCacheValues *)arg0;

- (struct tvec2<int>)containingViewport;
- (struct ?)layoutSettings;
- (TSCH3DVector *)containingViewportVector;
- (struct CGSize)chartBodyLayoutSize;
- (char)forcedValid;
- (struct tvec4<float>)infoChartScale;
- (struct tvec2<float>)chartBodyLayoutOffsetInChartAreaLayoutSpace;
- (struct tvec2<int>)modelSize;
- (struct CGSize)requestLayoutSize;
- (struct CGSize)requestChartBodyLayoutSize;
- (TSCH3DChartSceneAreaLayoutItemCache *)initWithCacheValues:(struct TSCH3DChartSceneAreaLayoutItemCacheValues *)arg0;
- (void)printDebug;
- (TSCH3DChartSceneAreaLayoutItemCache *)init;
- (struct TSCH3DChartSceneAreaLayoutItemCacheValues *)values;
- (struct CGSize)layoutSize;
- (void).cxx_construct;

@end
