/* Runtime dump - IDSSocketPairEncryptedMessage
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairEncryptedMessage : IDSSocketPairMessage
{
    NSData * _data;
}

@property (readonly, retain, nonatomic) NSData * data;

- (unsigned char)command;
- (void)dealloc;
- (NSData *)data;
- (IDSSocketPairEncryptedMessage *)initWithData:(NSData *)arg0;
- (IDSSocketPairEncryptedMessage *)initWithCommand:(unsigned char)arg0 underlyingData:(NSData *)arg1;
- (NSData *)_nonHeaderData;

@end
