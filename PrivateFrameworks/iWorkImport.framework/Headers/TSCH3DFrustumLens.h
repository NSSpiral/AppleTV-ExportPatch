/* Runtime dump - TSCH3DFrustumLens
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFrustumLens : TSCH3DRectangleLens

- (void)calculateCullingPlanes:(struct vector<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > > *)arg0;
- (struct FrustumRect)frustumRectAtDistance:(float)arg0;
- (struct tmat4x4<float>)matrix;

@end
