/* Runtime dump - TSTRWRetainedPointerKeyDictionary
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTRWRetainedPointerKeyDictionary : NSObject
{
    struct _opaque_pthread_rwlock_t mRWLock;
    TSURetainedPointerKeyDictionary * mRetainedPointerKeyDictionary;
}

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (TSTRWRetainedPointerKeyDictionary *)init;
- (void)removeAllObjects;

@end
