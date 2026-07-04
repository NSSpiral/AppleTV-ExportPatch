/* Runtime dump - TSPDataStorageWriteResult
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataStorageWriteResult : NSObject
{
    char _didCopyDataToPackage;
    char _isMissingData;
    NSString * _filename;
    <TSPCryptoInfo> * _encryptionInfo;
}

@property (readonly, nonatomic) NSString * filename;
@property (readonly, nonatomic) <TSPCryptoInfo> * encryptionInfo;
@property (readonly, nonatomic) char didCopyDataToPackage;
@property (readonly, nonatomic) char isMissingData;

- (char)isMissingData;
- (TSPDataStorageWriteResult *)initWithFilename:(NSString *)arg0 encryptionInfo:(<TSPCryptoInfo> *)arg1 didCopyDataToPackage:(char)arg2 isMissingData:(char)arg3;
- (char)didCopyDataToPackage;
- (void).cxx_destruct;
- (NSString *)filename;
- (<TSPCryptoInfo> *)encryptionInfo;

@end
