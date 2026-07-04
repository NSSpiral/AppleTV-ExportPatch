/* Runtime dump - AFUIApplicationSiriTaskDeliverer
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFUIApplicationSiriTaskDeliverer : NSObject <AFSiriTaskDelivering>
{
    NSString * _appBundleIdentifier;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)description;
- (void).cxx_destruct;
- (void)deliverSiriTask:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (AFUIApplicationSiriTaskDeliverer *)initWithAppBundleIdentifier:(NSString *)arg0;

@end
