/* Runtime dump - TSPTemporaryDataStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPTemporaryDataStorage : TSPFileDataStorage
{
    NSURL * _URL;
    <TSPCryptoInfo> * _decryptionInfo;
    char _isMissingData;
    char _gilligan_isRemote;
    char _isMissingOriginalData;
}

@property (nonatomic) char isMissingOriginalData;
@property (nonatomic) char isMissingData;

- (TSPTemporaryDataStorage *)initWithURL:(NSString *)arg0 decryptionInfo:(<TSPCryptoInfo> *)arg1;
- (void)performIOChannelReadWithAccessor:(TSCH3DScenePropertyAccessor *)arg0;
- (<TSPCryptoInfo> *)decryptionInfo;
- (char)isMissingData;
- (char)gilligan_isRemote;
- (void)setGilligan_isRemote:(char)arg0;
- (void)setIsMissingOriginalData:(char)arg0;
- (void)setIsMissingData:(char)arg0;
- (void)performReadWithAccessor:(TSCH3DScenePropertyAccessor *)arg0;
- (NSData *)writeData:(NSData *)arg0 toPackageWriter:(NSObject *)arg1 infoMessage:(struct DataInfo *)arg2 preferredFilename:(NSString *)arg3;
- (char)isMissingOriginalData;
- (void)dealloc;
- (unsigned long long)length;
- (void).cxx_destruct;

@end
