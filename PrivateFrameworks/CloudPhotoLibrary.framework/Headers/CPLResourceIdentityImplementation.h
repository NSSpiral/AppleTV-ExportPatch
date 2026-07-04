/* Runtime dump - CPLResourceIdentityImplementation
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLResourceIdentityImplementation : CPLResourceIdentity

+ (NSObject *)identityFromStoredIdentity:(NSObject *)arg0;
+ (CPLResourceIdentityImplementation *)fileUTIForExtension:(id)arg0;
+ (NSData *)fingerPrintForData:(NSData *)arg0 typeIdentifier:(NSString *)arg1 error:(id *)arg2;
+ (CPLResourceIdentityImplementation *)_fingerPrintForFD:(int)arg0 typeIdentifier:(NSString *)arg1 error:(id *)arg2;
+ (NSString *)extensionForFileUTI:(NSString *)arg0;
+ (void)setMMCImplementationForPlatform:(id)arg0;
+ (CPLResourceIdentityImplementation *)fingerPrintForFD:(int)arg0 typeIdentifier:(NSString *)arg1 error:(id *)arg2;
+ (CPLResourceIdentityImplementation *)storageNameForFingerPrint:(id)arg0 fileUTI:(NSString *)arg1 bucket:(id *)arg2;
+ (NSString *)identityForStorageName:(NSString *)arg0;
+ (NSURL *)fingerPrintForFileAtURL:(NSURL *)arg0 typeIdentifier:(NSString *)arg1 error:(id *)arg2;

- (id)identityForStorage;

@end
