/* Runtime dump - TSPPackageWriter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageWriter : NSObject <TSPPackageDataWriter>
{
    TSPPackage * _originalDocumentPackage;
    TSPPackage * _originalSupportPackage;
    <TSPComponentWriteChannel> * _componentWriteChannel;
    NSObject<OS_dispatch_queue> * _errorQueue;
    NSError * _error;
    TSPPackage * _writtenPackage;
    char _isOpened;
    NSURL * _URL;
    NSURL * _documentTargetURL;
    NSURL * _relativeURLForExternalData;
    int _updateType;
    SFUCryptoKey * _encryptionKey;
    TSUZipFileWriter * _zipArchiveWriter;
    NSProgress * _progress;
}

@property (readonly, nonatomic) NSURL * URL;
@property (readonly, nonatomic) NSURL * documentTargetURL;
@property (readonly, nonatomic) NSURL * relativeURLForExternalData;
@property (readonly, nonatomic) int updateType;
@property (readonly, nonatomic) SFUCryptoKey * encryptionKey;
@property (readonly, nonatomic) TSUZipFileWriter * zipArchiveWriter;
@property (readonly, nonatomic) TSPPackage * originalPackage;
@property (readonly, nonatomic) NSProgress * progress;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)newPackageWriterWithPackageType:(int)arg0 URL:(NSString *)arg1 documentTargetURL:(NSURL *)arg2 relativeURLForExternalData:(NSURL *)arg3 packageIdentifier:(unsigned char)arg4 documentProperties:(TSPDocumentProperties *)arg5 fileFormatVersion:(unsigned long long)arg6 updateType:(int)arg7 encryptionKey:(SFUCryptoKey *)arg8 originalDocumentPackage:(TSPPackage *)arg9 originalSuppportPackage:(id)arg10 fileCoordinatorDelegate:(<TSPFileCoordinatorDelegate> *)arg11 progress:(NSProgress *)arg12 error:(id *)arg13;

- (void)closeWithQueue:(NSObject *)arg0 completion:(id /* block */)arg1;
- (NSURL *)relativeURLForExternalData;
- (char)writeData:(NSData *)arg0 toRelativePath:(NSString *)arg1 allowEncryption:(char)arg2 error:(id *)arg3;
- (NSURL *)writtenPackageWithURL:(NSString *)arg0;
- (TSPPackageWriter *)initWithURL:(NSString *)arg0 documentTargetURL:(NSURL *)arg1 relativeURLForExternalData:(NSURL *)arg2 packageIdentifier:(unsigned char)arg3 documentProperties:(TSPDocumentProperties *)arg4 fileFormatVersion:(unsigned long long)arg5 updateType:(int)arg6 encryptionKey:(SFUCryptoKey *)arg7 originalDocumentPackage:(TSPPackage *)arg8 originalSuppportPackage:(id)arg9 fileCoordinatorDelegate:(<TSPFileCoordinatorDelegate> *)arg10 progress:(NSProgress *)arg11 error:(id *)arg12;
- (unsigned long long)encodedLengthForComponentLocator:(id)arg0 isStoredOutsideObjectArchive:(char)arg1 packageURL:(NSURL *)arg2;
- (id)newRawComponentWriteChannelWithPackageLocator:(NSString *)arg0 storeOutsideObjectArchive:(char)arg1;
- (NSData *)filenameForData:(NSData *)arg0 preferredFilename:(NSString *)arg1;
- (SFUCryptoKey *)encryptionKey;
- (struct CGDataConsumer *)newCGDataConsumerAtRelativePath:(NSString *)arg0;
- (NSData *)linkOrCopyData:(NSData *)arg0 fromURL:(NSURL *)arg1 decryptionInfo:(<TSPCryptoInfo> *)arg2 preferredFilename:(NSString *)arg3 error:(id *)arg4;
- (NSString *)newPackageWithPackageIdentifier:(unsigned char)arg0 documentProperties:(TSPDocumentProperties *)arg1 fileFormatVersion:(unsigned long long)arg2 decryptionKey:(SFUCryptoKey *)arg3 fileCoordinatorDelegate:(<TSPFileCoordinatorDelegate> *)arg4;
- (NSString *)newRawDataWriteChannelForRelativePath:(NSString *)arg0 originalSize:(unsigned long long)arg1 originalCRC:(unsigned int)arg2;
- (TSUZipFileWriter *)zipArchiveWriter;
- (NSURL *)documentTargetURL;
- (id)newComponentWriteChannelWithPackageLocator:(NSString *)arg0 storeOutsideObjectArchive:(char)arg1;
- (TSPPackage *)originalPackage;
- (void)copyComponent:(id)arg0 locator:(NSString *)arg1 completion:(id /* block */)arg2;
- (char)addData:(NSData *)arg0 infoMessage:(struct DataInfo *)arg1 saveOperationState:(NSObject *)arg2;
- (void)closeCurrentChannel;
- (NSData *)copyData:(NSData *)arg0 withReadChannel:(NSObject *)arg1 decryptionInfo:(<TSPCryptoInfo> *)arg2 size:(unsigned long long)arg3 preferredFilename:(NSString *)arg4 error:(id *)arg5;
- (char)closeAndReturnError:(id *)arg0;
- (void)dealloc;
- (TSPPackageWriter *)init;
- (NSURL *)URL;
- (NSProgress *)progress;
- (void).cxx_destruct;
- (int)updateType;
- (void)setError:(NSError *)arg0;

@end
