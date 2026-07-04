/* Runtime dump - AFMachServiceSiriTaskDeliverer
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFMachServiceSiriTaskDeliverer : NSObject <AFSiriTaskDelivering>
{
    NSString * _machServiceName;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)machServiceSiriTaskDelivererForAppWithBundleIdentifier:(NSString *)arg0;

- (NSString *)description;
- (AFMachServiceSiriTaskDeliverer *)initWithMachServiceName:(NSString *)arg0;
- (void).cxx_destruct;
- (void)deliverSiriTask:(NSObject *)arg0 completionHandler:(id /* block */)arg1;

@end
