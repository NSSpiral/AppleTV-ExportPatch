/* Runtime dump - TSPCryptoReadChannel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPCryptoReadChannel : NSObject <TSUStreamReadChannel>
{
    <TSUStreamReadChannel> * _readChannel;
    SFUCryptoKey * _decryptionKey;
    NSArray * _blockInfos;
    NSObject<OS_dispatch_data> * _holdData;
    char * _iv;
    unsigned long _ivRead;
    struct _CCCryptor * _cryptor;
    unsigned long _initialBytesIgnored;
    unsigned long _remainingBlockSize;
    unsigned int _nextBlockIndex;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)readWithHandler:(id /* block */)arg0;
- (TSPCryptoReadChannel *)initWithReadChannel:(<TSUStreamReadChannel> *)arg0 decryptionKey:(SFUCryptoKey *)arg1 blockInfos:(NSArray *)arg2;
- (void)_readBlocksWithHandler:(id /* block */)arg0;
- (void)_resetCryptor;
- (void)dealloc;
- (void)close;
- (void).cxx_destruct;

@end
