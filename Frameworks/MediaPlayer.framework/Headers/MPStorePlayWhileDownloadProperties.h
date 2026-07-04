/* Runtime dump - MPStorePlayWhileDownloadProperties
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStorePlayWhileDownloadProperties : NSObject
{
    NSString * _localFilePath;
    NSArray * _sinfs;
    NSURL * _sourceURL;
    unsigned long long _downloadToken;
}

@property (nonatomic) unsigned long long downloadToken;
@property (copy, nonatomic) NSString * localFilePath;
@property (copy, nonatomic) NSArray * sinfs;
@property (copy, nonatomic) NSURL * sourceURL;

- (NSURL *)sourceURL;
- (void)setSourceURL:(NSURL *)arg0;
- (NSArray *)sinfs;
- (NSString *)localFilePath;
- (void)setSinfs:(NSArray *)arg0;
- (void)setLocalFilePath:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setDownloadToken:(unsigned long long)arg0;
- (unsigned long long)downloadToken;

@end
