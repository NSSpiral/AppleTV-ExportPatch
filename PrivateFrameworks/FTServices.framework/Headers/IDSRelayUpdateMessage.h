/* Runtime dump - IDSRelayUpdateMessage
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface IDSRelayUpdateMessage : IDSFaceTimeMessage <NSCopying>
{
    NSData * _selfPushToken;
    NSData * _selfRelayBlob;
    NSString * _peerID;
    NSData * _peerPushToken;
    NSNumber * _relayType;
    NSData * _relayConnectionID;
    NSData * _relayTransactionIDAlloc;
    NSData * _relayTokenAllocRes;
    NSData * _selfRelayIP;
    NSNumber * _selfRelayPort;
    NSData * _selfRelayNATIP;
    NSNumber * _selfRelayNATPort;
    NSData * _peerRelayIP;
    NSNumber * _peerRelayPort;
}

@property (copy) NSData * selfPushToken;
@property (copy) NSData * selfRelayBlob;
@property (copy) NSString * peerID;
@property (copy) NSData * peerPushToken;
@property (copy) NSNumber * relayType;
@property (copy) NSData * relayConnectionID;
@property (copy) NSData * relayTransactionIDAlloc;
@property (copy) NSData * relayTokenAllocRes;
@property (copy) NSData * selfRelayIP;
@property (copy) NSNumber * selfRelayPort;
@property (copy) NSData * selfRelayNATIP;
@property (copy) NSNumber * selfRelayNATPort;
@property (copy) NSData * peerRelayIP;
@property (copy) NSNumber * peerRelayPort;

- (NSString *)peerID;
- (void)setPeerID:(NSString *)arg0;
- (void)dealloc;
- (IDSRelayUpdateMessage *)copyWithZone:(struct _NSZone *)arg0;
- (NSNumber *)relayType;
- (NSData *)relayConnectionID;
- (NSData *)selfRelayIP;
- (NSNumber *)selfRelayPort;
- (NSData *)peerRelayIP;
- (NSNumber *)peerRelayPort;
- (void)setRelayType:(NSNumber *)arg0;
- (void)setRelayConnectionID:(NSData *)arg0;
- (void)setSelfRelayIP:(NSData *)arg0;
- (void)setSelfRelayPort:(NSNumber *)arg0;
- (void)setPeerRelayIP:(NSData *)arg0;
- (void)setPeerRelayPort:(NSNumber *)arg0;
- (NSData *)selfPushToken;
- (NSData *)relayTransactionIDAlloc;
- (NSData *)relayTokenAllocRes;
- (NSData *)selfRelayNATIP;
- (NSNumber *)selfRelayNATPort;
- (NSData *)selfRelayBlob;
- (void)setSelfPushToken:(NSData *)arg0;
- (void)setSelfRelayBlob:(NSData *)arg0;
- (void)setRelayTransactionIDAlloc:(NSData *)arg0;
- (void)setRelayTokenAllocRes:(NSData *)arg0;
- (void)setSelfRelayNATIP:(NSData *)arg0;
- (void)setSelfRelayNATPort:(NSNumber *)arg0;
- (NSData *)peerPushToken;
- (void)setPeerPushToken:(NSData *)arg0;
- (NSString *)bagKey;
- (MFMessageBody *)messageBody;
- (NSArray *)requiredKeys;

@end
