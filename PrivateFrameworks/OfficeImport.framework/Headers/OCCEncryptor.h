/* Runtime dump - OCCEncryptor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCCEncryptor : NSObject
{
    NSString * mOutputFilename;
    struct OCCStreamer * mStreamer;
}

@property (readonly, nonatomic) NSString * outputFilename;

+ (OCCEncryptor *)allocTempFileWithBase:(id)arg0 filename:(id *)arg1;

- (void)dealloc;
- (char)encryptIntoOutputFile;
- (OCCEncryptor *)initWithStreamer:(struct OCCStreamer *)arg0;
- (char)encrypt;
- (NSString *)outputFilename;

@end
