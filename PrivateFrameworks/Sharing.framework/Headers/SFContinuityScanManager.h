/* Runtime dump - SFContinuityScanManager
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFContinuityScanManager : NSObject <SFCompanionXPCManagerObserver, SFContinuityScannerClient>
{
    <SFContinuityScannerProtocol><NSXPCProxyCreating> * _connectionProxy;
    NSMutableSet * _foundDevices;
    NSHashTable * _observers;
}

@property (retain) <SFContinuityScannerProtocol><NSXPCProxyCreating> * connectionProxy;
@property (retain) NSMutableSet * foundDevices;
@property (retain) NSHashTable * observers;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SFContinuityScanManager *)sharedManager;

- (void)setupXPCConnection;
- (void)dealloc;
- (SFContinuityScanManager *)init;
- (void)removeObserver:(NSObject *)arg0;
- (void)setObservers:(NSHashTable *)arg0;
- (NSHashTable *)observers;
- (void)addObserver:(NSObject *)arg0;
- (void)setConnectionProxy:(<SFContinuityScannerProtocol><NSXPCProxyCreating> *)arg0;
- (<SFContinuityScannerProtocol><NSXPCProxyCreating> *)connectionProxy;
- (void)xpcManagerConnectionInterrupted;
- (void)activityPayloadFromDeviceUniqueID:(NSObject *)arg0 forAdvertisementPayload:(NSData *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)lostDeviceWithDevice:(NSObject *)arg0;
- (void)receivedAdvertisement:(id)arg0;
- (void)foundDeviceWithDevice:(NSObject *)arg0;
- (NSMutableSet *)foundDevices;
- (void)setFoundDevices:(NSMutableSet *)arg0;

@end
