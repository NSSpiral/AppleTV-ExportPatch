/* Runtime dump - TSCH3DTexCoordGeneration
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTexCoordGeneration : NSObject
{
    struct tmat4x4<float> mTransform;
    TSCH3DNormalDirectionMapper * mNormalDirectionMapper;
}

@property (retain, nonatomic) TSCH3DNormalDirectionMapper * normalDirectionMapper;

- (TSCH3DNormalDirectionMapper *)normalDirectionMapper;
- (void)setNormalDirectionMapper:(TSCH3DNormalDirectionMapper *)arg0;
- (TSCH3DTexCoordGeneration *)initWithTransform:(struct tmat4x4<float> *)arg0;
- (void)dealloc;
- (TSCH3DTexCoordGeneration *)init;
- (void).cxx_construct;

@end
