/* Runtime dump - TSPDocumentResourceCacheEntry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentResourceCacheEntry : NSObject
{
    char _wasDownloaded;
    NSString * _digestString;
    int _accessCount;
    NSURL * _URL;
    NSDate * _contentAccessDate;
    long long _fileSize;
}

@property (readonly, nonatomic) NSString * digestString;
@property (nonatomic) int accessCount;
@property (copy, nonatomic) NSURL * URL;
@property (nonatomic) long long fileSize;
@property (retain, nonatomic) NSDate * contentAccessDate;
@property (nonatomic) char wasDownloaded;

- (NSString *)digestString;
- (TSPDocumentResourceCacheEntry *)initWithDigestString:(NSString *)arg0;
- (void)setContentAccessDate:(NSDate *)arg0;
- (void)setWasDownloaded:(char)arg0;
- (char)wasDownloaded;
- (int)accessCount;
- (void)setAccessCount:(int)arg0;
- (NSDate *)contentAccessDate;
- (TSPDocumentResourceCacheEntry *)init;
- (NSURL *)URL;
- (void)setURL:(NSString *)arg0;
- (void).cxx_destruct;
- (long long)fileSize;
- (void)setFileSize:(long long)arg0;

@end
