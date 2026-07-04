/* Runtime dump - MPStreamingDownloadSession
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStreamingDownloadSession : NSObject <NSCopying>
{
    char _didStartLeaseSession;
    NSString * _assetFlavor;
    unsigned int _assetQuality;
    unsigned int _protectionType;
    NSDictionary * _purchaseBundle;
    NSDictionary * _responseAssetDictionary;
    NSURL * _sourceURL;
    unsigned long long _downloadToken;
}

@property (copy, nonatomic) NSString * assetFlavor;
@property (nonatomic) unsigned int assetQuality;
@property (nonatomic) char didStartLeaseSession;
@property (nonatomic) unsigned long long downloadToken;
@property (nonatomic) unsigned int protectionType;
@property (copy, nonatomic) NSDictionary * purchaseBundle;
@property (retain, nonatomic) NSDictionary * responseAssetDictionary;
@property (copy, nonatomic) NSURL * sourceURL;

- (NSURL *)sourceURL;
- (void)setSourceURL:(NSURL *)arg0;
- (NSString *)assetFlavor;
- (void)setAssetFlavor:(NSString *)arg0;
- (unsigned int)assetQuality;
- (void)setAssetQuality:(unsigned int)arg0;
- (char)didStartLeaseSession;
- (void)setDidStartLeaseSession:(char)arg0;
- (unsigned int)protectionType;
- (void)setProtectionType:(unsigned int)arg0;
- (NSDictionary *)purchaseBundle;
- (void)setPurchaseBundle:(NSDictionary *)arg0;
- (NSDictionary *)responseAssetDictionary;
- (void)setResponseAssetDictionary:(NSDictionary *)arg0;
- (NSString *)description;
- (MPStreamingDownloadSession *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setDownloadToken:(unsigned long long)arg0;
- (unsigned long long)downloadToken;

@end
