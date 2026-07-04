/* Runtime dump - IDSSocketPairAckMessage
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairAckMessage : IDSSocketPairMessage
{
    unsigned int _sequenceNumber;
}

@property (readonly, nonatomic) unsigned int sequenceNumber;

- (unsigned char)command;
- (unsigned int)sequenceNumber;
- (IDSSocketPairAckMessage *)initWithCommand:(unsigned char)arg0 underlyingData:(NSData *)arg1;
- (NSData *)_nonHeaderData;
- (IDSSocketPairAckMessage *)initWithSequenceNumber:(unsigned int)arg0;

@end
