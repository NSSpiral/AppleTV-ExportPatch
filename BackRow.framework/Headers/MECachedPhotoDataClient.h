/* Runtime dump - MECachedPhotoDataClient
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface MECachedPhotoDataClient : ATVDataClient

+ (MECachedPhotoDataClient *)cachedPhotoDataClient;

- (void)concreteDataClientConnect;
- (void)concreteDataClientDisconnect;
- (void)executeQuery:(NSObject *)arg0 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionHandler:(id /* block */)arg2;

@end
