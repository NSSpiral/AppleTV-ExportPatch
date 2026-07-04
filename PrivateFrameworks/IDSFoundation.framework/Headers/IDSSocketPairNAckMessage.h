/* Runtime dump - IDSSocketPairNAckMessage
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairNAckMessage : IDSSocketPairMessage
{
    unsigned int _offset;
    unsigned int _sequenceNumber;
    char _fileXfer;
    unsigned short _streamID;
    unsigned short _priority;
}

@property (readonly, nonatomic) unsigned int sequenceNumber;
@property (readonly, nonatomic) char fileXfer;
@property (readonly, nonatomic) unsigned short streamID;
@property (readonly, nonatomic) unsigned short priority;

- (unsigned char)command;
- (unsigned short)priority;
- (unsigned short)streamID;
- (unsigned int)sequenceNumber;
- (IDSSocketPairNAckMessage *)initWithCommand:(unsigned char)arg0 underlyingData:(NSData *)arg1;
- (NSData *)_nonHeaderData;
- (char)fileXfer;
- (IDSSocketPairNAckMessage *)initWithSequenceNumber:(unsigned int)arg0 streamID:(unsigned short)arg1 priority:(unsigned short)arg2 fileXfer:(char)arg3;

@end
