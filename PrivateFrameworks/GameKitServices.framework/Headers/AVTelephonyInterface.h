/* Runtime dump - AVTelephonyInterface
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface AVTelephonyInterface : NSObject
{
    id _weakSelf;
    <AVTelephonyInterfaceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    struct __CTServerConnection * _connection;
}

@property <AVTelephonyInterfaceDelegate> * delegate;

- (void)dealloc;
- (void)setDelegate:(<AVTelephonyInterfaceDelegate> *)arg0;
- (AVTelephonyInterface *)init;
- (<AVTelephonyInterfaceDelegate> *)delegate;
- (void)unregisterForNotifications;
- (char)registerForNotifications;
- (void)handleTelephonyNotification:(NSNotification *)arg0 withInfo:(NSDictionary *)arg1;
- (void)handleVocoderNotificationWithInfo:(NSDictionary *)arg0;
- (NSObject *)translateVocoderTypeToCoreAudioType:(NSObject *)arg0;

@end
