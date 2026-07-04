/* Runtime dump - GKReachability
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKReachability : NSObject
{
    char localWiFiRef;
    struct __SCNetworkReachability * reachabilityRef;
}

+ (NSString *)_gkReachabilityWithAddress:(struct sockaddr_in *)arg0;
+ (NSString *)_gkReachabilityWithHostName:(NSString *)arg0;
+ (NSURLConnection *)_gkReachabilityForInternetConnection;
+ (GKReachability *)_gkReachabilityForLocalWiFi;

- (void)dealloc;
- (void)_gkStopNotifier;
- (int)localWiFiStatusForFlags:(unsigned int)arg0;
- (int)networkStatusForFlags:(unsigned int)arg0;
- (char)_gkStartNotifier;
- (char)_gkConnectionRequired;
- (int)_gkCurrentReachabilityStatus;

@end
