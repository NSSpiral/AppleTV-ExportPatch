/* Runtime dump - GKRWLock
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKRWLock : NSObject
{
    struct _opaque_pthread_rwlock_t _rwLock;
}

- (void)dealloc;
- (GKRWLock *)init;
- (void)unlock;
- (void)wrlock;
- (void)rdlock;
- (int)tryrdlock;

@end
