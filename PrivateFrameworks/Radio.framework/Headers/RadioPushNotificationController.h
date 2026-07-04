/* Runtime dump - RadioPushNotificationController
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioPushNotificationController : NSObject <APSConnectionDelegate>
{
    APSConnection * _connection;
    <RadioPushNotificationControllerDelegate> * _delegate;
    NSString * _environment;
    char _notificationsEnabled;
    char _pushEnabled;
}

@property (weak, nonatomic) <RadioPushNotificationControllerDelegate> * delegate;
@property (nonatomic) char notificationsEnabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<RadioPushNotificationControllerDelegate> *)arg0;
- (RadioPushNotificationController *)init;
- (<RadioPushNotificationControllerDelegate> *)delegate;
- (void).cxx_destruct;
- (char)notificationsEnabled;
- (void)setNotificationsEnabled:(char)arg0;
- (void)connection:(APSConnection *)arg0 didReceivePublicToken:(NSString *)arg1;
- (void)connection:(APSConnection *)arg0 didReceiveMessageForTopic:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (NSString *)_portNameForEnvironmentName:(NSString *)arg0;
- (void)_loadURLBagWithCompletionHandler:(id /* block */)arg0;

@end
