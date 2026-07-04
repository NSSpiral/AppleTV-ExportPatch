/* Runtime dump - BSActionListenerController
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSActionListenerController : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int _transactionCount;
    BSActionListener * _listener;
    unsigned int _listenerCount;
    unsigned int _listenerTearDownToken;
}

+ (BSActionListenerController *)sharedInstance;

- (void)dealloc;
- (BSActionListenerController *)init;
- (BSActionListener *)listener;
- (void)beginTransactionForListener:(id)arg0;
- (void)endTransactionForListener:(id)arg0;
- (void)beginTransaction;
- (void)endTransaction;

@end
