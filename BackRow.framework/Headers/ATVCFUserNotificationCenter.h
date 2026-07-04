/* Runtime dump - ATVCFUserNotificationCenter
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVUserNotificationDelegate;

@class BRController;
@interface ATVCFUserNotificationCenter : NSObject <ATVUserNotificationDelegate>
{
    <ATVUserNotificationDelegate> * _externalHandler;
    NSMutableIndexSet * _transactionIdentifiers;
    unsigned int _firstAvailableTransactionIdentifier;
    NSNumber * _autoSubmittedPasswordAccountIdentifier;
}

+ (ATVCFUserNotificationCenter *)sharedInstance;
+ (void)startUserNotificationCenter;

- (void)_handleAccountActivity;
- (void)_userNotificationDone:(id)arg0;
- (void)setNotificationHandler:(id /* block */)arg0 cvvOperaion:(Class)arg1 hsaOperation:(Class)arg2;
- (NSObject *)beginPurchaseTransaction;
- (void)commitPurchaseTransaction:(NSObject *)arg0;
- (char)_notificationViewController:(BRController *)arg0 shouldAutoSubmitPasswordForAccount:(NSObject *)arg1;
- (void)_notificationViewController:(BRController *)arg0 willAutoSubmitPasswordForAccount:(NSObject *)arg1;
- (ATVCFUserNotificationCenter *)init;
- (void).cxx_destruct;
- (void)userNotificationCenterDidCancelCFNotification:(ATVCFUserNotification *)arg0;
- (void)userNotificationCenterDidReceiveCFNotification:(ATVCFUserNotification *)arg0;

@end
