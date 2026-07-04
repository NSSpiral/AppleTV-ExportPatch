/* Runtime dump - TSCH3DPrefilteredLineRendererRenderCacheObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPrefilteredLineRendererRenderCacheObject : TSCH3DSceneRenderCacheObject
{
    TSCH3DStrokePatternTexture * mStrokeTexture;
    char mDidRenderOnce;
}

@property (nonatomic) char didRenderOnce;

- (void)allocateDynamicResourcesIntoArray:(NSArray *)arg0;
- (NSObject *)p_geometry;
- (id)p_texcoords;
- (id)p_box;
- (NSObject *)p_originalGeometry;
- (id)p_normals;
- (id)p_diffuseTexcoords;
- (void)submitResourcesWithLineRenderer:(NSObject *)arg0 setting:(SASettingEntity *)arg1;
- (void)renderWithLineRenderer:(NSObject *)arg0 setting:(SASettingEntity *)arg1 fromVertex:(struct PrefilteredLineVertexProperties *)arg2 toVertex:(struct PrefilteredLineVertexProperties)arg3;
- (char)didRenderOnce;
- (void)setDidRenderOnce:(char)arg0;
- (void)dealloc;
- (TSCH3DPrefilteredLineRendererRenderCacheObject *)init;

@end
