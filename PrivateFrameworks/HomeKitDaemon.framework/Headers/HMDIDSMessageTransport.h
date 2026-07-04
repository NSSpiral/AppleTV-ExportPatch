/* Runtime dump - HMDIDSMessageTransport
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDIDSMessageTransport : NSObject <IDSServiceDelegate, HAPTimerDelegate, HMMessageTransport, HMIDSMessageTransport>
{
    char _proxy;
    IDSService * _idsService;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSMutableDictionary * _pendingResponses;
    NSMutableDictionary * _receivedResponses;
    NSMutableDictionary * _requestedCapabilities;
    NSMutableDictionary * _destinationAddress;
    NSMutableDictionary * _pendingSentMessages;
    NSMutableDictionary * _pendingResponseTimers;
    HMMessageDispatcher * _messageDispatcher;
    NSMutableSet * _peerTransientDeviceAddresses;
    NSMutableSet * _peerResidentDeviceAddresses;
    NSMutableSet * _pairedWatchDeviceAddresses;
    NSMutableSet * _reachableCompanionDeviceAddresses;
    NSMutableSet * _reachableWatchDeviceAddresses;
    NSString * _pairedWatchDestination;
    NSString * _pairedCompanionDestination;
    HAPTimer * _devicesChangedNotificationDebounceTimer;
}

@property (readonly, nonatomic) char accountActive;
@property (readonly, nonatomic) NSArray * pairedWatchDevices;
@property (readonly, nonatomic) NSArray * reachableCompanionDevices;
@property (readonly, nonatomic) NSArray * reachableWatchDevices;
@property (retain, nonatomic) IDSService * idsService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (retain, nonatomic) NSMutableDictionary * pendingResponses;
@property (readonly, nonatomic) NSMutableDictionary * receivedResponses;
@property (readonly, nonatomic) NSMutableDictionary * requestedCapabilities;
@property (readonly, nonatomic) NSMutableDictionary * destinationAddress;
@property (retain, nonatomic) NSMutableDictionary * pendingSentMessages;
@property (retain, nonatomic) NSMutableDictionary * pendingResponseTimers;
@property (weak, nonatomic) HMMessageDispatcher * messageDispatcher;
@property (retain, nonatomic) NSMutableSet * peerTransientDeviceAddresses;
@property (retain, nonatomic) NSMutableSet * peerResidentDeviceAddresses;
@property (retain, nonatomic) NSMutableSet * pairedWatchDeviceAddresses;
@property (retain, nonatomic) NSMutableSet * reachableCompanionDeviceAddresses;
@property (retain, nonatomic) NSMutableSet * reachableWatchDeviceAddresses;
@property (retain, nonatomic) NSString * pairedWatchDestination;
@property (retain, nonatomic) NSString * pairedCompanionDestination;
@property (readonly, nonatomic) char proxy;
@property (readonly, nonatomic) HAPTimer * devicesChangedNotificationDebounceTimer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)messageElementsFromDictionary:(NSDictionary *)arg0 messageName:(id *)arg1 messageIdentifier:(id *)arg2 messagePayload:(id *)arg3 target:(id *)arg4 transactionID:(id *)arg5 isRequest:(char *)arg6 isResponse:(char *)arg7 isNotification:(char *)arg8;
+ (NSMutableDictionary *)dictionaryForMessageName:(NSString *)arg0 messageIdentifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2 target:(NSUUID *)arg3 transactionID:(NSString *)arg4 msgType:(unsigned int)arg5;
+ (NSString *)idsMessageTypeDescription:(unsigned int)arg0;

- (void)start;
- (void).cxx_destruct;
- (char)proxy;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)timerDidFire:(HAPTimer *)arg0;
- (NSMutableDictionary *)pendingResponses;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (HMDIDSMessageTransport *)initWithIDSService:(NSObject *)arg0 proxy:(char)arg1;
- (void)setMessageDispatcher:(HMMessageDispatcher *)arg0;
- (HMMessageDispatcher *)messageDispatcher;
- (void)configure:(id)arg0;
- (NSArray *)residentDevices;
- (void)handleMessageWithName:(NSString *)arg0 messageIdentifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2 target:(NSUUID *)arg3;
- (void)handleMessageWithName:(NSString *)arg0 messageIdentifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2 target:(NSUUID *)arg3 responseHandler:(NSObject<OS_xpc_object> *)arg4;
- (char)isAccountActive;
- (NSArray *)transientDevices;
- (NSArray *)pairedWatchDevices;
- (NSArray *)reachableCompanionDevices;
- (NSArray *)reachableWatchDevices;
- (char)rerouteDestinationIfCompanion:(id)arg0 newDestination:(id *)arg1;
- (char)rerouteDestinationIfWatch:(id)arg0 newDestination:(id *)arg1;
- (void)handleMessageWithName:(NSString *)arg0 messageIdentifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2 target:(NSUUID *)arg3 destination:(NSString *)arg4;
- (void)handleMessageWithName:(NSString *)arg0 messageIdentifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2 target:(NSUUID *)arg3 destination:(NSString *)arg4 responseTimeout:(double)arg5 responseHandler:(NSObject<OS_xpc_object> *)arg6;
- (IDSService *)idsService;
- (void)updatePeerDeviceAddresses:(id)arg0;
- (NSMutableSet *)peerResidentDeviceAddresses;
- (NSMutableSet *)peerTransientDeviceAddresses;
- (NSMutableSet *)pairedWatchDeviceAddresses;
- (NSMutableSet *)reachableCompanionDeviceAddresses;
- (NSMutableSet *)reachableWatchDeviceAddresses;
- (char)_rerouteDestinationIfWatch:(id)arg0 newDestination:(id *)arg1;
- (NSString *)pairedWatchDestination;
- (char)_rerouteDestinationIfCompanion:(id)arg0 newDestination:(id *)arg1;
- (NSString *)pairedCompanionDestination;
- (id)_compatibleDevices:(id)arg0;
- (void)_setDestinationAddress;
- (void)_updateReachableDeviceAddresses:(id)arg0;
- (char)_isCompatibleWatchDevice:(NSObject *)arg0;
- (char)_isCompatibleCompanionDevice:(NSObject *)arg0;
- (void)setReachableCompanionDeviceAddresses:(NSMutableSet *)arg0;
- (void)setReachableWatchDeviceAddresses:(NSMutableSet *)arg0;
- (void)setPairedWatchDestination:(NSString *)arg0;
- (void)setPairedCompanionDestination:(NSString *)arg0;
- (NSString *)sendMessage:(NSString *)arg0 destinations:(id)arg1 msgType:(unsigned int)arg2 error:(id *)arg3;
- (NSMutableDictionary *)pendingSentMessages;
- (NSMutableDictionary *)requestedCapabilities;
- (NSMutableDictionary *)destinationAddress;
- (void)_startPendingResponseTimer:(NSObject *)arg0 responseTimeout:(double)arg1 identifier:(NSString *)arg2;
- (NSMutableDictionary *)pendingResponseTimers;
- (NSMutableDictionary *)receivedResponses;
- (void)_removePendingResponseTransaction:(NSObject *)arg0;
- (void)_pendingResponseTimeoutFor:(id)arg0;
- (void)_removePendingResponseTimerForTransaction:(NSObject *)arg0;
- (void)_restartPendingResponseTimerFor:(id)arg0 withReducedFactor:(unsigned long)arg1;
- (HAPTimer *)devicesChangedNotificationDebounceTimer;
- (void)_handleDevicesChangedNotificationDebounceTimer;
- (void)service:(IDSService *)arg0 activeAccountsChanged:(NSSet *)arg1;
- (void)service:(IDSService *)arg0 devicesChanged:(NSArray *)arg1;
- (void)service:(IDSService *)arg0 nearbyDevicesChanged:(NSArray *)arg1;
- (void)service:(IDSService *)arg0 account:(IDSAccount *)arg1 identifier:(NSString *)arg2 didSendWithSuccess:(char)arg3 error:(NSError *)arg4;
- (void)service:(NSObject *)arg0 account:(NSObject *)arg1 incomingMessage:(struct __CFHTTPMessage *)arg2 fromID:(NSString *)arg3;
- (void)setIdsService:(IDSService *)arg0;
- (void)setPendingResponses:(NSMutableDictionary *)arg0;
- (void)setPendingSentMessages:(NSMutableDictionary *)arg0;
- (void)setPendingResponseTimers:(NSMutableDictionary *)arg0;
- (void)setPeerTransientDeviceAddresses:(NSMutableSet *)arg0;
- (void)setPeerResidentDeviceAddresses:(NSMutableSet *)arg0;
- (void)setPairedWatchDeviceAddresses:(NSMutableSet *)arg0;

@end
