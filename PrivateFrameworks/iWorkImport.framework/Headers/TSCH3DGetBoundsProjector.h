/* Runtime dump - TSCH3DGetBoundsProjector
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGetBoundsProjector : NSObject
{
    struct tmat4x4<float> mModelView;
    struct tmat4x4<float> mConstantDepthModelView;
    struct tmat4x4<float> mProjection;
    struct tmat4x4<float> mMVP;
    TSCH3DCamera * mCamera;
    struct ChartScenePropertyAccessor * mAccessor;
    char mUseAggressiveBackProjection;
}

- (struct tvec3<float>)backProjectModelViewPoint:(struct tvec3<float> *)arg0;
- (void)setCamera:(VKCamera *)arg0 accessor:(struct ChartScenePropertyAccessor *)arg1;
- (void)resetTransformsForLayoutBounds;
- (void)resetTransformsForRenderBounds;
- (struct box<glm::detail::tvec3<float> >)projectBounds:(id)arg0 type:(SEL)arg1;
- (void)dealloc;
- (TSCH3DGetBoundsProjector *)init;
- (void)reset;
- (void).cxx_construct;

@end
