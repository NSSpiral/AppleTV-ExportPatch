/* Runtime dump - TSCH3DTexCoordGenerationCylinder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTexCoordGenerationCylinder : TSCH3DTexCoordGeneration
{
    struct box<glm::detail::tvec3<float> > mBbox;
}

+ (TSCH3DTexCoordGenerationCylinder *)generatorWithBBox:(struct box<glm::detail::tvec3<float> > *)arg0;
+ (TSCH3DTexCoordGenerationCylinder *)generatorWithBBox:(struct box<glm::detail::tvec3<float> > *)arg0 transform:(struct box<glm::detail::tvec3<float> >)arg1;

- (TSCH3DTexCoordGenerationCylinder *)initWithBBox:(struct box<glm::detail::tvec3<float> > *)arg0;
- (TSCH3DTexCoordGenerationCylinder *)initWithBBox:(struct box<glm::detail::tvec3<float> > *)arg0 transform:(struct box<glm::detail::tvec3<float> >)arg1;
- (void)generateFromVertexArray:(struct tvec3<float> *)arg0 normalArray:(struct tvec3<float>)arg1 numVertices:(struct tvec3<float> *)arg2 destination4D:(struct tvec3<float>)arg3;
- (void).cxx_construct;

@end
