/* Runtime dump - GKConnectionInternal
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKConnectionInternal : GKConnection <CDXClientDelegate, CDXClientSessionDelegate>
{
    unsigned int _gckPID;
    NSString * _pidGUID;
    struct OpaqueGCKSession * _gckSession;
    NSMutableArray * _gckEventList;
    char _toForwardEVents;
    id _eventDelegate;
    CDXClient * _cdxClient;
    NSMutableDictionary * _cdxSessions;
    NSData * _preblob;
    id _preblobCallback;
    double _preblobCallbackCancelTime;
    struct _opaque_pthread_mutex_t _xPreblobFetch;
    struct _opaque_pthread_cond_t _cPreblobFetch;
    struct _opaque_pthread_mutex_t _xPrepareThread;
    struct _opaque_pthread_cond_t _cPrepareThread;
    int _fPrepareThread;
    double _wakeTime;
    NSMutableDictionary * _preblobToPIDMap;
    NSMutableDictionary * _pidToPreblobMap;
    NSMutableDictionary * _pidToConnectionDataMap;
    NSMutableArray * _pendingConnectionPIDList;
    char _fAllowMoreRelay;
    NSMutableArray * _allowRelayPIDList;
    NSMutableDictionary * _pidToPlayerIDMap;
    NSMutableDictionary * _pidToConnectTimeoutSource;
    struct _opaque_pthread_mutex_t _xRelay;
    NSMutableDictionary * _pidToRelayInitiateInfoMap;
    NSMutableDictionary * _pidToRelayConnectionDataMap;
    NSMutableDictionary * _pidToRelayUpdateInfoMap;
    NSMutableDictionary * _initRelayQueue;
    NSMutableDictionary * _updateRelayQueue;
    int _fPreReleased;
    int _localGamingCDXSocket;
    unsigned short _localGamingCDXPort;
    NSObject<OS_dispatch_source> * _localGamingCDXListenSource;
    NSMutableDictionary * _localGamingSocketToPIDMap;
    NSMutableDictionary * _localGamingSocketToConnectionDataMap;
    NSMutableSet * _pidsPreparedForConnection;
    struct opaqueRTCReporting * _reportingAgent;
    TimingCollection * _perfTimers;
}

@property (retain, nonatomic) CDXClient * cdxClient;
@property (retain) NSMutableDictionary * cdxSessions;
@property (retain) NSMutableDictionary * pidToConnectTimeoutSource;

- (void)dealloc;
- (void)CDXClientSession:(CDXClientSession *)arg0 receivedData:(NSData *)arg1 from:(int)arg2;
- (void)CDXClient:(CDXClient *)arg0 error:(NSError *)arg1;
- (void)CDXClient:(CDXClient *)arg0 preblob:(NSData *)arg1;
- (GKConnectionInternal *)initWithParticipantID:(NSString *)arg0;
- (void)preRelease;
- (struct OpaqueGCKSession *)gckSession;
- (struct opaqueRTCReporting *)reportingAgent;
- (void)setReportingAgent:(struct opaqueRTCReporting *)arg0;
- (void)setEventDelegate:(NSObject *)arg0;
- (NSObject<BREventDelegate> *)eventDelegate;
- (unsigned int)gckPID;
- (void)getLocalConnectionDataWithCompletionHandler:(id /* block */)arg0;
- (char)convertParticipantID:(NSObject *)arg0 toPeerID:(id *)arg1;
- (char)convertPeerID:(NSObject *)arg0 toParticipantID:(id *)arg1;
- (void)setParticipantID:(NSString *)arg0 forPeerID:(NSObject *)arg1;
- (void)connectParticipantsWithConnectionData:(NSData *)arg0 withSessionInfo:(NSData *)arg1;
- (void)initiateRelayWithParticipant:(id)arg0 withConnectionData:(NSData *)arg1 withRelayInfo:(NSDictionary *)arg2 didInitiate:(char)arg3;
- (void)updateRelayWithParticipant:(id)arg0 withConnectionData:(NSData *)arg1 withRelayInfo:(NSDictionary *)arg2 didInitiate:(char)arg3;
- (void)cancelConnectParticipant:(id)arg0;
- (id)networkStatisticsDictionaryForGCKStats:(void *)arg0;
- (NSDictionary *)networkStatistics;
- (id)getLocalConnectionDataForLocalGaming;
- (void)setCdxSessions:(NSMutableDictionary *)arg0;
- (void)setCdxClient:(CDXClient *)arg0;
- (NSMutableDictionary *)cdxSessions;
- (CDXClient *)cdxClient;
- (void)setPidToConnectTimeoutSource:(NSMutableDictionary *)arg0;
- (NSOperationQueue *)asyncWorkQueue;
- (NSArray *)createInsecureTicketUsingSortedConnectionsFromList:(NSArray *)arg0;
- (char)shouldWeInitiateRelayWithPID:(unsigned int)arg0;
- (void)localGamingReceiveDataHandler:(id /* block */)arg0 data:(NSData *)arg1 time:(double)arg2 error:(NSError *)arg3;
- (void)addEvent:(struct ? *)arg0 remotePeer:(unsigned int)arg1;
- (NSMutableDictionary *)pidToConnectTimeoutSource;
- (id)createInitiateRelayDictionaryForParticipant:(id)arg0 remotePeerID:(NSObject *)arg1;
- (void)internal_setRemoteConnectionData:(NSData *)arg0 fromParticipantID:(NSObject *)arg1 pendingConnectionPIDList:(NSMutableArray *)arg2;
- (void)connectPendingConnectionsFromList:(NSArray *)arg0 sessionInfo:(NSData *)arg1;
- (NSData *)extractBlobUsingData:(NSData *)arg0 withSourcePID:(unsigned int)arg1 destPID:(unsigned int)arg2;
- (void)internalInitiateRelayWithParticipant:(id)arg0 withConnectionData:(NSData *)arg1 withRelayInfo:(NSDictionary *)arg2 didInitiate:(char)arg3;
- (void)internalUpdateRelayWithParticipant:(id)arg0 withConnectionData:(NSData *)arg1 withRelayInfo:(NSDictionary *)arg2 didInitiate:(char)arg3;
- (id)newRelayUpdateDictionaryForParticipant:(id)arg0 didInitiate:(char)arg1;
- (void)doRelayCheckForRemotePeerID:(NSObject *)arg0;
- (char)localGamingCheckEstablishConnection:(NSURLConnection *)arg0 connectionData:(NSData *)arg1;
- (char)startListeningForLocalGamingCDX;
- (NSObject<OS_dispatch_queue> *)timerQueue;

@end
