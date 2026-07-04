/* Runtime dump - TSPReadOnlyMemoryDataStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPReadOnlyMemoryDataStorage : NSObject <TSPDataStorage>
{
    NSData * _NSData;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSString * documentResourceLocator;
@property (readonly, nonatomic) NSString * packageLocator;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) char isReadable;
@property (readonly, nonatomic) char isMissingData;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) unsigned long long encodedLength;
@property (readonly, nonatomic) char readOnly;
@property (readonly, nonatomic) char needsDownload;
@property (nonatomic) char gilligan_isRemote;
@property (readonly, nonatomic) <TSPCryptoInfo> * decryptionInfo;
@property (readonly, nonatomic) unsigned int CRC;

- (NSString *)packageLocator;
- (unsigned char)packageIdentifier;
- (TSPReadOnlyMemoryDataStorage *)initWithNSData:(NSData *)arg0;
- (void)performIOChannelReadWithAccessor:(TSCH3DScenePropertyAccessor *)arg0;
- (char)isMissingData;
- (NSString *)filenameForPreferredFilename:(NSString *)arg0;
- (NSDictionary *)bookmarkDataWithOptions:(unsigned int)arg0;
- (NSDictionary *)NSDataWithOptions:(unsigned int)arg0;
- (struct CGDataProvider *)newCGDataProvider;
- (struct CGImageSource *)newCGImageSource;
- (NSDictionary *)AVAssetWithOptions:(NSDictionary *)arg0 forData:(NSData *)arg1;
- (NSString *)documentResourceLocator;
- (char)isInPackage:(char)arg0;
- (void)archiveInfoMessage:(struct DataInfo *)arg0 archiver:(NSObject *)arg1;
- (NSData *)writeData:(NSData *)arg0 toPackageWriter:(NSObject *)arg1 infoMessage:(struct DataInfo *)arg2 preferredFilename:(NSString *)arg3;
- (unsigned long long)length;
- (char)readOnly;
- (void).cxx_destruct;
- (char)isReadable;
- (unsigned long long)encodedLength;

@end
