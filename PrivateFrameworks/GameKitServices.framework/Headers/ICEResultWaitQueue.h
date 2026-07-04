/* Runtime dump - ICEResultWaitQueue
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface ICEResultWaitQueue : NSObject
{
    NSMutableArray * queryList;
    NSLock * queryLock;
    struct _opaque_pthread_cond_t resCond;
    struct _opaque_pthread_mutex_t resMutex;
}

- (void)dealloc;
- (ICEResultWaitQueue *)init;
- (NSObject *)copyResultForCallID:(unsigned long)arg0;
- (void)addResult:(struct tagCONNRESULT *)arg0 forCallID:(struct tagIPPORT)arg1;

@end
