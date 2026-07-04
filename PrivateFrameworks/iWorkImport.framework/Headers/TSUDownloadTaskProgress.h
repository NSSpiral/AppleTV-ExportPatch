/* Runtime dump - TSUDownloadTaskProgress
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDownloadTaskProgress : NSObject
{
    char _isActive;
    long long _totalBytesDownloaded;
    long long _totalBytesExpectedToBeDownloaded;
}

@property (nonatomic) char isActive;
@property (nonatomic) long long totalBytesDownloaded;
@property (nonatomic) long long totalBytesExpectedToBeDownloaded;

- (long long)totalBytesExpectedToBeDownloaded;
- (void)setTotalBytesExpectedToBeDownloaded:(long long)arg0;
- (void)setTotalBytesDownloaded:(long long)arg0;
- (long long)totalBytesDownloaded;
- (NSString *)description;
- (char)isActive;
- (void)setIsActive:(char)arg0;

@end
