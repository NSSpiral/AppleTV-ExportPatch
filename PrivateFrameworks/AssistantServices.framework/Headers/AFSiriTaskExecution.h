/* Runtime dump - AFSiriTaskExecution
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriTaskExecution : NSObject <AFSiriResponseHandling, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> * _queue;
    AFSiriRequest * _request;
    <AFSiriTaskDelivering> * _taskDeliverer;
    NSXPCListener * _usageResultListener;
    id _deliveryHandler;
    id _completionHandler;
    int _state;
    AFWatchdogTimer * _taskResponseWatchdogTimer;
    NSXPCListener * _taskResponseListener;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (void)_completeWithError:(NSError *)arg0;
- (void)_completeWithResponse:(NSURLResponse *)arg0;
- (void)_completeWithResponse:(NSURLResponse *)arg0 error:(NSError *)arg1;
- (void)handleSiriResponse:(NSURLResponse *)arg0;
- (void)handleFailureOfRequest:(NSURLRequest *)arg0 error:(NSError *)arg1;
- (AFSiriTaskExecution *)initWithRequest:(AFSiriRequest *)arg0 taskDeliverer:(<AFSiriTaskDelivering> *)arg1 usageResultListener:(NSXPCListener *)arg2;
- (void)setDeliveryHandler:(AFSiriTaskDeliveryHandler *)arg0;

@end
