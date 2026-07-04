/* Runtime dump - AFDistributedMessagingCenterContextProvider
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFDistributedMessagingCenterContextProvider : NSObject <AFSiriAppContextProviding>
{
    NSString * _bundleIdentifier;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void).cxx_destruct;
- (void)getAppContextWithDeliveryHandler:(AFSiriTaskDeliveryHandler *)arg0 completionHandler:(/* block */ id)arg1;
- (AFDistributedMessagingCenterContextProvider *)initWithAppBundleIdentifier:(NSString *)arg0;

@end
