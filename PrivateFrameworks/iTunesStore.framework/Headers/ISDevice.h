/* Runtime dump - ISDevice
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISDevice : NSObject <ISSingleton>
{
    unsigned int _daemonLaunchCount;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _guid;
    double _lastFreeSpaceRequest;
}

@property (readonly) NSString * deviceName;
@property (readonly) NSString * guid;
@property (readonly) NSString * hardwareName;
@property (readonly) NSString * serialNumber;
@property (readonly) NSString * systemName;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ISDevice *)sharedInstance;
+ (void)setSharedInstance:(id)arg0;

- (void)dealloc;
- (ISDevice *)init;
- (NSString *)systemName;
- (NSString *)deviceName;
- (NSString *)serialNumber;
- (char)releasePowerAssertion:(id)arg0;
- (NSString *)guid;
- (int)_deviceClass;
- (char)checkCapabilities:(id)arg0 withMismatches:(id *)arg1;
- (NSString *)copyProtocolConditionalContext;
- (NSString *)hardwareName;
- (char)takePowerAssertion:(id)arg0;
- (void)requestFreeSpace:(unsigned long long)arg0 atPath:(NSString *)arg1 withOptions:(NSDictionary *)arg2 completionBlock:(id /* block */)arg3;
- (void)resetLocationAndPrivacy;
- (id)supportedOfferDeviceForDevices:(id)arg0;

@end
