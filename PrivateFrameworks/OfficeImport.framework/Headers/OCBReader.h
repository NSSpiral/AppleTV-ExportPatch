/* Runtime dump - OCBReader
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCBReader : OCDEncryptedReader
{
    struct OcBinaryReader * mBinaryReader;
    struct __sFILE * mFile;
}

@property (nonatomic) struct OcBinaryReader * binaryReader;
@property (nonatomic) struct __sFILE * file;
@property (readonly, nonatomic) struct OCCEncryptionInfoReader * encryptionInfoReader;

- (void)dealloc;
- (char)start;
- (OCBReader *)initWithCancelDelegate:(<TCCancelDelegate> *)arg0 tracing:(TCImportTracing *)arg1;
- (char)retainDecryptorWithErrorCode:(int *)arg0;
- (BOOL)isBinaryReader;
- (NSObject *)read;
- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(SFUCryptoKey *)arg0 baseOutputFilenameInUTF8:(SEL)arg1;
- (struct OCCEncryptionInfoReader *)encryptionInfoReader;
- (NSString *)allocDecryptorWithCryptoKey:(struct OCCCryptoKey *)arg0 baseOutputFilename:(NSString *)arg1;
- (struct OcBinaryReader *)binaryReader;
- (void)setBinaryReader:(struct OcBinaryReader *)arg0;
- (void)setFile:(struct __sFILE *)arg0;
- (struct __sFILE *)file;
- (void)restartReaderToUseDecryptedDocument;
- (void)closeFile;

@end
