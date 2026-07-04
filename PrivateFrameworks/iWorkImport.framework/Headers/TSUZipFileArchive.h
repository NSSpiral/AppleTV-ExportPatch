/* Runtime dump - TSUZipFileArchive
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUZipFileArchive : TSUZipArchive
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned long long _archiveLength;
    TSUZipFileDescriptorWrapper * _fdWrapper;
    NSURL * _temporaryDirectoryURL;
}

+ (char)isZipArchiveAtFD:(int)arg0;
+ (char)isZipArchiveAtURL:(NSURL *)arg0 error:(id *)arg1;
+ (void)readArchiveFromURL:(NSURL *)arg0 options:(unsigned int)arg1 queue:(NSObject *)arg2 completion:(id /* block */)arg3;
+ (NSURL *)zipArchiveFromURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2;

- (unsigned long long)archiveLength;
- (NSObject *)newArchiveReadChannel;
- (TSUZipFileArchive *)initForReadingFromURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (char)openWithURL:(NSString *)arg0 error:(id *)arg1;
- (void)removeTemporaryDirectory;
- (void)createTemporaryDirectoryRelativeToURL:(NSURL *)arg0;
- (char)reopenWithTemporaryURL:(NSURL *)arg0 error:(id *)arg1;
- (TSUZipFileArchive *)initWithWriter:(NSObject *)arg0 forReadingFromURL:(NSURL *)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (char)copyToTemporaryLocationRelativeToURL:(NSURL *)arg0 error:(id *)arg1;
- (void)dealloc;
- (NSString *)debugDescription;
- (char)isValid;
- (void).cxx_destruct;

@end
