/* Runtime dump - TSCH3DChartTexcoordSharedResource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartTexcoordSharedResource : TSCH3DChartMeshSharedResource
{
    TSCH3Dvec3DataBuffer * mVertex;
    TSCH3Dvec3DataBuffer * mNormal;
    TSCH3DTexCoordGeneration * mGenerator;
}

@property (retain, nonatomic) TSCH3Dvec3DataBuffer * vertex;
@property (retain, nonatomic) TSCH3Dvec3DataBuffer * normal;
@property (retain, nonatomic) TSCH3DTexCoordGeneration * generator;

- (void)flushMemory;
- (void)setChildRegenerated:(char)arg0;
- (void)setVertex:(TSCH3Dvec3DataBuffer *)arg0 normal:(TSCH3Dvec3DataBuffer *)arg1 generator:(TSCH3DTexCoordGeneration *)arg2;
- (void)setVertex:(TSCH3Dvec3DataBuffer *)arg0;
- (TSCH3Dvec3DataBuffer *)vertex;
- (TSCH3Dvec3DataBuffer *)normal;
- (void)dealloc;
- (void)setGenerator:(TSCH3DTexCoordGeneration *)arg0;
- (void)setNormal:(TSCH3Dvec3DataBuffer *)arg0;
- (TSCH3DTexCoordGeneration *)generator;
- (NSObject *)get;

@end
