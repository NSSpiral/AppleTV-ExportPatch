/* Runtime dump - TSTConcurrentMutableIndexSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTConcurrentMutableIndexSet : NSObject
{
    struct _opaque_pthread_rwlock_t mRWLock;
    NSMutableIndexSet * mMutableIndexSet;
}

- (void)dealloc;
- (TSTConcurrentMutableIndexSet *)init;
- (void)addIndex:(unsigned int)arg0;
- (void)removeAllIndexes;
- (void)enumerateIndexesUsingBlock:(id /* block */)arg0;

@end
