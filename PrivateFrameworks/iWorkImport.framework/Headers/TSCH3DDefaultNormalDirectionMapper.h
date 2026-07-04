/* Runtime dump - TSCH3DDefaultNormalDirectionMapper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DDefaultNormalDirectionMapper : TSCH3DNormalDirectionMapper
{
    struct tvec3<float> mNormalBias;
}

+ (TSCH3DDefaultNormalDirectionMapper *)mapperWithNormalBias:(struct tvec3<float> *)arg0;

- (TSCH3DDefaultNormalDirectionMapper *)initWithNormalBias:(struct tvec3<float> *)arg0;
- (void)mapFromVertexArray:(struct tvec3<float> *)arg0 normalArray:(struct tvec3<float>)arg1 normalMatrix:(struct tvec3<float> *)arg2 numVertices:(struct tvec3<float>)arg3 destination:(struct tmat3x3<float> *)arg4;
- (void).cxx_construct;

@end
