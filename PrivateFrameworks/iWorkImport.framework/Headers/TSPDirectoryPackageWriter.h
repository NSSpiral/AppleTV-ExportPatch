/* Runtime dump - TSPDirectoryPackageWriter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDirectoryPackageWriter : TSPPackageWriter
{
    NSObject<OS_dispatch_queue> * _componentFileIOQueue;
    TSPDirectoryPackageDataWriter * _dataWriter;
}

- (char)writeData:(NSData *)arg0 toRelativePath:(NSString *)arg1 allowEncryption:(char)arg2 error:(id *)arg3;
- (TSPDirectoryPackageWriter *)initWithURL:(NSString *)arg0 documentTargetURL:(NSURL *)arg1 relativeURLForExternalData:(NSURL *)arg2 packageIdentifier:(unsigned char)arg3 documentProperties:(TSPDocumentProperties *)arg4 fileFormatVersion:(unsigned long long)arg5 updateType:(int)arg6 encryptionKey:(SFUCryptoKey *)arg7 originalDocumentPackage:(TSPPackage *)arg8 originalSuppportPackage:(id)arg9 fileCoordinatorDelegate:(<TSPFileCoordinatorDelegate> *)arg10 progress:(NSProgress *)arg11 error:(id *)arg12;
- (unsigned long long)encodedLengthForComponentLocator:(id)arg0 isStoredOutsideObjectArchive:(char)arg1 packageURL:(NSURL *)arg2;
- (id)newRawComponentWriteChannelWithPackageLocator:(NSString *)arg0 storeOutsideObjectArchive:(char)arg1;
- (NSString *)targetDataURLForPath:(NSString *)arg0;
- (struct CGDataConsumer *)newCGDataConsumerAtRelativePath:(NSString *)arg0;
- (NSData *)linkOrCopyData:(NSData *)arg0 fromURL:(NSURL *)arg1 decryptionInfo:(<TSPCryptoInfo> *)arg2 preferredFilename:(NSString *)arg3 error:(id *)arg4;
- (NSString *)newPackageWithPackageIdentifier:(unsigned char)arg0 documentProperties:(TSPDocumentProperties *)arg1 fileFormatVersion:(unsigned long long)arg2 decryptionKey:(SFUCryptoKey *)arg3 fileCoordinatorDelegate:(<TSPFileCoordinatorDelegate> *)arg4;
- (NSString *)newRawDataWriteChannelForRelativePath:(NSString *)arg0 originalSize:(unsigned long long)arg1 originalCRC:(unsigned int)arg2;
- (void).cxx_destruct;

@end
