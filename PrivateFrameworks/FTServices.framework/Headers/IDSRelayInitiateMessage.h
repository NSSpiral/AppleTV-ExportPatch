/* Runtime dump - IDSRelayInitiateMessage
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface IDSRelayInitiateMessage : IDSFaceTimeMessage <NSCopying>
{
    NSData * _selfPushToken;
    NSNumber * _selfNatType;
    NSNumber * _selfNATIP;
    NSString * _peerID;
    NSData * _peerPushToken;
    NSNumber * _peerNatType;
    NSNumber * _peerNATIP;
    NSNumber * _relayType;
    NSData * _relayConnectionId;
    NSData * _relayTransactionIdAlloc;
    NSData * _relayTokenAllocReq;
    NSData * _selfRelayIP;
    NSNumber * _selfRelayPort;
    NSData * _peerRelayIP;
    NSNumber * _peerRelayPort;
}

@property (copy) NSData * selfPushToken;
@property (copy) NSNumber * selfNatType;
@property (copy) NSNumber * selfNATIP;
@property (copy) NSString * peerID;
@property (copy) NSData * peerPushToken;
@property (copy) NSNumber * peerNatType;
@property (copy) NSNumber * peerNATIP;
@property (copy) NSNumber * relayType;
@property (copy) NSData * relayConnectionId;
@property (copy) NSData * relayTransactionIdAlloc;
@property (copy) NSData * relayTokenAllocReq;
@property (copy) NSData * selfRelayIP;
@property (copy) NSNumber * selfRelayPort;
@property (copy) NSData * peerRelayIP;
@property (copy) NSNumber * peerRelayPort;

- (NSString *)peerID;
- (void)setPeerID:(NSString *)arg0;
- (void)dealloc;
- (IDSRelayInitiateMessage *)copyWithZone:(struct _NSZone *)arg0;
- (NSNumber *)relayType;
- (NSData *)selfRelayIP;
- (NSNumber *)selfRelayPort;
- (NSData *)peerRelayIP;
- (NSNumber *)peerRelayPort;
- (void)setRelayType:(NSNumber *)arg0;
- (void)setSelfRelayIP:(NSData *)arg0;
- (void)setSelfRelayPort:(NSNumber *)arg0;
- (void)setPeerRelayIP:(NSData *)arg0;
- (void)setPeerRelayPort:(NSNumber *)arg0;
- (NSData *)selfPushToken;
- (void)setSelfPushToken:(NSData *)arg0;
- (NSNumber *)selfNATIP;
- (void)setRelayConnectionId:(NSData *)arg0;
- (void)setRelayTransactionIdAlloc:(NSData *)arg0;
- (void)setRelayTokenAllocReq:(NSData *)arg0;
- (void)setSelfNATIP:(NSNumber *)arg0;
- (NSData *)relayConnectionId;
- (NSData *)relayTransactionIdAlloc;
- (NSData *)relayTokenAllocReq;
- (NSNumber *)selfNatType;
- (void)setSelfNatType:(NSNumber *)arg0;
- (void)setPeerNatType:(NSNumber *)arg0;
- (NSData *)peerPushToken;
- (NSNumber *)peerNATIP;
- (void)setPeerPushToken:(NSData *)arg0;
- (NSNumber *)peerNatType;
- (void)setPeerNATIP:(NSNumber *)arg0;
- (NSString *)bagKey;
- (void)handleResponseDictionary:(NSDictionary *)arg0;
- (MFMessageBody *)messageBody;
- (NSArray *)requiredKeys;

@end
