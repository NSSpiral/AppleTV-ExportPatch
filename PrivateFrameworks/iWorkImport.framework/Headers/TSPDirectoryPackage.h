/* Runtime dump - TSPDirectoryPackage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDirectoryPackage : TSPPackage

+ (char)isValidPackageAtURL:(NSURL *)arg0;
+ (NSURL *)objectArchiveURLForPackageURL:(NSURL *)arg0;
+ (NSURL *)componentFileURLForPackageURL:(NSURL *)arg0 packageLocator:(NSString *)arg1;
+ (NSURL *)zipArchiveURLFromPackageURL:(NSURL *)arg0;
+ (unsigned int)zipArchiveOptions;

- (int)packageType;
- (NSString *)dataAtRelativePath:(NSString *)arg0 allowDecryption:(char)arg1 error:(id *)arg2;
- (void)prepareForDocumentReplacementWithSuccess:(char)arg0 forSafeSave:(char)arg1 originalURL:(NSURL *)arg2;
- (NSString *)newDataStorageAtRelativePath:(NSString *)arg0 decryptionInfo:(<TSPCryptoInfo> *)arg1;
- (unsigned long long)encodedLengthForComponentLocator:(id)arg0 isStoredOutsideObjectArchive:(char)arg1;
- (id)newRawReadChannelForComponent:(id)arg0;
- (void)copyComponent:(id)arg0 toPackageURL:(NSURL *)arg1 packageLocator:(NSString *)arg2 zipFileWriter:(NSObject *)arg3 encryptionKey:(SFUCryptoKey *)arg4 completion:(id /* block */)arg5;
- (NSString *)newRawDataReadChannelAtRelativePath:(NSString *)arg0;
- (char)hasDataAtRelativePath:(NSString *)arg0;
- (NSURL *)newDocumentPropertiesWithURL:(NSString *)arg0 zipProvider:(NSObject *)arg1 error:(/* block */ id)arg2;

@end
