/* Runtime dump - IDSSocketPairResourceTransferSender
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairResourceTransferSender : IDSSocketPairMessage
{
    NSString * _resourcePath;
    NSDictionary * _metadata;
    NSDictionary * _resourceAttributes;
    char _sentFirstMessage;
    unsigned long long _totalBytes;
    unsigned long long _nextByte;
    char _done;
    int _fileDescriptor;
    unsigned int _maxChunkSize;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    char _expectsPeerResponse;
    char _wantsAppAck;
    char _compressed;
    NSString * _peerResponseIdentifier;
    NSString * _messageUUID;
}

@property (readonly, nonatomic) char sentFirstMessage;
@property (readonly, nonatomic) char isDone;
@property (nonatomic) unsigned int maxChunkSize;
@property (nonatomic) unsigned int sequenceNumber;
@property (readonly, retain, nonatomic) NSString * messageUUID;

- (unsigned char)command;
- (void)dealloc;
- (NSString *)description;
- (void)reset;
- (NSString *)nextMessage;
- (char)isDone;
- (void)setSequenceNumber:(unsigned int)arg0;
- (unsigned int)sequenceNumber;
- (NSString *)messageUUID;
- (NSData *)readNextBytes;
- (IDSSocketPairResourceTransferSender *)initWithResourceAtPath:(NSString *)arg0 metadata:(NSDictionary *)arg1 sequenceNumber:(unsigned int)arg2 streamID:(unsigned short)arg3 expectsPeerResponse:(char)arg4 wantsAppAck:(char)arg5 compressed:(char)arg6 peerResponseIdentifier:(NSString *)arg7 messageUUID:(NSString *)arg8;
- (char)sentFirstMessage;
- (unsigned int)maxChunkSize;
- (void)setMaxChunkSize:(unsigned int)arg0;

@end
