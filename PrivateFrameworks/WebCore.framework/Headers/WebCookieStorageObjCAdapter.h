/* Runtime dump - WebCookieStorageObjCAdapter
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCookieStorageObjCAdapter : NSObject
{
    /* block */ id * m_cookieChangeCallback;
}

- (void)notifyCookiesChangedOnMainThread;
- (void)cookiesChangedNotificationHandler:(id /* block */)arg0;
- (void)startListeningForCookieChangeNotificationsWithCallback:(/* block */ id *)arg0;
- (void)stopListeningForCookieChangeNotifications;

@end
