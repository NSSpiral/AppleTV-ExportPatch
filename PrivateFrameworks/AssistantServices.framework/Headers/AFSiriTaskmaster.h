/* Runtime dump - AFSiriTaskmaster
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriTaskmaster : NSObject <AFSiriUsageResultHandling, NSXPCListenerDelegate, AFSiriRequestHandling>
{
    NSObject<OS_dispatch_queue> * _queue;
    <AFSiriTaskDelivering> * _taskDeliverer;
    NSXPCListener * _usageResultListener;
    NSMutableSet * _taskExecutions;
    <AFSiriTaskmasterDelegate> * _delegate;
}

@property (weak, nonatomic) <AFSiriTaskmasterDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)taskmasterForUIApplicationWithBundleIdentifier:(NSString *)arg0;
+ (NSString *)taskmasterForMachServiceWithName:(NSString *)arg0;
+ (NSString *)taskmasterForMachServiceForAppWithBundleIdentifier:(NSString *)arg0;

- (void)dealloc;
- (void)setDelegate:(<AFSiriTaskmasterDelegate> *)arg0;
- (NSString *)description;
- (<AFSiriTaskmasterDelegate> *)delegate;
- (void).cxx_destruct;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (void)handleSiriRequest:(NSURLRequest *)arg0 deliveryHandler:(AFSiriTaskDeliveryHandler *)arg1 completionHandler:(/* block */ id)arg2;
- (void)handleSiriTaskUsageResult:(NSObject *)arg0 fromRequest:(NSURLRequest *)arg1;
- (AFSiriTaskmaster *)initWithTaskDeliverer:(<AFSiriTaskDelivering> *)arg0;

@end
