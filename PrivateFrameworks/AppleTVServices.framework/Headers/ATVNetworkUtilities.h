/* Runtime dump - ATVNetworkUtilities
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVNetworkUtilities : NSObject

+ (char)internetAvailable;
+ (ATVNetworkUtilities *)_safeNameForInterface:(struct __SCNetworkInterface *)arg0;
+ (char)physicalNetworkAvailable;
+ (ATVNetworkUtilities *)_networkServices;
+ (struct __SCDynamicStore *)_dynamicStoreSingleton;
+ (NSObject *)_mergedStateForService:(struct __CFString *)arg0;
+ (void)_setupDynamicStoreSingleton;
+ (void)_setupReachabilityCallback;
+ (void)setNeedsUpdateNetworkState;
+ (void)setupNetworkMonitoring;
+ (void)testInternetHostReachability:(id)arg0 completion:(id /* block */)arg1;
+ (void)resolveIPAddressesForHostName:(NSString *)arg0 completion:(id /* block */)arg1;
+ (void)_updatePhysicalNetworkState;
+ (void)_enqueueInvalidateAndNotifyWithName:(NSString *)arg0 delay:(double)arg1;
+ (NSHashTable *)proxies;

@end
