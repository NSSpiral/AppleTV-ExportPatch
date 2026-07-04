/* Runtime dump - TSCH3DChartElementSceneObjectProcessItems
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartElementSceneObjectProcessItems : NSObject <TSCHUnretainedParent>
{
    TSCH3DChartElementSceneObject * mSceneObject;
    TSCH3DSceneRenderPipeline * mPipeline;
    TSCH3DChartElementProperties * mProperties;
    struct vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> > mDelayedItems;
}

@property (readonly, nonatomic) char pushStates;
@property (readonly, nonatomic) char useBoundsGeometry;
@property (readonly, nonatomic) char geometryOnly;
@property (readonly, nonatomic) TSCH3DRenderProcessor * processor;

+ (NSObject *)processItemsWithSceneObject:(TSCH3DSceneObject *)arg0 properties:(NSDictionary *)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2;

- (TSCH3DRenderProcessor *)processor;
- (void)clearParent;
- (TSCH3DChartElementSceneObjectProcessItems *)initWithSceneObject:(TSCH3DSceneObject *)arg0 properties:(NSDictionary *)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2;
- (char)useBoundsGeometry;
- (char)geometryOnly;
- (struct RenderElementInfo)elementInfoWithSeries:(char)arg0 position:(char)arg1;
- (char)pushStates;
- (void)p_processElementInfoWithSeries:(id)arg0 position:(struct tvec2<int> *)arg1;
- (void)performItemsProcessing;
- (char)p_delayedItemsAreUnique;
- (void)processDelayedItemsWithOpacity:(float)arg0;
- (void)processItems;
- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
