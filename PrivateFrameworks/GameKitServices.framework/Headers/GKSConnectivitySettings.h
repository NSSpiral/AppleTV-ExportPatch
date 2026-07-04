/* Runtime dump - GKSConnectivitySettings
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface GKSConnectivitySettings : NSObject

+ (void)initialize;
+ (struct tagIPPORT *)getIPPortForService:(NSObject *)arg0;
+ (GKSConnectivitySettings *)getClientOption:(id)arg0;
+ (NSObject *)getAddressForService:(NSObject *)arg0;
+ (int)getNATTypeFromCarrierBundle;
+ (int)getKeepAliveTimeoutFromCarrierBundle;
+ (NSDictionary *)getAllSettings;
+ (void)setAddress:(NSString *)arg0 forService:(struct __SCNetworkService *)arg1;
+ (void)setServerAddresses:(id)arg0;
+ (void)setClientOptions:(NSDictionary *)arg0;
+ (struct tagIPPORT *)getCachedIPPort;
+ (char)supportsHEVCEncoding;

- (void)dealloc;
- (GKSConnectivitySettings *)init;

@end
