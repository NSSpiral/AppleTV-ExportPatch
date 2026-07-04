/* Runtime dump - MFRequestQueue
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFRequestQueue : NSObject
{
    NSConditionLock * _condition;
    NSMutableArray * _requests;
    NSMutableArray * _consumers;
    unsigned int _waitingOutside;
    unsigned int _waitingInside;
}

- (void)dealloc;
- (MFRequestQueue *)init;
- (void)addRequests:(HMPendingRequests *)arg0 consumers:(NSMutableArray *)arg1;
- (void)processRequests:(id)arg0 consumers:(NSMutableArray *)arg1;
- (void)willAddRequests:(HMPendingRequests *)arg0 consumers:(NSMutableArray *)arg1;
- (void)_processRequests:(id)arg0 consumers:(NSMutableArray *)arg1;
- (void)processRequest:(NSURLRequest *)arg0 consumer:(<DASearchQueryConsumer> *)arg1;
- (void)addRequest:(NSURLRequest *)arg0 consumer:(<DASearchQueryConsumer> *)arg1;

@end
