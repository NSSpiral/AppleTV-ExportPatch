/* Runtime dump - TSCH3DChartMeshSharedChildResource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartMeshSharedChildResource : NSObject <TSCHUnretainedParent>
{
    TSCH3DChartMeshResources * mParent;
    char mChildRegenerated;
    int mCaching;
    struct DataBufferInfo mBufferInfo;
    unsigned long long mResourceIdentifier;
}

@property (readonly) struct DataBufferInfo bufferInfo;
@property (nonatomic) int caching;
@property (readonly, nonatomic) unsigned long long resourceIdentifier;
@property (nonatomic) char childRegenerated;

+ (NSObject *)resourceWithParent:(NSObject *)arg0;

- (void)clearParent;
- (struct DataBufferInfo)bufferInfo;
- (unsigned long long)resourceIdentifier;
- (int)caching;
- (void)setCaching:(int)arg0;
- (char)childRegenerated;
- (void)setChildRegenerated:(char)arg0;
- (void)dealloc;
- (void).cxx_construct;
- (TSCH3DChartMeshSharedChildResource *)initWithParent:(NSObject *)arg0;

@end
