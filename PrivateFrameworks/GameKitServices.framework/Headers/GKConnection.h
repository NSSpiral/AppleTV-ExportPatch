/* Runtime dump - GKConnection
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKConnection : NSObject

@property id eventDelegate;
@property (nonatomic) struct opaqueRTCReporting * reportingAgent;

+ (GKConnection *)allocWithZone:(struct _NSZone *)arg0;
+ (char)isRelayEnabled;
+ (NSData *)externalAddressForSelfConnectionData:(NSData *)arg0;
+ (NSData *)externalAddressForCDXSelfConnectionData:(NSData *)arg0;

- (void)connect;
- (GKConnection *)initWithParticipantID:(NSString *)arg0;
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

@end
