/* Runtime dump - IDSAcceptMessage
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface IDSAcceptMessage : IDSFaceTimeMessage <NSCopying>
{
    NSData * _selfPushToken;
    NSNumber * _selfNATType;
    NSData * _selfBlob;
    NSData * _selfNATIP;
    NSString * _peerID;
    NSData * _peerPushToken;
    NSNumber * _peerNATType;
    NSData * _peerBlob;
    NSData * _peerNATIP;
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
@property (copy) NSNumber * selfNATType;
@property (copy) NSData * selfBlob;
@property (copy) NSData * selfNATIP;
@property (copy) NSString * peerID;
@property (copy) NSData * peerPushToken;
@property (copy) NSNumber * peerNATType;
@property (copy) NSData * peerBlob;
@property (copy) NSData * peerNATIP;
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
- (IDSAcceptMessage *)init;
- (IDSAcceptMessage *)copyWithZone:(struct _NSZone *)arg0;
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
- (NSNumber *)selfNATType;
- (NSData *)selfNATIP;
- (void)setRelayConnectionId:(NSData *)arg0;
- (void)setRelayTransactionIdAlloc:(NSData *)arg0;
- (void)setRelayTokenAllocReq:(NSData *)arg0;
- (void)setSelfNATType:(NSNumber *)arg0;
- (void)setSelfNATIP:(NSData *)arg0;
- (NSData *)relayConnectionId;
- (NSData *)relayTransactionIdAlloc;
- (NSData *)relayTokenAllocReq;
- (void)setSelfBlob:(NSData *)arg0;
- (NSData *)selfBlob;
- (NSData *)peerBlob;
- (NSData *)peerPushToken;
- (NSNumber *)peerNATType;
- (NSData *)peerNATIP;
- (void)setPeerPushToken:(NSData *)arg0;
- (void)setPeerNATType:(NSNumber *)arg0;
- (void)setPeerNATIP:(NSData *)arg0;
- (void)setPeerBlob:(NSData *)arg0;
- (NSString *)bagKey;
- (void)handleResponseDictionary:(NSDictionary *)arg0;
- (MFMessageBody *)messageBody;
- (NSArray *)requiredKeys;

@end
