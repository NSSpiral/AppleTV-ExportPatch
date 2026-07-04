/* Runtime dump - TSUNetworkReachability
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUNetworkReachability : NSObject
{
    struct __SCNetworkReachability * _reachabilityRef;
    char _localWiFi;
    int _enableCount;
    char _notifierActive;
}

@property (readonly, nonatomic) char connectionRequired;
@property (readonly, nonatomic) int status;
@property (nonatomic) char notifierActive;

+ (NSString *)networkReachabilityWithHostName:(NSString *)arg0;
+ (NSString *)networkReachabilityWithAddress:(struct sockaddr_in *)arg0;
+ (NSArray *)networkReachabilityForDocumentResources;
+ (NSURLConnection *)networkReachabilityForInternetConnection;
+ (TSUNetworkReachability *)networkReachabilityForLocalWiFi;
+ (int)networkReachabilityStatusForDocumentResources;
+ (int)networkReachabilityStatusForInternetConnection;
+ (int)networkReachabilityStatusForLocalWiFi;

- (void)stopNotifier;
- (TSUNetworkReachability *)initWithReachabilityRef:(struct __SCNetworkReachability *)arg0;
- (char)notifierActive;
- (void)setNotifierActive:(char)arg0;
- (char)startNotifier;
- (void)disableNotifier;
- (char)enableNotifier;
- (void)dealloc;
- (TSUNetworkReachability *)init;
- (int)status;
- (int)localWiFiStatusForFlags:(unsigned int)arg0;
- (int)networkStatusForFlags:(unsigned int)arg0;
- (char)connectionRequired;

@end
