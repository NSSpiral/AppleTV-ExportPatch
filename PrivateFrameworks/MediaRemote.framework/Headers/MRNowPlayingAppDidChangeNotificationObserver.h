/* Runtime dump - MRNowPlayingAppDidChangeNotificationObserver
 * Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingAppDidChangeNotificationObserver : MSVDistributedNotificationObserver

+ (NSOperationQueue *)observerWithQueue:(NSObject *)arg0;

- (MRNowPlayingAppDidChangeNotificationObserver *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSDictionary *)userInfoForLocalNotification;

@end
