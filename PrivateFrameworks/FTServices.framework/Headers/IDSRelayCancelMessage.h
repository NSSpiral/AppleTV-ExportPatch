/* Runtime dump - IDSRelayCancelMessage
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface IDSRelayCancelMessage : IDSFaceTimeMessage <NSCopying>
{
    NSString * _peerID;
    NSData * _peerPushToken;
    NSNumber * _relayType;
    NSNumber * _reason;
    NSData * _relayConnectionID;
    NSData * _selfRelayIP;
    NSNumber * _selfRelayPort;
    NSData * _peerRelayIP;
    NSNumber * _peerRelayPort;
}

@property (copy) NSString * peerID;
@property (copy) NSData * peerPushToken;
@property (copy) NSNumber * relayType;
@property (copy) NSNumber * reason;
@property (copy) NSData * relayConnectionID;
@property (copy) NSData * selfRelayIP;
@property (copy) NSNumber * selfRelayPort;
@property (copy) NSData * peerRelayIP;
@property (copy) NSNumber * peerRelayPort;

- (NSString *)peerID;
- (void)setPeerID:(NSString *)arg0;
- (void)dealloc;
- (NSNumber *)reason;
- (IDSRelayCancelMessage *)copyWithZone:(struct _NSZone *)arg0;
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
- (NSData *)peerPushToken;
- (void)setPeerPushToken:(NSData *)arg0;
- (NSString *)bagKey;
- (MFMessageBody *)messageBody;
- (void)setReason:(NSNumber *)arg0;
- (NSArray *)requiredKeys;

@end
