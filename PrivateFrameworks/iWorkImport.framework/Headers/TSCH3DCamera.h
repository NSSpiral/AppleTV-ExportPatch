/* Runtime dump - TSCH3DCamera
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DCamera : NSObject <NSCopying>
{
    TSCH3DLens * mLens;
    float mViewportScale;
    float mViewportSamples;
    struct box<glm::detail::tvec2<int> > mViewport;
    struct tvec2<float> mContainingViewportOffset;
    struct tmat4x4<float> mTransform;
}

@property (retain, nonatomic) TSCH3DLens * lens;
@property (readonly, nonatomic) struct tvec3<float> position;
@property (readonly, nonatomic) struct tvec3<float> direction;
@property (nonatomic) struct tmat4x4<float> transform;
@property (readonly, nonatomic) struct tmat4x4<float> space;
@property (readonly, nonatomic) struct tmat4x4<float> projection;
@property (readonly, nonatomic) struct tmat4x4<float> normalizedProjection;
@property (readonly, nonatomic) struct tmat4x4<float> viewportProjection;
@property (readonly, nonatomic) struct tmat4x4<float> modelViewProjection;
@property (readonly, nonatomic) struct tmat4x4<float> modelViewNormalizedProjection;
@property (nonatomic) float viewportScale;
@property (nonatomic) float viewportSamples;
@property (nonatomic) struct box<glm::detail::tvec2<int> > viewport;
@property (nonatomic) struct tvec2<float> containingViewportOffset;

+ (NSObject *)orthographicWithSize:(struct tvec2<int> *)arg0;
+ (TSCH3DCamera *)orthographicPerPixelWithBounds:(struct box<glm::detail::tvec2<int> > *)arg0;
+ (NSObject *)perspectiveWithSize:(struct tvec2<int> *)arg0;
+ (TSCH3DCamera *)cameraWithLens:(TSCH3DLens *)arg0 size:(struct tvec2<int> *)arg1;
+ (NSObject *)orthographicPerPixelWithSize:(struct tvec2<int> *)arg0;
+ (TSCH3DCamera *)orthographic;
+ (float)perspective;

- (struct tmat4x4<float>)projection;
- (TSCH3DLens *)lens;
- (struct tmat4x4<float>)normalizedProjection;
- (struct tvec3<float>)backProjectCameraSpacePoint:(struct tvec3<float> *)arg0;
- (struct tmat4x4<float>)modelViewNormalizedProjection;
- (void)setContainingViewportSize:(struct tvec2<int> *)arg0;
- (float)viewportSamples;
- (struct tmat4x4<float>)modelViewViewportProjectionWithViewportScale:(float)arg0;
- (float)viewportScale;
- (struct tvec2<float>)containingViewportOffset;
- (void)calculateCullingPlanes:(struct vector<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > > *)arg0;
- (id)narrowByNormalizedBounds:(struct box<glm::detail::tvec2<float> > *)arg0;
- (id)narrowedByNormalizedBounds:(struct box<glm::detail::tvec2<float> > *)arg0;
- (NSString *)matrixDescription;
- (TSCH3DCamera *)initWithLens:(TSCH3DLens *)arg0 size:(struct tvec2<int> *)arg1;
- (struct FrustumSlice)frustumSliceAtDistance:(struct tvec3<float>)arg0;
- (void)setLens:(TSCH3DLens *)arg0;
- (id)shiftByPixels:(struct tvec2<float> *)arg0;
- (void)setViewportScale:(float)arg0;
- (void)setContainingViewportOffset:(struct tvec2<float>)arg0;
- (void)setViewportSamples:(float)arg0;
- (struct tvec3<float>)projectNormalizedPoint:(struct tvec2<float> *)arg0 planeDistance:(float)arg1;
- (struct tvec3<float>)fastProjectNormalizedPoint:(struct tvec2<float> *)arg0 planeDistance:(float)arg1;
- (struct tmat4x4<float>)viewportProjection;
- (struct tmat4x4<float>)modelViewProjection;
- (id)narrowedByViewport:(struct box<glm::detail::tvec2<int> > *)arg0;
- (id)shiftedByPixels:(struct tvec2<float> *)arg0;
- (id)pixelAlignedForScaledViewport:(struct box<glm::detail::tvec2<float> > *)arg0 viewportScale:(struct box<glm::detail::tvec2<float> >)arg1 samples:(struct tvec2<float>)arg2 correspondingNoramlizedBounds:(id)arg3;
- (id)narrowedByViewport:(struct box<glm::detail::tvec2<int> > *)arg0 samples:(struct box<glm::detail::tvec2<int> >)arg1;
- (void)setViewport:(struct box<glm::detail::tvec2<int> >)arg0;
- (struct box<glm::detail::tvec2<int> >)viewport;
- (void)dealloc;
- (NSString *)description;
- (TSCH3DCamera *)copyWithZone:(struct _NSZone *)arg0;
- (void)setTransform:(struct tmat4x4<float>)arg0;
- (void)setPosition:(struct tvec3<float>)arg0;
- (struct tmat4x4<float>)transform;
- (struct tvec3<float>)position;
- (void)setDirection:(struct tvec3<float>)arg0;
- (struct tvec3<float>)direction;
- (void).cxx_construct;
- (struct tmat4x4<float>)space;

@end
