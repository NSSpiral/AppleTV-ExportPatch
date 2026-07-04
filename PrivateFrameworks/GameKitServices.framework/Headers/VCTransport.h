/* Runtime dump - VCTransport
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCTransport : NSObject
{
    struct tagHANDLE * tpHandle;
    NSMutableDictionary * iceBlocks;
    NSObject<OS_dispatch_queue> * delegateQueue;
    NSMutableDictionary * dataReceivedHandlers;
    NSObject<OS_dispatch_queue> * dataReceivedHandlerQueue;
}

+ (VCTransport *)sharedInstance;

- (void)dealloc;
- (VCTransport *)init;
- (void)cleanup;
- (long)updateBaseband:(struct tagCONNRESULT *)arg0;
- (long)discardRelayBindingForCallID:(unsigned long)arg0 withChannelNumber:(int)arg1;
- (long)discardRelayBindingForCallID:(unsigned long)arg0;
- (int)detailedErrorCodeForConnectionWithCallID:(unsigned long)arg0;
- (long)stopConnectivityCheckForCallID:(unsigned long)arg0;
- (char)ipPortStillExists:(struct tagIPPORT *)arg0 requiresWifi:(char)arg1;
- (void)registerICEBlockForCallID:(unsigned long)arg0 connectedBlock:(id /* block */)arg1 newCandidatesBlock:(/* block */ id)arg2 setupRelayBlock:(id /* block */)arg3;
- (long)setSKEState:(struct SKEStateOpaque *)arg0 forCallID:(unsigned long)arg1;
- (long)processRemoteInterfaceChangeMessage:(unsigned long)arg0 resultKey:(struct tagCONNRESULT *)arg1 remoteData:(struct tagIPPORT)arg2 remoteLen:(struct tagIPPORT)arg3 remoteCandidateVersion:(struct tagIPPORT)arg4;
- (long)sendUDPPacketReliableEncrypted:(id)arg0 localIPPort:(struct tagIPPORT *)arg1 destinationIPPort:(struct tagIPPORT *)arg2 oftType:(int)arg3;
- (long)updateInterfaceList:(struct tagCONNRESULT *)arg0 shouldFilterCellInterface:(struct tagIPPORT)arg1 isUpdateNeeded:(struct tagIPPORT)arg2;
- (long)getConnectionDataForCallID:(unsigned long)arg0 version:(unsigned char)arg1 useCompressedData:(char)arg2 pConnectionData:(void * *)arg3 connectDataSizeInBytes:(void)arg4 relayDictionary:(int *)arg5 interfaceUpdate:(struct __CFDictionary *)arg6 nonCellularCandidateTimeout:(char)arg7;
- (long)getLoopbackIP:(struct tagIPPORT *)arg0;
- (long)setupDTLSSecurity:(unsigned long)arg0 connectionResult:(struct tagCONNRESULT *)arg1 completionHandler:(struct tagIPPORT)arg2;
- (long)setICETimeout:(double)arg0;
- (long)flushBasebandQueue:(void *)arg0;
- (long)getSignalStrength:(int *)arg0 signalRaw:(int *)arg1 signalGrade:(int *)arg2;
- (long)getCellTechForCallID:(unsigned long)arg0 localCellTech:(int *)arg1 isLocalCellularQoSEnabled:(int *)arg2 remoteCellTech:(int *)arg3 isRemoteCellularQoSEnabled:(int *)arg4;
- (long)setupBaseband:(struct tagCONNRESULT *)arg0;
- (long)updateQoS:(char)arg0;
- (long)updateICERoleForCallID:(unsigned long)arg0 role:(int)arg1 remoteCallID:(unsigned long)arg2 sessionID:(struct __CFString *)arg3;
- (long)setForceRelayForCallID:(unsigned long)arg0;
- (long)setForceIPv6ForCallID:(unsigned long)arg0;
- (long)startConnectionCheckForCallID:(unsigned long)arg0 remoteConnectionDataBlob:(id)arg1 relayDictionary:(NSDictionary *)arg2 iceTimeout:(double)arg3 securityIdentity:(struct __SecIdentity *)arg4 skeState:(struct SKEStateOpaque *)arg5 usedRelay:(int *)arg6;
- (long)updateQualityIndicator:(int)arg0 isIPv6:(char)arg1;
- (long)getRemoteICEVersion:(unsigned long)arg0 remoteICEVersion:(unsigned int *)arg1;
- (NSObject *)getRemoteCIDForDstIPPort:(struct tagIPPORT *)arg0 callID:(unsigned long)arg1;
- (long)getNextBestCandidate:(struct tagCANDIDATE *)arg0 callID:(struct tagIPPORT)arg1 isLocal:(struct tagIPPORT)arg2 IPPortToExclude:(unsigned int)arg3;
- (void)setARPLHandler:(id /* block */)arg0;
- (void)registerDataReceivedHandler:(id /* block */)arg0 forCallID:(/* block */ id)arg1;
- (long)sendData:(NSData *)arg0 localIPPort:(struct tagIPPORT *)arg1 destinationIPPort:(struct tagIPPORT *)arg2 remoteCallID:(unsigned long)arg3 encrypted:(char)arg4;
- (void)iceConnectedForCallID:(unsigned long)arg0 result:(struct tagCONNRESULT *)arg1 didReceivePacket:(struct tagIPPORT)arg2 useRelay:(struct tagIPPORT)arg3 secretKey:(struct tagIPPORT)arg4 skeResult:(struct tagIPPORT)arg5;
- (void)iceNewCandidatesForCallID:(unsigned long)arg0 blob:(char *)arg1 size:(int)arg2 newCandidateVersion:(unsigned short)arg3;
- (void)iceSetupSecondaryRelayForCallID:(unsigned long)arg0 callerRequired:(char)arg1;
- (void)receivedDataPacket:(char *)arg0 length:(int)arg1 forCallID:(unsigned long)arg2 encrypted:(char)arg3;
- (long)processRemoteInterfaceChange:(unsigned long)arg0 remoteData:(void *)arg1 remoteLen:(int)arg2;

@end
