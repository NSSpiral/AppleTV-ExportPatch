/* Runtime dump - BRDarwinNotificationTranslator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface BRDarwinNotificationTranslator : BRSingleton
{
    NSMutableDictionary * _registrations;
}

+ (char)registerDarwinNotification:(char *)arg0 sendsNotificationNamed:(id)arg1;
+ (BRDarwinNotificationTranslator *)singleton;
+ (void)setSingleton:(NSObject *)arg0;
+ (char)deregisterDarwinNotification:(char *)arg0;
+ (int)notificationTokenForDarwinNotification:(char *)arg0;

- (char)_deregisterDarwinNotification:(char *)arg0;
- (char)_registerDarwinNotification:(char *)arg0 sendsNotificationNamed:(id)arg1;
- (NSNotification *)_registrationForDarwinNotification:(char *)arg0;
- (NSString *)_registrationForToken:(int)arg0;
- (void)dealloc;
- (BRDarwinNotificationTranslator *)init;
- (void).cxx_destruct;

@end
