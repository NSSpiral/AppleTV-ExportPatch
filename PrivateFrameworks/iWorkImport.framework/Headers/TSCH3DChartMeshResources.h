/* Runtime dump - TSCH3DChartMeshResources
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartMeshResources : NSObject <TSCHUnretainedParent>
{
    NSObject<TSCH3DChartMeshCreator> * mCreator;
    TSCHChartSeries * mSeries;
    TSCH3DChartMeshSharedResource * mVertex;
    TSCH3DChartMeshSharedResource * mBounds;
    TSCH3DResource * mCachedBounds;
    TSCH3DChartMeshSharedResource * mNormal;
    TSCH3DChartTexcoordSharedResource * mTexcoord;
    struct GeometryArrays mArrays;
    TSCH3DGeometry * mGeometry;
}

@property (readonly, nonatomic) TSCH3DResource * vertex;
@property (readonly, nonatomic) TSCH3DResource * bounds;
@property (readonly, nonatomic) TSCH3DResource * normal;
@property (readonly, nonatomic) TSCH3DResource * texcoord;

+ (NSObject *)nullBuffer;
+ (TSCH3DChartMeshResources *)resourcesWithSeries:(id)arg0 creator:(NSString *)arg1;

- (void)clearParent;
- (void)regenerateForChild:(NSObject *)arg0;
- (TSCH3DResource *)vertex;
- (TSCH3DChartMeshResources *)initWithSeries:(CHDPieSeries *)arg0 creator:(NSString *)arg1;
- (void)regenerateBounds;
- (TSCH3DResource *)texcoord;
- (struct GeometryResource)geometryResourceWithPrimitiveType:(NSObject *)arg0;
- (TSCH3DResource *)normal;
- (void)dealloc;
- (TSCH3DResource *)bounds;
- (void).cxx_construct;
- (void)regenerate;

@end
