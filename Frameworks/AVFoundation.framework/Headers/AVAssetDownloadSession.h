/* Runtime dump - AVAssetDownloadSession
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetDownloadSession : NSObject
{
    AVAssetDownloadSessionInternal * _internal;
}

@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) NSError * error;
@property (readonly, nonatomic) NSURL * URL;
@property (readonly, nonatomic) NSURL * destinationURL;
@property (readonly, nonatomic) int priority;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, nonatomic) unsigned long long availableFileSize;
@property (readonly, nonatomic) unsigned long long downloadToken;

+ (AVAssetDownloadSession *)assetDownloadSessionWithDownloadToken:(unsigned long long)arg0;
+ (AVAssetDownloadSession *)assetDownloadSessionWithURL:(NSString *)arg0 destinationURL:(NSURL *)arg1 options:(NSDictionary *)arg2;

- (struct OpaqueFigAsset *)_figAsset;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (AVWeakReference *)_weakReference;
- (NSData *)_errorForFigNotificationPayload:(struct __CFDictionary *)arg0 key:(struct __CFString *)arg1;
- (char)_setFigAsset:(struct OpaqueFigAsset *)arg0;
- (void)_removeFigAssetListeners;
- (void)_removeFigPlaybackItemListeners;
- (AVAssetDownloadSession *)initWithURL:(NSString *)arg0 destinationURL:(NSURL *)arg1 options:(NSDictionary *)arg2;
- (AVAssetDownloadSession *)initWithDownloadToken:(unsigned long long)arg0;
- (long)_primeCache;
- (long)_readyForInspection;
- (void)_transitionToTerminalStatus:(int)arg0 error:(NSError *)arg1;
- (void)_addFigAssetListeners;
- (void)_addFigPlaybackItemListeners;
- (NSArray *)_figAssetNotificationNames;
- (NSArray *)_figPlaybackItemNotificationNames;
- (void)_primeCacheOnDispatchQueue;
- (NSURL *)destinationURL;
- (unsigned long long)availableFileSize;
- (void)dealloc;
- (AVAssetDownloadSession *)init;
- (void)stop;
- (NSURL *)URL;
- (void)start;
- (int)priority;
- (void)pause;
- (int)status;
- (NSError *)error;
- (unsigned long long)downloadToken;
- (unsigned long long)fileSize;
- (void)finalize;

@end
