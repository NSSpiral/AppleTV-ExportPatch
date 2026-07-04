/* Runtime dump - TSPPackageConverter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageConverter : NSObject
{
    <TSPFileCoordinatorDelegate> * _fileCoordinatorDelegate;
    char _isCancelled;
    TSPPackage * _package;
    NSURL * _URL;
}

@property (readonly, nonatomic) int packageType;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) char isPasswordProtected;
@property (readonly, nonatomic) TSPPackage * package;
@property (readonly, nonatomic) NSURL * URL;
@property (readonly, nonatomic) char isCancelled;

+ (NSURL *)newPackageConverterWithURL:(NSString *)arg0;
+ (char)convertDocumentAtURL:(NSURL *)arg0 toPackageType:(int)arg1 error:(id *)arg2;

- (char)isPasswordProtected;
- (int)packageType;
- (char)checkPassword:(NSString *)arg0;
- (char)writeToURL:(NSURL *)arg0 packageType:(int)arg1 error:(id *)arg2;
- (TSPPackageConverter *)initWithURL:(NSString *)arg0 package:(TSPPackage *)arg1 fileCoordinatorDelegate:(<TSPFileCoordinatorDelegate> *)arg2;
- (unsigned long long)progressTotalUnitCountWithZipArchive:(NSString *)arg0;
- (NSString *)newWriteChannelAtPath:(NSString *)arg0 size:(unsigned long long)arg1 CRC:(unsigned int)arg2 packageWriter:(NSObject *)arg3 error:(id *)arg4;
- (char)enumeratePackageEntriesWithZipArchive:(NSString *)arg0 accessor:(TSCH3DScenePropertyAccessor *)arg1;
- (char)isDocumentPropertiesPath:(NSString *)arg0;
- (char)isObjectArchivePath:(NSString *)arg0;
- (TSPPackageConverter *)init;
- (char)isValid;
- (char)isCancelled;
- (NSURL *)URL;
- (void).cxx_destruct;
- (TSPPackage *)package;

@end
