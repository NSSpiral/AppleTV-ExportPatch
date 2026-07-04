/* Runtime dump - TSTStrokeWidthCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeWidthCache : NSObject
{
    unsigned int mCount;
    struct _opaque_pthread_rwlock_t mLock;
    struct vector<float, std::__1::allocator<float> > mStrokeWidth;
}

- (float)strokeWidthForGridIndex:(unsigned int)arg0;
- (void)setStrokeWidth:(float)arg0 forGridIndex:(unsigned int)arg1;
- (void)dealloc;
- (TSTStrokeWidthCache *)init;
- (void)invalidate;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
