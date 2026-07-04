/* Runtime dump - TSCH3DResource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DResource : NSObject <NSCopying>
{
    int mCaching;
    TSCH3DDataBuffer * mCache;
    int mUpdate;
    char mChanged;
    char mCached;
    struct DataBufferInfo mDataBufferInfo;
    unsigned long long mUniqueIdentifier;
}

@property (readonly, nonatomic) TSCH3DDataBuffer * buffer;
@property (readonly, nonatomic) struct DataBufferInfo bufferInfo;
@property (nonatomic) int update;
@property (nonatomic) char changed;
@property (readonly, nonatomic) char isTexturable;
@property (nonatomic) int caching;
@property (readonly, nonatomic) unsigned long long uniqueIdentifier;

+ (unsigned long long)allocateResourceUniqueIdentifier;
+ (void)deallocateResourceUniqueIdentifier:(unsigned long long)arg0;
+ (TSCH3DResource *)resourceWithCaching:(int)arg0;
+ (CPLResource *)resource;

- (struct DataBufferInfo)bufferInfo;
- (TSCH3DResource *)initWithCaching:(int)arg0;
- (char)isTexturable;
- (void)flushMemory;
- (int)caching;
- (void)setCaching:(int)arg0;
- (void)updateBufferInfoFromBuffer:(NSObject *)arg0;
- (char)cacheNeedsUpdate;
- (void)dealloc;
- (TSCH3DResource *)init;
- (unsigned int)hash;
- (TSCH3DResource *)copyWithZone:(struct _NSZone *)arg0;
- (int)update;
- (void).cxx_construct;
- (unsigned long long)uniqueIdentifier;
- (void)setCache:(NSObject *)arg0;
- (TSCH3DDataBuffer *)buffer;
- (void)setUpdate:(int)arg0;
- (void)setChanged:(char)arg0;
- (char)changed;

@end
