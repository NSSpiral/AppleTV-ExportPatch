/* Runtime dump - AFSiriTaskContextProvider
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriTaskContextProvider : NSObject <AFSiriAppContextProviding>
{
    AFSiriTaskmaster * _taskmaster;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void).cxx_destruct;
- (void)getAppContextWithDeliveryHandler:(AFSiriTaskDeliveryHandler *)arg0 completionHandler:(/* block */ id)arg1;
- (AFSiriTaskContextProvider *)initWithTaskmaster:(AFSiriTaskmaster *)arg0;

@end
