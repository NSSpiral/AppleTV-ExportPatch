/* Runtime dump - MPStoreDownload
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreDownload : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSDictionary * _attributes;
    char _canceled;
    NSMutableArray * _overridePhaseIdentifiers;
    SSDownload * _SSDownload;
    SSPurchase * _SSPurchase;
    SSPurchaseResponse * _SSPurchaseResponse;
    int _type;
}

@property (readonly, nonatomic) NSDictionary * attributes;
@property (readonly, nonatomic) long long bytesDownloaded;
@property (readonly, nonatomic) long long bytesTotal;
@property (readonly, nonatomic) char canceled;
@property (readonly, nonatomic) long long downloadIdentifier;
@property (readonly, nonatomic) long long downloadSizeLimit;
@property (readonly, nonatomic) NSError * failureError;
@property (readonly, nonatomic) char finished;
@property (readonly, nonatomic) char purchasing;
@property (readonly, nonatomic) char paused;
@property (readonly, nonatomic) unsigned long long libraryItemIdentifier;
@property (readonly, nonatomic) double percentComplete;
@property (readonly, nonatomic) NSString * phaseIdentifier;
@property (readonly, nonatomic) NSError * purchaseError;
@property (readonly, nonatomic) char restore;
@property (readonly, nonatomic) long long storeItemIdentifier;
@property (readonly, nonatomic) int type;

+ (MPStoreDownload *)storeDownloadForPlaybackItemMetadata:(NSDictionary *)arg0 type:(int)arg1 attributes:(NSDictionary *)arg2;
+ (char)canCreateStoreDownloadForPlaybackItemMetadata:(NSDictionary *)arg0 type:(int)arg1 attributes:(NSDictionary *)arg2;
+ (MPStoreDownload *)storeDownloadForMediaItem:(NSObject *)arg0 type:(int)arg1 attributes:(NSDictionary *)arg2;
+ (char)_getEffectiveStoreDownloadAttributes:(id *)arg0 forPlaybackItemMetadata:(NSDictionary *)arg1 attributes:(NSDictionary *)arg2;
+ (NSObject *)_SSPurchaseForType:(int)arg0 attributes:(NSDictionary *)arg1;
+ (MPStoreDownload *)storeDownloadForStoreOffer:(id)arg0 type:(int)arg1 attributes:(NSDictionary *)arg2;
+ (MPStoreDownload *)storeDownloadForStoreItemOffer:(id)arg0 attributes:(NSDictionary *)arg1;

- (NSError *)failureError;
- (SSDownload *)_SSDownload;
- (NSObject *)assetsForType:(NSObject *)arg0;
- (NSString *)phaseIdentifier;
- (MPStoreDownload *)initWithType:(int)arg0 attributes:(NSDictionary *)arg1;
- (long long)downloadIdentifier;
- (char)isPurchasing;
- (long long)storeItemIdentifier;
- (void)_setSSPurchase:(SSPurchase *)arg0 SSPurchaseResponse:(SSPurchaseResponse *)arg1;
- (long long)bytesDownloaded;
- (long long)bytesTotal;
- (SSPurchase *)_SSPurchase;
- (long long)downloadSizeLimit;
- (char)_isCanceled;
- (NSURLResponse *)_SSPurchaseResponse;
- (NSObject *)_valueForDownloadProperty:(NSObject *)arg0;
- (NSString *)_currentOverridePhaseIdentifier;
- (char)isRestore;
- (unsigned long long)libraryItemIdentifier;
- (NSError *)purchaseError;
- (void)_setCanceled:(char)arg0;
- (void)_setSSDownload:(SSDownload *)arg0;
- (void)_addOverridePhaseIdentifier:(NSString *)arg0;
- (void)_removeOverridePhaseIdentifier:(NSString *)arg0;
- (NSString *)description;
- (double)percentComplete;
- (int)type;
- (NSDictionary *)attributes;
- (void).cxx_destruct;
- (char)isFinished;
- (char)isCanceled;
- (char)isPaused;

@end
