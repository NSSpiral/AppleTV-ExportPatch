/* Runtime dump - IDSSocketPairResourceTransferReceiver
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairResourceTransferReceiver : NSObject
{
    NSString * _resourcePath;
    NSDictionary * _metadata;
    int _fileDescriptor;
    unsigned long long _totalBytesExpected;
    unsigned long long _totalBytesReceived;
    char _done;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    char _expectsPeerResponse;
    char _wantsAppAck;
    char _compressed;
    NSString * _peerResponseIdentifier;
    NSString * _messageUUID;
}

@property (readonly, nonatomic) unsigned long long totalBytesReceived;

- (void)dealloc;
- (unsigned long long)totalBytesReceived;
- (char)writeResourceData:(NSData *)arg0;
- (void)abortTransfer;
- (char)appendMessage:(NSString *)arg0;
- (id)finalizedMessageDictionaryIfDone;
- (IDSSocketPairResourceTransferReceiver *)initWithMessage:(NSString *)arg0;

@end
