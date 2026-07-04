/* Runtime dump - SCRCThreadedWeakLinkedObject
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCThreadedWeakLinkedObject : NSObject
{
    NSLock * _releaseLock;
    int _referenceCount;
    char _calledDealloc;
}

- (SCRCThreadedWeakLinkedObject *)retain;
- (void)release;
- (void)dealloc;
- (SCRCThreadedWeakLinkedObject *)init;
- (unsigned int)retainCount;
- (void)invalidateThreadsWithWeakLinks;

@end
