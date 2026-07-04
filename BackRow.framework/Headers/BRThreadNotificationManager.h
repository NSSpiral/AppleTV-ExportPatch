/* Runtime dump - BRThreadNotificationManager
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRThreadNotificationManager : NSObject

+ (void)initializeNotificationCallbackForCurrentThread;
+ (void)postNotification:(NSNotification *)arg0 onThread:(NSObject *)arg1;

@end
