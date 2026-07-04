/* Runtime dump - FTEmbeddedReachability
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTEmbeddedReachability : NSObject
{
    char localWiFiRef;
    struct __SCNetworkReachability * reachabilityRef;
}

+ (NSString *)reachabilityWithHostName:(NSString *)arg0;
+ (NSString *)reachabilityWithAddress:(struct sockaddr_in *)arg0;
+ (NSURLConnection *)reachabilityForInternetConnection;
+ (FTEmbeddedReachability *)reachabilityForLocalWiFi;

- (void)dealloc;
- (int)localWiFiStatusForFlags:(unsigned int)arg0;
- (int)networkStatusForFlags:(unsigned int)arg0;
- (char)connectionRequired;
- (int)currentReachabilityStatus;

@end
