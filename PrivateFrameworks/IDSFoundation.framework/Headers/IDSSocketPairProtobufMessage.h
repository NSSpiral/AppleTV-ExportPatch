/* Runtime dump - IDSSocketPairProtobufMessage
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairProtobufMessage : IDSSocketPairMessage
{
    unsigned int _payloadOffset;
    unsigned int _payloadLength;
    unsigned short _isResponse;
    unsigned short _type;
    NSData * _data;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    char _expectsPeerResponse;
    char _wantsAppAck;
    char _compressed;
    NSString * _peerResponseIdentifier;
    NSString * _messageUUID;
    NSDate * _expiryDate;
}

@property (readonly, nonatomic) unsigned short isResponse;
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) NSData * data;
@property (nonatomic) unsigned int sequenceNumber;
@property (readonly, nonatomic) unsigned short streamID;
@property (readonly, nonatomic) char expectsPeerResponse;
@property (readonly, nonatomic) char wantsAppAck;
@property (nonatomic) char compressed;
@property (readonly, retain, nonatomic) NSString * peerResponseIdentifier;
@property (readonly, retain, nonatomic) NSString * messageUUID;
@property (nonatomic) NSDate * expiryDate;

- (unsigned char)command;
- (void)dealloc;
- (unsigned short)type;
- (NSData *)data;
- (unsigned short)streamID;
- (unsigned short)isResponse;
- (void)setSequenceNumber:(unsigned int)arg0;
- (unsigned int)sequenceNumber;
- (char)wantsAppAck;
- (char)expectsPeerResponse;
- (IDSSocketPairProtobufMessage *)initWithCommand:(unsigned char)arg0 underlyingData:(NSData *)arg1;
- (NSData *)_nonHeaderData;
- (char)compressed;
- (void)setCompressed:(char)arg0;
- (NSString *)messageUUID;
- (NSString *)peerResponseIdentifier;
- (IDSSocketPairProtobufMessage *)initWithSequenceNumber:(unsigned int)arg0 streamID:(unsigned short)arg1 expectsPeerResponse:(char)arg2 wantsAppAck:(char)arg3 compressed:(char)arg4 peerResponseIdentifier:(NSString *)arg5 messageUUID:(NSString *)arg6 expiryDate:(NSDate *)arg7 protobuf:(NSDictionary *)arg8;
- (NSDate *)expiryDate;
- (void)setExpiryDate:(NSDate *)arg0;

@end
