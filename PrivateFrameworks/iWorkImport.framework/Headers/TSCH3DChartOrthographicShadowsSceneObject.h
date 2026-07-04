/* Runtime dump - TSCH3DChartOrthographicShadowsSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartOrthographicShadowsSceneObject : TSCH3DChartShadowsSceneObject

+ (NSArray *)blurParametersArray;

- (void)updateCoordsAndTexcoords:(struct box<glm::detail::tvec3<float> > *)arg0 zOffset:(struct box<glm::detail::tvec3<float> >)arg1 cameraPosition:(struct tvec3<float>)arg2 quad:(id)arg3 texcoords:(float)arg4;
- (id)createCamera;
- (void)updateShadowPlane:(NSObject *)arg0 texcoords:(id)arg1 scene:(NSObject *)arg2 blurslack:(float)arg3 angle:(float)arg4 quality:(float)arg5 planePadding:(struct box<glm::detail::tvec3<float> >)arg6;
- (NSObject *)createShadowsRenderer;

@end
