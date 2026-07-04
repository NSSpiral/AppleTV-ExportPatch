/* Runtime dump - OCImporter
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCImporter : OCMapper
{
    NSURL * mURL;
    NSData * mData;
    OCDReader * mReader;
    TCImportTracing * mTracing;
    char mTryAlternateReader;
    OITSUProgressContext * mProgressContext;
    NSString * _docPassphrase;
}

@property (readonly, nonatomic) TCImportTracing * tracing;
@property (retain) OITSUProgressContext * progressContext;
@property (retain, nonatomic) NSString * docPassphrase;

+ (void)initialize;

- (void)dealloc;
- (OCImporter *)initWithData:(NSData *)arg0;
- (OCImporter *)initWithURL:(NSString *)arg0;
- (char)start;
- (void)setURL:(NSString *)arg0;
- (NSString *)displayName;
- (NSString *)filename;
- (char)setPassphrase:(NSString *)arg0;
- (void)setProgressContext:(OITSUProgressContext *)arg0;
- (OITSUProgressContext *)progressContext;
- (char)isDocumentEncryptedUnsupportedVersionHelper:(char *)arg0 errorMessage:(id *)arg1 readError:(char *)arg2;
- (void)setDocPassphrase:(NSString *)arg0;
- (char)tryAlternateReader;
- (char)isDocumentEncryptedUnsupportedVersion:(char *)arg0 errorMessage:(id *)arg1;
- (void)finalizeBackgroundTasksWithDocumentState:(NSObject *)arg0;
- (TCImportTracing *)tracing;
- (NSString *)docPassphrase;
- (char)isXML;

@end
