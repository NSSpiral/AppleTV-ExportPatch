/* Runtime dump - CPLResourceIdentity
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLResourceIdentity : NSObject <NSSecureCoding, NSCopying>
{
    char _available;
    NSURL * _fileURL;
    NSString * _fingerPrint;
    unsigned int _fileSize;
    NSString * _fileUTI;
    struct CGSize _imageDimensions;
}

@property (copy, nonatomic) NSURL * fileURL;
@property (copy, nonatomic) NSString * fingerPrint;
@property (nonatomic) unsigned int fileSize;
@property (nonatomic) struct CGSize imageDimensions;
@property (nonatomic) char available;
@property (copy, nonatomic) NSString * fileUTI;

+ (CPLResourceIdentity *)alloc;
+ (CPLResourceIdentity *)allocWithZone:(struct _NSZone *)arg0;
+ (char)supportsSecureCoding;
+ (NSObject *)identityFromStoredIdentity:(NSObject *)arg0;
+ (CPLResourceIdentity *)fileUTIForExtension:(id)arg0;
+ (NSData *)fingerPrintForData:(NSData *)arg0 typeIdentifier:(NSString *)arg1 error:(id *)arg2;
+ (NSString *)extensionForFileUTI:(NSString *)arg0;
+ (CPLResourceIdentity *)fingerPrintForFD:(int)arg0 typeIdentifier:(NSString *)arg1 error:(id *)arg2;
+ (CPLResourceIdentity *)storageNameForFingerPrint:(id)arg0 fileUTI:(NSString *)arg1 bucket:(id *)arg2;
+ (NSString *)identityForStorageName:(NSString *)arg0;
+ (Class)_identityImplementationClass;
+ (void)setResourceIdentityImplementation:(Class)arg0;
+ (Class)resourceIdentityImplementation;
+ (NSURL *)fingerPrintForFileAtURL:(NSURL *)arg0 typeIdentifier:(NSString *)arg1 error:(id *)arg2;

- (CPLResourceIdentity *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CPLResourceIdentity *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSURL *)fileURL;
- (CPLResourceIdentity *)initWithFileURL:(NSURL *)arg0;
- (id)identityForStorage;
- (NSString *)fingerPrint;
- (NSString *)fileUTI;
- (unsigned int)fileSize;
- (char)isAvailable;
- (void)setFileSize:(unsigned int)arg0;
- (struct CGSize)imageDimensions;
- (void)setImageDimensions:(struct CGSize)arg0;
- (void)setAvailable:(char)arg0;
- (void)setFileUTI:(NSString *)arg0;
- (void)setFingerPrint:(NSString *)arg0;
- (void)setFileURL:(NSURL *)arg0;

@end
