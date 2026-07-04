/* Runtime dump - TSPCryptoTranscodeReadChannel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPCryptoTranscodeReadChannel : NSObject <TSUStreamReadChannel>
{
    <TSUStreamReadChannel> * _readChannel;
    <TSPMutableCryptoInfo> * _encryptionInfo;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)readWithHandler:(id /* block */)arg0;
- (TSPCryptoTranscodeReadChannel *)initWithReadChannel:(<TSUStreamReadChannel> *)arg0 decryptionInfo:(<TSPCryptoInfo> *)arg1 encryptionInfo:(<TSPMutableCryptoInfo> *)arg2;
- (void)close;
- (void).cxx_destruct;

@end
