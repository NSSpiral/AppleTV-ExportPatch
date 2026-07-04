/* Runtime dump - TSPCryptoComponentWriteChannel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPCryptoComponentWriteChannel : NSObject <TSPComponentWriteChannel>
{
    <TSPComponentWriteChannel> * _writeChannel;
    <TSPMutableCryptoInfo> * _encryptionInfo;
    char * _buffer;
    struct _CCCryptor * _cryptor;
    struct ? _ccHmacContext;
    unsigned long _encodedBlockLength;
    unsigned long _decryptedBlockLength;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSPCryptoComponentWriteChannel *)initWithWriteChannel:(<TSPComponentWriteChannel> *)arg0 encryptionInfo:(<TSPMutableCryptoInfo> *)arg1;
- (char)_initializeBlock;
- (void)_writeData:(NSData *)arg0 isDecryptedData:(char)arg1;
- (char)_finalizeBlockForClosing:(char)arg0;
- (void)dealloc;
- (void)close;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)writeData:(NSData *)arg0;

@end
