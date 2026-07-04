/* Runtime dump - TSWPStorageBroadcaster
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageBroadcaster : NSObject
{
    struct set<id<TSWPStorageObserver>, std::__1::less<id<TSWPStorageObserver> >, std::__1::allocator<id<TSWPStorageObserver> > > _observers;
}

- (void)broadcastStorage:(id)arg0 didChangeRange:(struct _NSRange)arg1 delta:(int)arg2 broadcastKind:(int)arg3;
- (void)dealloc;
- (void)removeObserver:(NSObject *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)addObserver:(NSObject *)arg0;
- (void)removeAllObservers;

@end
