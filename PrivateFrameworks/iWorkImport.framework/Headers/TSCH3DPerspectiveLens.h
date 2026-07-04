/* Runtime dump - TSCH3DPerspectiveLens
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPerspectiveLens : TSCH3DLens
{
    float mFOV;
    float mAspect;
}

@property (nonatomic) float fov;
@property (nonatomic) float aspect;
@property (readonly, nonatomic) float width;
@property (readonly, nonatomic) float height;

- (void)setFov:(float)arg0;
- (void)calculateCullingPlanes:(struct vector<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > > *)arg0;
- (struct FrustumRect)frustumRect;
- (id)narrowedByNormalizedBounds:(struct box<glm::detail::tvec2<float> > *)arg0;
- (id)shiftedByPercentage:(struct tvec2<float> *)arg0;
- (struct FrustumRect)frustumRectAtDistance:(float)arg0;
- (float)fov;
- (float)aspect;
- (void)setAspect:(float)arg0;
- (id)asFrustumLens;
- (NSString *)matrixDescription;
- (TSCH3DPerspectiveLens *)init;
- (NSString *)description;
- (TSCH3DPerspectiveLens *)copyWithZone:(struct _NSZone *)arg0;
- (float)width;
- (float)height;
- (struct tmat4x4<float>)matrix;

@end
