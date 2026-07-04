/* Runtime dump - TSCH3DLens
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLens : NSObject <NSCopying>
{
    float mNear;
    float mFar;
}

@property (nonatomic) float near;
@property (nonatomic) float far;

+ (TSCH3DLens *)lens;

- (void)setNear:(float)arg0;
- (void)setFar:(float)arg0;
- (float)near;
- (float)far;
- (void)calculateCullingPlanes:(struct vector<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > > *)arg0;
- (TSCH3DLens *)copyWithZone:(struct _NSZone *)arg0;

@end
