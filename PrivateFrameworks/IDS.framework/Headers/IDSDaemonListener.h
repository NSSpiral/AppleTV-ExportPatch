/* Runtime dump - IDSDaemonListener
 * Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDaemonListener : NSObject <IDSDaemonListenerProtocol>
{
    NSObject<OS_dispatch_queue> * _ivarQueue;
    NSHashTable * _handlers;
    NSProtocolChecker * _protocol;
    NSMutableDictionary * _topicToAccountDictionaries;
    NSMutableDictionary * _topicToEnabledAccounts;
    NSMutableDictionary * _accountToDevices;
    char _setupComplete;
    char _postedSetupComplete;
    char _hidingDisconnect;
}

@property (readonly, nonatomic) char isSetupComplete;
@property (readonly, nonatomic) char hasPostedSetupComplete;
@property (nonatomic) char _hidingDisconnect;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (IDSDaemonListener *)init;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void)_noteDisconnected;
- (void)setupComplete:(char)arg0 info:(NSDictionary *)arg1;
- (void)accountEnabled:(id)arg0 onService:(NSObject *)arg1;
- (void)accountDisabled:(id)arg0 onService:(NSObject *)arg1;
- (void)account:(NSObject *)arg0 accountInfoChanged:(id)arg1;
- (void)account:(NSObject *)arg0 dependentDevicesUpdated:(id)arg1;
- (void)account:(NSObject *)arg0 localDeviceAdded:(id)arg1;
- (void)account:(NSObject *)arg0 localDeviceRemoved:(id)arg1;
- (void)device:(NSObject *)arg0 nsuuidChanged:(id)arg1;
- (void)continuityDidUpdateState:(int)arg0;
- (void)continuityDidLosePeer:(NSObject *)arg0;
- (void)continuityDidStartAdvertisingOfType:(int)arg0;
- (void)continuityDidStopAdvertisingOfType:(int)arg0;
- (void)continuityDidFailToStartAdvertisingOfType:(int)arg0 withError:(NSError *)arg1;
- (void)continuityDidStartScanningForType:(int)arg0;
- (void)continuityDidStopScanningForType:(int)arg0;
- (void)continuityDidFailToStartScanningForType:(int)arg0 withError:(NSError *)arg1;
- (void)continuityDidDiscoverType:(int)arg0 withData:(NSData *)arg1 fromPeer:(MCPeerID *)arg2;
- (void)continuityDidDiscoverPeerWithData:(NSData *)arg0 fromPeer:(MCPeerID *)arg1;
- (void)continuityDidConnectToPeer:(NSObject *)arg0 withError:(NSError *)arg1;
- (void)continuityDidDisconnectFromPeer:(NSObject *)arg0 withError:(NSError *)arg1;
- (char)_hidingDisconnect;
- (void)_setHidingDisconnect:(char)arg0;
- (char)isSetupComplete;
- (void)_callHandlersWithBlockOnIvarQueue:(NSObject *)arg0;
- (void)_callHandlersWithBlockOnIvarQueue:(NSObject *)arg0 cleanup:(/* block */ id)arg1;
- (void)_removeAccountOnIvarQueue:(NSObject *)arg0;
- (void)_callHandlersWithBlock:(id /* block */)arg0;
- (void)_deferredSetupOnIvarQueue:(NSObject *)arg0;
- (void)_callHandlersAsyncWithBlock:(id /* block */)arg0;
- (char)hasPostedSetupComplete;
- (void)addHandler:(id /* block */)arg0;
- (NSObject *)accountDictionariesForService:(NSObject *)arg0;
- (NSObject *)enabledAccountsForService:(NSObject *)arg0;
- (NSNumber *)dependentDevicesForAccount:(NSObject *)arg0;
- (void)accountAdded:(id)arg0;
- (void)accountRemoved:(id)arg0;
- (void)account:(NSObject *)arg0 registrationStatusInfoChanged:(id)arg1;
- (void)account:(NSObject *)arg0 aliasesChanged:(id)arg1;
- (void)account:(NSObject *)arg0 vettedAliasesChanged:(id)arg1;
- (void)account:(NSObject *)arg0 profileChanged:(id)arg1;
- (void)account:(NSObject *)arg0 loginChanged:(id)arg1;
- (void)account:(NSObject *)arg0 displayNameChanged:(id)arg1;
- (void)refreshRegistrationForAccount:(NSObject *)arg0;
- (void)registrationFailedForAccount:(NSObject *)arg0 needsDeletion:(id)arg1;
- (void)xpcObject:(NSObject<OS_xpc_object> *)arg0 objectContext:(TSPObjectContext *)arg1;
- (void)removeHandler:(id /* block */)arg0;

@end
