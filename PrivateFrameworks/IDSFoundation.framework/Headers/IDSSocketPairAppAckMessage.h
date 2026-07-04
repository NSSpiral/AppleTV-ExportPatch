/* Runtime dump - IDSSocketPairAppAckMessage
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairAppAckMessage : IDSSocketPairMessage
{
    unsigned int _offset;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    NSString * _peerResponseIdentifier;
}

@property (nonatomic) unsigned int sequenceNumber;
@property (readonly, nonatomic) unsigned short streamID;
@property (readonly, retain, nonatomic) NSString * peerResponseIdentifier;

- (unsigned char)command;
- (void)dealloc;
- (unsigned short)streamID;
- (void)setSequenceNumber:(unsigned int)arg0;
- (unsigned int)sequenceNumber;
- (IDSSocketPairAppAckMessage *)initWithCommand:(unsigned char)arg0 underlyingData:(NSData *)arg1;
- (NSData *)_nonHeaderData;
- (NSString *)peerResponseIdentifier;
- (IDSSocketPairAppAckMessage *)initWithSequenceNumber:(unsigned int)arg0 streamID:(unsigned short)arg1 peerResponseIdentifier:(NSString *)arg2;

@end
