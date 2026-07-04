/* Runtime dump - IDSSocketPairOTREncryptedMessage
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairOTREncryptedMessage : IDSSocketPairMessage
{
    unsigned int _offset;
    unsigned char _versionNumber;
    char _encrypted;
    char _fileXfer;
    unsigned short _streamID;
    unsigned short _priority;
    unsigned int _sequenceNumber;
    NSData * _data;
}

@property (readonly, nonatomic) unsigned char versionNumber;
@property (readonly, nonatomic) char encrypted;
@property (readonly, nonatomic) unsigned short streamID;
@property (readonly, nonatomic) unsigned short priority;
@property (readonly, nonatomic) unsigned int sequenceNumber;
@property (readonly, nonatomic) char fileXfer;
@property (readonly, retain, nonatomic) NSData * data;

- (unsigned char)versionNumber;
- (unsigned char)command;
- (void)dealloc;
- (NSData *)data;
- (unsigned short)priority;
- (char)encrypted;
- (unsigned short)streamID;
- (unsigned int)sequenceNumber;
- (IDSSocketPairOTREncryptedMessage *)initWithCommand:(unsigned char)arg0 underlyingData:(NSData *)arg1;
- (NSData *)_nonHeaderData;
- (IDSSocketPairOTREncryptedMessage *)initWithVersion:(unsigned char)arg0 encrypted:(char)arg1 streamID:(unsigned short)arg2 priority:(unsigned short)arg3 sequenceNumber:(unsigned int)arg4 fileXfer:(char)arg5 data:(NSData *)arg6;
- (char)fileXfer;

@end
