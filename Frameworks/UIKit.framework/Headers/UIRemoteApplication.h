/* Runtime dump - UIRemoteApplication
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoteApplication : NSObject
{
    NSString * _machServiceName;
    unsigned int _port;
}

- (void)dealloc;
- (UIRemoteApplication *)initWithMachServiceName:(NSString *)arg0;
- (void)updatePort;
- (UIRemoteApplication *)initWithBundleIdentifier:(NSString *)arg0;
- (void)hideTopMostMiniAlert;
- (void)showTopMostMiniAlertWithSynchronizationPort:(unsigned int)arg0;
- (void)statusBarWillChangeOrientation:(int)arg0 duration:(float)arg1;
- (void)simpleRemoteActionDidOccur:(int)arg0;
- (void)sheetWithRemoteViewIdentifierDidDismiss:(id)arg0;
- (void)remoteNotificationRegistrationSucceededWithDeviceToken:(NSData *)arg0;
- (void)remoteNotificationRegistrationFailedWithErrorDomain:(NSString *)arg0 code:(int)arg1 localizedDescription:(NSString *)arg2;
- (void)remoteNotificationMessageDelivered;
- (void)didRegisterUserNotificationSettings:(NSDictionary *)arg0;
- (void)localNotificationMessageDelivered:(id)arg0;
- (void)localNotificationDidSnooze:(id)arg0;
- (void)backgroundContinuationEnabledDidChange:(char)arg0;
- (void)wakeTimerFired;
- (void)didTakeScreenshot;

@end
