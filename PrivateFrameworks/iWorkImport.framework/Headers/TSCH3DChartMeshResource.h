/* Runtime dump - TSCH3DChartMeshResource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartMeshResource : TSCH3DResource
{
    TSCH3DChartMeshSharedChildResource * mShared;
}

+ (NSObject *)resourceWithSharedResource:(NSObject *)arg0;

- (struct DataBufferInfo)bufferInfo;
- (void)flushMemory;
- (int)caching;
- (TSCH3DChartMeshResource *)initWithSharedResource:(NSObject *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (unsigned long long)uniqueIdentifier;
- (NSObject *)get;

@end
