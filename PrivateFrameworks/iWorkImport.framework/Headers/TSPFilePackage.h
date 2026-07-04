/* Runtime dump - TSPFilePackage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPFilePackage : TSPPackage
{
    NSObject<OS_dispatch_queue> * _bookmarkDataQueue;
    TSUTemporaryDirectory * _dataDirectory;
    NSMutableDictionary * _dataURLMap;
    TSUZipArchive * _componentZipArchive;
}

+ (char)isValidPackageAtURL:(NSURL *)arg0;
+ (NSURL *)zipArchiveURLFromPackageURL:(NSURL *)arg0;
+ (unsigned int)zipArchiveOptions;
+ (char)isValidPackageAtZipArchive:(id)arg0;

- (int)packageType;
- (void)prepareForDocumentReplacementWithSuccess:(char)arg0 forSafeSave:(char)arg1 originalURL:(NSURL *)arg2;
- (NSString *)newDataStorageAtRelativePath:(NSString *)arg0 decryptionInfo:(<TSPCryptoInfo> *)arg1;
- (NSString *)newRawDataReadChannelAtRelativePath:(NSString *)arg0;
- (char)hasDataAtRelativePath:(NSString *)arg0;
- (NSURL *)newDocumentPropertiesWithURL:(NSString *)arg0 zipProvider:(NSObject *)arg1 error:(/* block */ id)arg2;
- (TSPFilePackage *)initWithPackageIdentifier:(unsigned char)arg0 documentProperties:(TSPDocumentProperties *)arg1 fileFormatVersion:(unsigned long long)arg2 decryptionKey:(SFUCryptoKey *)arg3 fileCoordinatorDelegate:(<TSPFileCoordinatorDelegate> *)arg4 isLazyLoading:(char)arg5;
- (TSUZipArchive *)componentZipArchive;
- (char)didReloadZipArchive:(id)arg0 error:(id *)arg1;
- (id)bookmarkDataForDataStorage:(id)arg0 options:(unsigned int)arg1;
- (char)bookmarkDataNeedsWriteForDataStorage:(id)arg0 options:(unsigned int)arg1;
- (void).cxx_destruct;

@end
