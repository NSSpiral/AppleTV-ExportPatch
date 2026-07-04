/* Runtime dump - SSVPushNotificationRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPushNotificationRequest : SSRequest <SSXPCCoding>
{
    SSVPushNotificationParameters * _parameters;
}

@property (copy, nonatomic) SSVPushNotificationParameters * pushNotificationParameters;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startWithCompletionBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSVPushNotificationRequest *)initWithXPCEncoding:(NSString *)arg0;
- (char)start;
- (void).cxx_destruct;
- (void)startWithResponseBlock:(id /* block */)arg0;
- (SSVPushNotificationRequest *)initWithPushNotificationParameters:(SSVPushNotificationParameters *)arg0;
- (SSVPushNotificationParameters *)pushNotificationParameters;
- (void)setPushNotificationParameters:(SSVPushNotificationParameters *)arg0;

@end
