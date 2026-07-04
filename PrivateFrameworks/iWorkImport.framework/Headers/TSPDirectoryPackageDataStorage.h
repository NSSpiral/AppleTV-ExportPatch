/* Runtime dump - TSPDirectoryPackageDataStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDirectoryPackageDataStorage : TSPFileDataStorage
{
    unsigned long long _cachedEncodedLength;
    NSString * _path;
    <TSPCryptoInfo> * _decryptionInfo;
    unsigned char _packageIdentifier;
    char _isMissingData;
    TSPDirectoryPackage * _package;
    char _gilligan_isRemote;
}

- (NSString *)packageLocator;
- (unsigned char)packageIdentifier;
- (void)performIOChannelReadWithAccessor:(TSCH3DScenePropertyAccessor *)arg0;
- (<TSPCryptoInfo> *)decryptionInfo;
- (char)isMissingData;
- (char)gilligan_isRemote;
- (char)copyToTemporaryURL:(NSURL *)arg0 encryptionInfo:(NSDictionary *)arg1;
- (void)setGilligan_isRemote:(char)arg0;
- (void)setIsMissingData:(char)arg0;
- (void)didInitializeFromDocumentURL:(NSURL *)arg0;
- (TSPDirectoryPackageDataStorage *)initWithPath:(NSString *)arg0 package:(TSPDirectoryPackage *)arg1 decryptionInfo:(<TSPCryptoInfo> *)arg2;
- (NSDictionary *)AVAssetWithOptions:(NSDictionary *)arg0 forData:(NSData *)arg1;
- (char)isInPackage:(char)arg0;
- (void)performReadWithAccessor:(TSCH3DScenePropertyAccessor *)arg0;
- (NSData *)writeData:(NSData *)arg0 toPackageWriter:(NSObject *)arg1 infoMessage:(struct DataInfo *)arg2 preferredFilename:(NSString *)arg3;
- (unsigned long long)length;
- (void).cxx_destruct;
- (unsigned long long)encodedLength;

@end
