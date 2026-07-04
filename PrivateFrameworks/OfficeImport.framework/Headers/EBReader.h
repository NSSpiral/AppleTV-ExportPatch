/* Runtime dump - EBReader
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBReader : OCBReader
{
    NSString * mTemporaryDirectory;
    struct XlObjectFactory * mXlObjectFactory;
    char mUseStringOptimization;
    char mIsFileStructuredStorage;
    void * mBuffer;
}

@property (retain, nonatomic) NSString * temporaryDirectory;
@property (readonly, nonatomic) struct XlBinaryReader * xlReader;
@property (nonatomic) char useStringOptimization;
@property (nonatomic) char isFileStructuredStorage;

- (void)dealloc;
- (char)start;
- (EBReader *)initWithCancelDelegate:(<TCCancelDelegate> *)arg0 tracing:(TCImportTracing *)arg1;
- (NSObject *)read;
- (void)setIsFileStructuredStorage:(char)arg0;
- (char)isFileStructuredStorage;
- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(SFUCryptoKey *)arg0 baseOutputFilenameInUTF8:(SEL)arg1;
- (struct OCCEncryptionInfoReader *)encryptionInfoReader;
- (struct XlBinaryReader *)xlReader;
- (NSString *)temporaryDirectory;
- (void)setTemporaryDirectory:(NSString *)arg0;
- (char)useStringOptimization;
- (void)setUseStringOptimization:(char)arg0;

@end
