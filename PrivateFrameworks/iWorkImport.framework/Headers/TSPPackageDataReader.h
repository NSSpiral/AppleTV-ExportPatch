/* Runtime dump - TSPPackageDataReader
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageDataReader : NSObject <TSPFileCoordinatorDelegate>
{
    NSURL * _URL;
    TSPPackage * _package;
}

@property (readonly, nonatomic) int packageType;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) TSPDocumentProperties * documentProperties;
@property (readonly, nonatomic) char isPasswordProtected;
@property (readonly, nonatomic) NSString * passwordHint;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSPDocumentProperties *)documentProperties;
- (NSString *)passwordHint;
- (char)isPasswordProtected;
- (int)packageType;
- (char)checkPassword:(NSString *)arg0;
- (void)performReadUsingAccessor:(NSObject *)arg0;
- (char)hasDataAtRelativePath:(NSString *)arg0;
- (struct CGImageSource *)newCGImageSourceAtRelativePath:(NSString *)arg0;
- (TSPPackageDataReader *)initWithURL:(NSString *)arg0 decryptionKey:(SFUCryptoKey *)arg1;
- (struct CGDataProvider *)newCGDataProviderAtRelativePath:(NSString *)arg0;
- (struct CGImage *)newCGImageAtRelativePath:(NSString *)arg0;
- (TSPPackageDataReader *)init;
- (char)isValid;
- (void).cxx_destruct;

@end
