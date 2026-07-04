/* Runtime dump - TSCH3DPlaneProjectRenderProcessor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPlaneProjectRenderProcessor : TSCH3DTransformGeometryRenderProcessor
{
    struct plane<glm::detail::tvec3<float> > mPlane;
    struct tvec3<float> mProjPt;
    struct box<glm::detail::tvec3<float> > mBounds;
}

@property (readonly, nonatomic) struct box<glm::detail::tvec3<float> > * bounds;

+ (NSObject *)processorWithPlane:(struct plane<glm::detail::tvec3<float> > *)arg0 projPt:(struct plane<glm::detail::tvec3<float> >)arg1;

- (void)submit:(struct PrimitiveInfo *)arg0;
- (TSCH3DPlaneProjectRenderProcessor *)initWithPlane:(struct plane<glm::detail::tvec3<float> > *)arg0 projPt:(struct plane<glm::detail::tvec3<float> >)arg1;
- (struct box<glm::detail::tvec3<float> > *)bounds;
- (void).cxx_construct;

@end
