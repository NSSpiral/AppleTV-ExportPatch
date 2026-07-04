/* Runtime dump - TSCH3DChartSilhouetteEdgeCollectProcessor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartSilhouetteEdgeCollectProcessor : TSCH3DRetargetRenderProcessor
{
    struct EdgeDetectionParameters mEdgeDetectionParameters;
    TSCH3DResource * mVertices;
    TSCH3Dvec3DataBuffer * mEdges;
}

@property (retain, nonatomic) TSCH3DResource * vertices;
@property (readonly, nonatomic) TSCH3Dvec3DataBuffer * edges;

- (void)submit:(struct PrimitiveInfo *)arg0;
- (int)attribute:(NSObject *)arg0 resource:(NSObject *)arg1 specs:(struct AttributeSpecs *)arg2;
- (TSCH3DChartSilhouetteEdgeCollectProcessor *)initWithEdgeDetectionParameters:(struct EdgeDetectionParameters *)arg0;
- (void)dealloc;
- (void).cxx_construct;
- (TSCH3Dvec3DataBuffer *)edges;
- (void)setVertices:(TSCH3DResource *)arg0;
- (struct tmat4x4<float>)matrix;
- (TSCH3DResource *)vertices;

@end
