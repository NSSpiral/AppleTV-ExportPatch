/* Runtime dump - PBReader
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBReader : OCBReader
{
    struct PptObjectFactory * mPptObjectFactory;
    void * mBuffer;
}

@property (readonly, nonatomic) struct PptBinaryReader * pptReader;

- (void)dealloc;
- (char)start;
- (PBReader *)initWithCancelDelegate:(<TCCancelDelegate> *)arg0 tracing:(TCImportTracing *)arg1;
- (NSObject *)read;
- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(SFUCryptoKey *)arg0 baseOutputFilenameInUTF8:(SEL)arg1;
- (struct OCCEncryptionInfoReader *)encryptionInfoReader;
- (struct PptBinaryReader *)pptReader;

@end
