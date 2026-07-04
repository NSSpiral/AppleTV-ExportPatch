/* Runtime dump - WebNotification
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebNotification : NSObject
{
    WebNotificationPrivate * _private;
}

- (WebNotification *)init;
- (NSString *)title;
- (NSString *)tag;
- (struct CGPoint)origin;
- (NSString *)body;
- (unsigned long long)notificationID;
- (NSURL *)iconURL;
- (NSString *)dir;
- (NSString *)lang;
- (void)dispatchShowEvent;
- (void)dispatchCloseEvent;
- (void)dispatchClickEvent;
- (void)dispatchErrorEvent;

@end
