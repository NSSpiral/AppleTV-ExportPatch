/* Runtime dump - TSCH3DBarNormalDirectionMapper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DBarNormalDirectionMapper : TSCH3DNormalDirectionMapper
{
    int mWallOffset;
    int mCrossSectionCount;
    int mSpineCount;
    int mBeginLimit;
    int mEndLimit;
}

- (void)mapFromVertexArray:(struct tvec3<float> *)arg0 normalArray:(struct tvec3<float>)arg1 normalMatrix:(struct tvec3<float> *)arg2 numVertices:(struct tvec3<float>)arg3 destination:(struct tmat3x3<float> *)arg4;
- (TSCH3DBarNormalDirectionMapper *)initWithWallOffset:(int)arg0 crossSectionCount:(int)arg1 spineCount:(int)arg2 beginLimit:(int)arg3 endLimit:(int)arg4;

@end
