/* Runtime dump - BSActionListener
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSActionListener : BSBaseXPCServer
{
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _queue_portToContextMap;
}

- (void)dealloc;
- (BSActionListener *)init;
- (struct ?)listenForResponseWithHandler:(id /* block */)arg0 timeout:(/* block */ id)arg1;
- (BSActionListener *)initWithServiceName:(NSString *)arg0 onQueue:(/* block */ id)arg1;
- (void)queue_handleMessage:(NSString *)arg0 client:(NSObject *)arg1;

@end
