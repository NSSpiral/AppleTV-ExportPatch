/* Runtime dump - OCCDecryptor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCCDecryptor : NSObject
{
    NSString * mOutputFilename;
    NSString * mBaseStringForOutputFilename;
    struct OCCStreamer * mStreamer;
}

@property (readonly, nonatomic) NSString * outputFilename;

+ (OCCDecryptor *)allocTempFileWithBase:(id)arg0 outFilename:(id *)arg1;
+ (OCCDecryptor *)agileDescriptorNamespace;
+ (OCCDecryptor *)agilePasswordKeyEncryptorNamespace;

- (void)dealloc;
- (char)isReadProtectedUsingDefaultPassphrase;
- (char)verifyPassphrase:(id)arg0;
- (void)deleteOutputFile;
- (char)decryptIntoOutputFile;
- (char)decrypt;
- (OCCDecryptor *)initWithStreamer:(struct OCCStreamer *)arg0;
- (NSString *)outputFilename;

@end
