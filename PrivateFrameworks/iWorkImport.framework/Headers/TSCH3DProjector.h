/* Runtime dump - TSCH3DProjector
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DProjector : NSObject
{
    struct tmat4x4<float> mProjection;
    struct tmat4x4<float> mTransform;
    struct tmat4x4<float> mCombined;
}

@property (readonly, nonatomic) struct tmat4x4<float> * projection;
@property (readonly, nonatomic) struct tmat4x4<float> * transform;
@property (readonly, nonatomic) struct tmat4x4<float> * combined;

+ (TSCH3DProjector *)projectorWithProjection:(struct tmat4x4<float> *)arg0 transform:(struct tmat4x4<float>)arg1;

- (struct tmat4x4<float> *)combined;
- (struct line<glm::detail::tvec3<float> >)objectSpaceLineFromPoint:(NSObject *)arg0;
- (TSCH3DProjector *)initWithProjection:(struct tmat4x4<float> *)arg0 transform:(struct tmat4x4<float>)arg1;
- (struct tmat4x4<float> *)projection;
- (struct tmat4x4<float> *)transform;
- (void).cxx_construct;

@end
