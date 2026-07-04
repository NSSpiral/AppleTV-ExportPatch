/* Runtime dump - AFSiriTaskService
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriTaskService : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCListener * _listener;
    AFSiriTaskDeliveryHandler * _deliveryHandler;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)_machServiceNameForAppTaskServiceWithBundleIdentifier:(NSString *)arg0;
+ (NSObject *)appTaskService;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (void)resume;
- (AFSiriTaskService *)initWithMachServiceName:(NSString *)arg0;
- (void).cxx_destruct;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;

@end
