/* Runtime dump - TSCH3DChartMeshSharedResource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartMeshSharedResource : TSCH3DChartMeshSharedChildResource
{
    TSCH3DDataBuffer * mMesh;
}

@property (retain, nonatomic) TSCH3DDataBuffer * mesh;

- (void)flushMemory;
- (void)setChildRegenerated:(char)arg0;
- (void)setMesh:(TSCH3DDataBuffer *)arg0;
- (TSCH3DDataBuffer *)mesh;
- (void)dealloc;
- (NSObject *)get;

@end
