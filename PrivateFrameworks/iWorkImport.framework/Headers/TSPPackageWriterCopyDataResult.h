/* Runtime dump - TSPPackageWriterCopyDataResult
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageWriterCopyDataResult : NSObject
{
    NSString * _filename;
    <TSPCryptoInfo> * _encryptionInfo;
}

@property (readonly, nonatomic) NSString * filename;
@property (readonly, nonatomic) <TSPCryptoInfo> * encryptionInfo;

- (TSPPackageWriterCopyDataResult *)initWithFilename:(NSString *)arg0 encryptionInfo:(<TSPCryptoInfo> *)arg1;
- (void).cxx_destruct;
- (NSString *)filename;
- (<TSPCryptoInfo> *)encryptionInfo;

@end
