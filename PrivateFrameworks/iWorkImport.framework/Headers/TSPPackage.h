/* Runtime dump - TSPPackage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackage : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    TSPDocumentProperties * _documentProperties;
    TSUZipFileArchive * _zipArchive;
    NSError * _lastReloadError;
    NSHashTable * _packageDatas;
    <TSPFileCoordinatorDelegate> * _fileCoordinatorDelegate;
    struct ? _flags;
    unsigned char _packageIdentifier;
    char _isClosed;
    SFUCryptoKey * _decryptionKey;
    unsigned long long _fileFormatVersion;
}

@property (readonly, nonatomic) int packageType;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, weak, nonatomic) <TSPFileCoordinatorDelegate> * fileCoordinatorDelegate;
@property (readonly, nonatomic) TSPDocumentProperties * documentProperties;
@property (readonly, nonatomic) SFUCryptoKey * decryptionKey;
@property (readonly, nonatomic) char isClosed;
@property (readonly, nonatomic) unsigned long long fileFormatVersion;
@property (retain) TSUZipFileArchive * zipArchive;
@property (readonly) NSError * lastReloadError;
@property (readonly) TSUZipFileArchive * componentZipArchive;
@property (readonly, nonatomic) char isPasswordProtected;
@property (readonly, nonatomic) NSString * passwordHint;
@property (readonly, nonatomic) NSData * passwordVerifier;

+ (char)isValidPackageAtURL:(NSURL *)arg0;
+ (NSURL *)newPackageWithURL:(NSString *)arg0 packageIdentifier:(unsigned char)arg1 decryptionKey:(SFUCryptoKey *)arg2 fileCoordinatorDelegate:(<TSPFileCoordinatorDelegate> *)arg3 error:(id *)arg4;
+ (NSString *)dataEntryPathForFilename:(NSString *)arg0;
+ (NSURL *)zipArchiveURLFromPackageURL:(NSURL *)arg0;
+ (unsigned int)zipArchiveOptions;
+ (NSURL *)newLazyPackageWithURL:(NSString *)arg0 packageIdentifier:(unsigned char)arg1 decryptionKey:(SFUCryptoKey *)arg2 fileCoordinatorDelegate:(<TSPFileCoordinatorDelegate> *)arg3;
+ (TSPPackage *)objectArchiveEntryPathForPackageLocator:(id)arg0;

- (TSPDocumentProperties *)documentProperties;
- (NSString *)passwordHint;
- (char)isPasswordProtected;
- (NSData *)passwordVerifier;
- (void)didRetrieveDecryptionKey:(NSString *)arg0;
- (void)didCloseDocument;
- (int)packageType;
- (unsigned long long)fileFormatVersion;
- (SFUCryptoKey *)decryptionKey;
- (void)enumerateDatasUsingBlock:(id /* block */)arg0;
- (unsigned char)packageIdentifier;
- (char)containsData:(NSData *)arg0;
- (NSString *)dataAtRelativePath:(NSString *)arg0 allowDecryption:(char)arg1 error:(id *)arg2;
- (char)checkPassword:(NSString *)arg0;
- (NSString *)keyFromPassword:(NSString *)arg0;
- (void)prepareForDocumentReplacementWithSuccess:(char)arg0 forSafeSave:(char)arg1 originalURL:(NSURL *)arg2;
- (NSString *)newDataStorageAtRelativePath:(NSString *)arg0 decryptionInfo:(<TSPCryptoInfo> *)arg1;
- (void)didReferenceData:(NSData *)arg0;
- (<TSPFileCoordinatorDelegate> *)fileCoordinatorDelegate;
- (unsigned long long)encodedLengthForComponentLocator:(id)arg0 isStoredOutsideObjectArchive:(char)arg1;
- (id)newRawReadChannelForComponent:(id)arg0;
- (void)copyComponent:(id)arg0 toPackageURL:(NSURL *)arg1 packageLocator:(NSString *)arg2 zipFileWriter:(NSObject *)arg3 encryptionKey:(SFUCryptoKey *)arg4 completion:(id /* block */)arg5;
- (TSUZipFileArchive *)zipArchive;
- (NSString *)newRawDataReadChannelAtRelativePath:(NSString *)arg0;
- (char)hasDataAtRelativePath:(NSString *)arg0;
- (NSURL *)newDocumentPropertiesWithURL:(NSString *)arg0 zipProvider:(NSObject *)arg1 error:(/* block */ id)arg2;
- (TSPPackage *)initWithPackageIdentifier:(unsigned char)arg0 documentProperties:(TSPDocumentProperties *)arg1 fileFormatVersion:(unsigned long long)arg2 decryptionKey:(SFUCryptoKey *)arg3 fileCoordinatorDelegate:(<TSPFileCoordinatorDelegate> *)arg4 isLazyLoading:(char)arg5;
- (TSUZipFileArchive *)componentZipArchive;
- (NSError *)lastReloadError;
- (id)newReadChannelForComponent:(id)arg0;
- (void)didReadFileFormatVersion:(unsigned long long)arg0;
- (void)setZipArchive:(TSUZipFileArchive *)arg0;
- (char)didReloadZipArchive:(id)arg0 error:(id *)arg1;
- (void)peformSynchronousAccessToZipArchive:(id)arg0;
- (TSPPackage *)initWithURL:(NSString *)arg0 zipArchiveOrNil:(id)arg1 packageIdentifier:(unsigned char)arg2 documentProperties:(TSPDocumentProperties *)arg3 decryptionKey:(SFUCryptoKey *)arg4 fileCoordinatorDelegate:(<TSPFileCoordinatorDelegate> *)arg5 error:(id *)arg6;
- (NSURL *)newZipArchiveFromPackageURL:(NSURL *)arg0 isLazyLoading:(char)arg1 error:(id *)arg2;
- (char)reloadZipArchiveIfNeededWithURLImpl:(NSString *)arg0 isLazyLoading:(char)arg1 error:(id *)arg2;
- (NSString *)keyFromPassword:(NSString *)arg0 passwordVerifier:(NSData *)arg1;
- (TSPPackage *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (char)isClosed;

@end
