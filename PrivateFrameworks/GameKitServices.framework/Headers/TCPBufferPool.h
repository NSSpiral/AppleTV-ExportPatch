/* Runtime dump - TCPBufferPool
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface TCPBufferPool : NSObject
{
    int poolSize;
    struct tagBufferNode * head;
    struct tagBufferNode * tail;
    struct tagBufferNode * avail;
    int poolLock;
}

- (void)dealloc;
- (TCPBufferPool *)init;
- (void)monitorBufferPool;
- (char *)getBufferFromPool:(int)arg0;
- (void)returnBufferToPool:(char *)arg0;
- (void)finalize;

@end
