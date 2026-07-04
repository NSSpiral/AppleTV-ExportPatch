/* Runtime dump - MPStorePlayWhileDownloadSession
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStorePlayWhileDownloadSession : NSObject <NSCopying>
{
    NSURL * _destinationURL;
    NSDictionary * _purchaseBundle;
    NSURL * _sourceURL;
    unsigned long long _downloadToken;
}

@property (copy, nonatomic) NSURL * destinationURL;
@property (nonatomic) unsigned long long downloadToken;
@property (copy, nonatomic) NSDictionary * purchaseBundle;
@property (copy, nonatomic) NSURL * sourceURL;

- (NSURL *)destinationURL;
- (NSURL *)sourceURL;
- (void)setDestinationURL:(NSURL *)arg0;
- (void)setSourceURL:(NSURL *)arg0;
- (NSDictionary *)purchaseBundle;
- (void)setPurchaseBundle:(NSDictionary *)arg0;
- (NSString *)description;
- (MPStorePlayWhileDownloadSession *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setDownloadToken:(unsigned long long)arg0;
- (unsigned long long)downloadToken;

@end
