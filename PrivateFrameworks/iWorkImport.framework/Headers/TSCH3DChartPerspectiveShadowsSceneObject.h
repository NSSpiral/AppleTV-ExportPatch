/* Runtime dump - TSCH3DChartPerspectiveShadowsSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartPerspectiveShadowsSceneObject : TSCH3DChartShadowsSceneObject

+ (NSArray *)blurParametersArray;

- (id)createCamera;
- (void)updateShadowPlane:(NSObject *)arg0 texcoords:(id)arg1 scene:(NSObject *)arg2 blurslack:(float)arg3 angle:(float)arg4 quality:(float)arg5 planePadding:(struct box<glm::detail::tvec3<float> >)arg6;
- (NSObject *)createShadowsRenderer;
- (void)updateCoordsAndTexcoords:(struct box<glm::detail::tvec3<float> > *)arg0 camera:(struct box<glm::detail::tvec3<float> >)arg1 quad:(struct tvec3<float>)arg2 texcoords:(id)arg3;

@end
