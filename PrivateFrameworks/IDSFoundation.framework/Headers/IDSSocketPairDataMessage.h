/* Runtime dump - IDSSocketPairDataMessage
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairDataMessage : IDSSocketPairMessage
{
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    unsigned int _payloadOffset;
    unsigned int _payloadLength;
    NSData * _data;
    char _expectsPeerResponse;
    char _wantsAppAck;
    char _compressed;
    NSString * _peerResponseIdentifier;
    NSString * _messageUUID;
    NSDate * _expiryDate;
}

@property (nonatomic) unsigned int sequenceNumber;
@property (readonly, nonatomic) unsigned short streamID;
@property (readonly, retain, nonatomic) NSData * data;
@property (readonly, nonatomic) char expectsPeerResponse;
@property (readonly, nonatomic) char wantsAppAck;
@property (nonatomic) char compressed;
@property (readonly, retain, nonatomic) NSString * peerResponseIdentifier;
@property (readonly, retain, nonatomic) NSString * messageUUID;
@property (nonatomic) NSDate * expiryDate;

- (unsigned char)command;
- (void)dealloc;
- (NSData *)data;
- (unsigned short)streamID;
- (void)setSequenceNumber:(unsigned int)arg0;
- (unsigned int)sequenceNumber;
- (char)wantsAppAck;
- (char)expectsPeerResponse;
- (IDSSocketPairDataMessage *)initWithCommand:(unsigned char)arg0 underlyingData:(NSData *)arg1;
- (NSData *)_nonHeaderData;
- (IDSSocketPairDataMessage *)initWithSequenceNumber:(unsigned int)arg0 streamID:(unsigned short)arg1 expectsPeerResponse:(char)arg2 wantsAppAck:(char)arg3 compressed:(char)arg4 peerResponseIdentifier:(NSString *)arg5 messageUUID:(NSString *)arg6 data:(NSData *)arg7 expiryDate:(NSDate *)arg8;
- (char)compressed;
- (void)setCompressed:(char)arg0;
- (NSString *)messageUUID;
- (NSString *)peerResponseIdentifier;
- (NSDate *)expiryDate;
- (void)setExpiryDate:(NSDate *)arg0;

@end
