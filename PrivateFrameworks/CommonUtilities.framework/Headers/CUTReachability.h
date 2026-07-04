/* Runtime dump - CUTReachability
 * Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTReachability : NSObject
{
    char localWiFiRef;
    struct __SCNetworkReachability * reachabilityRef;
}

+ (NSString *)reachabilityWithHostName:(NSString *)arg0;
+ (NSString *)reachabilityWithAddress:(struct sockaddr_in *)arg0;
+ (NSURLConnection *)reachabilityForInternetConnection;
+ (CUTReachability *)reachabilityForLocalWiFi;

- (void)dealloc;
- (int)localWiFiStatusForFlags:(unsigned int)arg0;
- (int)networkStatusForFlags:(unsigned int)arg0;
- (char)connectionRequired;
- (int)currentReachabilityStatus;

@end
