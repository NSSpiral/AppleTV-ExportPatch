/* Runtime dump - NRDeviceDiscoveryController
 * Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRDeviceDiscoveryController : NSObject <NRDeviceDiscoveryControllerXPCFrameworkDelegate, NSXPCConnectionDelegate>
{
    NSArray * _devices;
    NSMutableArray * _mutableDevices;
    unsigned int _counter;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, nonatomic) NSArray * devices;
@property (retain, nonatomic) NSMutableArray * mutableDevices;
@property (nonatomic) unsigned int counter;
@property (retain, nonatomic) NSXPCConnection * xpcConnection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NRDeviceDiscoveryController *)sharedInstance;

- (void)dealloc;
- (NRDeviceDiscoveryController *)init;
- (void)begin;
- (void)end;
- (void).cxx_destruct;
- (unsigned int)counter;
- (void)setCounter:(unsigned int)arg0;
- (NSArray *)devices;
- (void)xpcSetValue:(id)arg0 forProperty:(NSString *)arg1 deviceID:(NSString *)arg2;
- (void)xpcAssertInClient:(NSObject *)arg0;
- (char)_xpcConnectToService;
- (void)xpcDidDiscoverDevice:(NSObject *)arg0 deviceID:(NSString *)arg1 advertisedName:(NSString *)arg2;
- (void)xpcDidRestartDiscovery;
- (NSMutableArray *)mutableDevices;
- (void)setMutableDevices:(NSMutableArray *)arg0;
- (NSXPCConnection *)xpcConnection;
- (void)setXpcConnection:(NSXPCConnection *)arg0;

@end
