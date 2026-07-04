/* Runtime dump - TSCH3DPieBevelEdgeNormalDirectionMapper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPieBevelEdgeNormalDirectionMapper : TSCH3DNormalDirectionMapper
{
    int mTopMeshOffset;
    int mAngleSteps;
    int mRadiusSteps;
    int mAngleLimit;
    int mRadiusLimit;
}

- (void)mapFromVertexArray:(struct tvec3<float> *)arg0 normalArray:(struct tvec3<float>)arg1 normalMatrix:(struct tvec3<float> *)arg2 numVertices:(struct tvec3<float>)arg3 destination:(struct tmat3x3<float> *)arg4;
- (TSCH3DPieBevelEdgeNormalDirectionMapper *)initWithTopMeshOffset:(int)arg0 angleSteps:(int)arg1 radiusSteps:(int)arg2 angleLimit:(int)arg3 radiusLimit:(int)arg4;

@end
