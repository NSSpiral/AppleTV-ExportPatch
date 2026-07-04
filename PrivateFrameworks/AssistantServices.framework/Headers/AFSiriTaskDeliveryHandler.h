/* Runtime dump - AFSiriTaskDeliveryHandler
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriTaskDeliveryHandler : NSObject <AFSiriTaskDelivering>
{
    AFSiriTaskService * _service;
    NSObject<OS_dispatch_queue> * _queue;
    <AFSiriTaskServiceDelegate> * _delegate;
}

@property (weak, nonatomic) AFSiriTaskService * service;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (weak, nonatomic) <AFSiriTaskServiceDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDelegate:(<AFSiriTaskServiceDelegate> *)arg0;
- (<AFSiriTaskServiceDelegate> *)delegate;
- (void).cxx_destruct;
- (void)deliverSiriTask:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setService:(AFSiriTaskService *)arg0;
- (AFSiriTaskService *)service;

@end
