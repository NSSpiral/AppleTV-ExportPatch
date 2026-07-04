/* Runtime dump - TSCH3DMatrixRenderProcessor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DMatrixRenderProcessor : TSCH3DRetargetRenderProcessor
{
    struct StateStack<glm::detail::tmat4x4<float>, 8> mTransformStack;
    struct tmat4x4<float> mProjection;
    char mTransformChanged;
    char mProjectionChanged;
}

@property (readonly, nonatomic) struct tmat4x4<float> * current;
@property (readonly, nonatomic) struct tmat4x4<float> * projection;
@property (readonly, nonatomic) char transformChanged;
@property (readonly, nonatomic) char projectionChanged;

- (struct tmat4x4<float> *)projection;
- (void)translate:(struct tvec3<float> *)arg0;
- (void)popMatrix;
- (void)pushMatrix;
- (void)copyTransformInto:(struct tmat4x4<float> *)arg0;
- (void)projection:(struct tmat4x4<float> *)arg0;
- (void)resetChangeFlags;
- (id)normalizedViewAll;
- (void)copyProjectionInto:(struct tmat4x4<float> *)arg0;
- (char)transformChanged;
- (char)projectionChanged;
- (void)replace:(struct tmat4x4<float> *)arg0;
- (void).cxx_construct;
- (void)scale:(struct tvec3<float> *)arg0;
- (struct tmat4x4<float> *)current;
- (void)multiply:(struct tmat4x4<float> *)arg0;

@end
