/* Runtime dump - HMDLocation
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLocation : NSObject <CLLocationManagerDelegate>
{
    HMMessageDispatcher * _msgDispatcher;
    int _locationAuthorized;
}

@property (retain, nonatomic) HMMessageDispatcher * msgDispatcher;
@property (readonly, nonatomic) int locationAuthorized;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)sunriseTimeForLocation:(NSObject *)arg0;
+ (NSObject *)sunsetTimeForLocation:(NSObject *)arg0;
+ (NSObject *)_getAlmanacWithLocation:(NSObject *)arg0;
+ (NSObject *)findEvent:(NSObject *)arg0 withGeo:(id)arg1;
+ (HMDLocation *)sharedManager;

- (void).cxx_destruct;
- (HMMessageDispatcher *)msgDispatcher;
- (void)setMsgDispatcher:(HMMessageDispatcher *)arg0;
- (void)registerForRegionUpdate:(NSDate *)arg0 withDelegate:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)deregisterForRegionUpdate:(NSDate *)arg0 completionHandler:(id /* block */)arg1;
- (int)locationAuthorized;
- (void)extractLocationWithDelegate:(NSObject *)arg0;
- (void)beingConfigured:(char)arg0 completionHandler:(id /* block */)arg1;

@end
