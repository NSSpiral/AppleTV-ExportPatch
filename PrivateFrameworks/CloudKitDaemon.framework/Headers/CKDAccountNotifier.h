/* Runtime dump - CKDAccountNotifier
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAccountNotifier : NSObject
{
    int _accountChangedToken;
    NSMapTable * _notificationObservers;
    NSOperationQueue * _notifyQueue;
}

@property (nonatomic) int accountChangedToken;
@property (retain, nonatomic) NSMapTable * notificationObservers;
@property (retain, nonatomic) NSOperationQueue * notifyQueue;

+ (CKDAccountNotifier *)sharedNotifier;

- (void)dealloc;
- (CKDAccountNotifier *)init;
- (void).cxx_destruct;
- (void)postAccountChangedNotification:(NSNotification *)arg0;
- (void)registerObserver:(NSObject *)arg0 forAccountChangeNotification:(NSNotification *)arg1;
- (void)unregisterObserverForAccountChangeNotification:(NSNotification *)arg0;
- (NSMapTable *)notificationObservers;
- (NSOperationQueue *)notifyQueue;
- (int)accountChangedToken;
- (void)setAccountChangedToken:(int)arg0;
- (void)setNotificationObservers:(NSMapTable *)arg0;
- (void)setNotifyQueue:(NSOperationQueue *)arg0;

@end
