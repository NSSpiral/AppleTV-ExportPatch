/* Runtime dump - TSPFilePackageDataStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPFilePackageDataStorage : TSPStreamDataStorage
{
    NSString * _path;
    <TSPCryptoInfo> * _decryptionInfo;
    TSPFilePackage * _package;
    unsigned long long _encodedLength;
    unsigned int _CRC;
    struct ? _flags;
}

- (unsigned int)CRC;
- (NSString *)packageLocator;
- (unsigned char)packageIdentifier;
- (void)performIOChannelReadWithAccessor:(TSCH3DScenePropertyAccessor *)arg0;
- (<TSPCryptoInfo> *)decryptionInfo;
- (char)isMissingData;
- (char)copyToTemporaryURL:(NSURL *)arg0 encryptionInfo:(NSDictionary *)arg1;
- (void)setIsMissingData:(char)arg0;
- (void)didInitializeFromDocumentURL:(NSURL *)arg0;
- (TSPFilePackageDataStorage *)initWithPath:(NSString *)arg0 package:(TSPFilePackage *)arg1 decryptionInfo:(<TSPCryptoInfo> *)arg2;
- (NSDictionary *)bookmarkDataWithOptions:(unsigned int)arg0;
- (char)bookmarkDataNeedsWriteWithOptions:(unsigned int)arg0;
- (char)isInPackage:(char)arg0;
- (NSData *)writeData:(NSData *)arg0 toPackageWriter:(NSObject *)arg1 infoMessage:(struct DataInfo *)arg2 preferredFilename:(NSString *)arg3;
- (<TSUStreamReadChannel> *)streamReadChannel;
- (unsigned long long)length;
- (void).cxx_construct;
- (void).cxx_destruct;
- (char)isReadable;
- (unsigned long long)encodedLength;
- (void)resetFlags;

@end
