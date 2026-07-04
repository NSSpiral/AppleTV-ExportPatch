/* Runtime dump - ISHashedDownloadProvider
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISHashedDownloadProvider : ISDataProvider <NSCopying>
{
    int _fileDescriptor;
    NSArray * _hashes;
    ISHashError * _lastHashError;
    NSString * _localFilePath;
    struct CC_MD5state_st _md5Context;
    long long _numberOfBytesToHash;
    char _shouldResumeFromLocalBytes;
    long long _totalBytesWritten;
    long long _validatedBytes;
}

@property (retain) NSString * localFilePath;
@property char shouldResumeFromLocalBytes;
@property (retain) NSArray * hashes;
@property long long numberOfBytesToHash;
@property (copy) ISHashError * lastHashError;
@property long long streamedBytes;
@property long long validatedBytes;

- (NSString *)localFilePath;
- (void)setLocalFilePath:(NSString *)arg0;
- (void)dealloc;
- (ISHashedDownloadProvider *)init;
- (ISHashedDownloadProvider *)copyWithZone:(struct _NSZone *)arg0;
- (char)isStream;
- (void)setup;
- (long long)numberOfBytesToHash;
- (long long)streamedBytes;
- (NSObject *)closeStream;
- (char)parseData:(NSData *)arg0 returningError:(id *)arg1;
- (void)resetStream;
- (char)canStreamContentLength:(long long)arg0 error:(id *)arg1;
- (void)_closeFile;
- (NSArray *)hashes;
- (char)_writeDataWithoutHashing:(id)arg0 returningError:(id *)arg1;
- (char)_writeDataWithHashing:(id)arg0 returningError:(id *)arg1;
- (char)_openFile;
- (char)_truncateToSize:(long long)arg0;
- (char)shouldResumeFromLocalBytes;
- (long long)validatedBytes;
- (long long)_verifiedBytesByInitializingHashForFileSize:(long long)arg0;
- (void)setValidatedBytes:(long long)arg0;
- (void)setLastHashError:(ISHashError *)arg0;
- (void)setStreamedBytes:(long long)arg0;
- (char)_checkHashForByteCount:(long long)arg0;
- (void)setHashes:(NSArray *)arg0;
- (ISHashError *)lastHashError;
- (void)setNumberOfBytesToHash:(long long)arg0;
- (void)setShouldResumeFromLocalBytes:(char)arg0;

@end
