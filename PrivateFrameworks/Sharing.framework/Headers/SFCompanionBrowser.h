/* Runtime dump - SFCompanionBrowser
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCompanionBrowser : NSObject <SFCompanionXPCManagerObserver, SFCompanionBrowserClient>
{
    struct __SFBrowser * _browser;
    NSMutableDictionary * _nodes;
    NSMutableArray * _lostPeople;
    NSMutableArray * _foundPeople;
    NSMutableArray * _serviceTypes;
    NSMutableDictionary * _foundServices;
    NSMutableDictionary * _deviceServices;
    char _foundDevices;
    <SFCompanionBrowserDelegate> * _delegate;
    NSString * _identifier;
    <SFCompanionBrowserProtocol> * _connectionProxy;
}

@property <SFCompanionBrowserDelegate> * delegate;
@property (readonly, copy) NSString * serviceType;
@property char foundDevices;
@property (retain) NSString * identifier;
@property (retain) <SFCompanionBrowserProtocol> * connectionProxy;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (SFCompanionBrowser *)initWithServiceType:(NSString *)arg0;
- (void)dealloc;
- (void)setDelegate:(<SFCompanionBrowserDelegate> *)arg0;
- (<SFCompanionBrowserDelegate> *)delegate;
- (NSString *)identifier;
- (void)stop;
- (void)setIdentifier:(NSString *)arg0;
- (void)start;
- (void)clearCache;
- (NSString *)serviceType;
- (void)stopBrowsing;
- (NSMutableArray *)serviceTypes;
- (void)startBrowsing;
- (void)setConnectionProxy:(<SFCompanionBrowserProtocol> *)arg0;
- (<SFCompanionBrowserProtocol> *)connectionProxy;
- (void)xpcManagerConnectionInterrupted;
- (char)foundDevices;
- (void)setFoundDevices:(char)arg0;
- (void)receivedActivitiesList:(NSArray *)arg0 fromDeviceWithIdentifier:(NSString *)arg1;
- (NSArray *)_initWithServiceTypes:(NSMutableArray *)arg0;
- (void)startBluetooth;
- (void)stopBluetooth;
- (void)handleNoDevices;
- (void)handleNewActivities:(id)arg0 forDevice:(char)arg1;
- (SFCompanionBrowser *)initWithServiceTypes:(NSMutableArray *)arg0;
- (NSArray *)serviceNames;
- (void)handleBrowserCallback;

@end
