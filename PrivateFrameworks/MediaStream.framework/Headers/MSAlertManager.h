/* Runtime dump - MSAlertManager
 * Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSAlertManager : NSObject
{
    NSMutableDictionary * _personIDToNotification;
}

+ (MSAlertManager *)sharedAlertManager;

- (MSAlertManager *)init;
- (void).cxx_destruct;
- (void)_dismissNotificationForPersonID:(NSObject *)arg0;
- (void)_showNotificationInfo:(NSDictionary *)arg0;
- (void)_userDidRespondToNotification:(struct __CFUserNotification *)arg0 info:(NSDictionary *)arg1 responseFlags:(unsigned long)arg2;
- (void)displayAlertForPersonID:(NSObject *)arg0 notificationDict:(id)arg1 completionBlock:(id /* block */)arg2;

@end
