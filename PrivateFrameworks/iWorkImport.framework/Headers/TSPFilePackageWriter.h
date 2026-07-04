/* Runtime dump - TSPFilePackageWriter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPFilePackageWriter : TSPPackageWriter

- (NSString *)newPackageWithPackageIdentifier:(unsigned char)arg0 documentProperties:(TSPDocumentProperties *)arg1 fileFormatVersion:(unsigned long long)arg2 decryptionKey:(SFUCryptoKey *)arg3 fileCoordinatorDelegate:(<TSPFileCoordinatorDelegate> *)arg4;
- (NSString *)newRawDataWriteChannelForRelativePath:(NSString *)arg0 originalSize:(unsigned long long)arg1 originalCRC:(unsigned int)arg2;

@end
