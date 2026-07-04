/* Runtime dump - SSVPushNotificationParameters
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPushNotificationParameters : NSObject <SSXPCCoding, NSCopying>
{
    NSNumber * _accountIdentifier;
    NSString * _environmentName;
    NSMutableDictionary * _parameterDictionary;
    int _requestType;
}

@property (copy, nonatomic) NSNumber * accountIdentifier;
@property (copy, nonatomic) NSString * environmentName;
@property (copy, nonatomic) NSArray * mediaKinds;
@property (copy, nonatomic) NSString * notificationType;
@property (copy, nonatomic) NSDictionary * putParameters;
@property (nonatomic) int requestType;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setValue:(NSObject *)arg0 forParameter:(/* block */ id)arg1;
- (NSDictionary *)copyXPCEncoding;
- (SSVPushNotificationParameters *)initWithXPCEncoding:(NSString *)arg0;
- (void)setAccountIdentifier:(NSNumber *)arg0;
- (SSVPushNotificationParameters *)init;
- (SSVPushNotificationParameters *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)notificationType;
- (NSNumber *)accountIdentifier;
- (void)setNotificationType:(NSString *)arg0;
- (void)setRequestType:(int)arg0;
- (int)requestType;
- (id)valueForParameter:(id)arg0;
- (void)setEnvironmentName:(NSString *)arg0;
- (NSArray *)mediaKinds;
- (NSDictionary *)putParameters;
- (void)setMediaKinds:(NSArray *)arg0;
- (void)setPutParameters:(NSDictionary *)arg0;
- (NSDictionary *)_copyParametersDictionary;
- (NSString *)environmentName;

@end
