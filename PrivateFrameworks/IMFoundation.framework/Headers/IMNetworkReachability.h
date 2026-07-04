/* Runtime dump - IMNetworkReachability
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMNetworkReachability : NSObject
{
    char localWiFiRef;
    struct __SCNetworkReachability * reachabilityRef;
}

+ (NSString *)reachabilityWithHostName:(NSString *)arg0;
+ (NSString *)reachabilityWithAddress:(struct sockaddr_in *)arg0;
+ (NSURLConnection *)reachabilityForInternetConnection;
+ (IMNetworkReachability *)reachabilityForLocalWiFi;

- (void)dealloc;
- (int)localWiFiStatusForFlags:(unsigned int)arg0;
- (int)networkStatusForFlags:(unsigned int)arg0;
- (int)currentReachabilityStatus;

@end
