/* Runtime dump - AVURLAsset
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVURLAsset : AVAsset
{
    AVURLAssetInternal * _URLAsset;
}

@property (readonly, nonatomic) AVAssetCache * assetCache;
@property (readonly, nonatomic) char shouldMatchDataInCacheByURLPathComponentOnly;
@property (readonly, nonatomic) char shouldMatchDataInCacheByURLWithoutQueryComponent;
@property (readonly, nonatomic) NSString * cacheKey;
@property (readonly, nonatomic) AVAssetResourceLoader * resourceLoader;
@property (readonly, copy, nonatomic) NSURL * URL;

+ (NSArray *)_figFileMIMETypes;
+ (NSArray *)_figStreamingMIMETypes;
+ (AVURLAsset *)_figFilePathExtensions;
+ (NSArray *)_fileUTTypes;
+ (NSArray *)_streamingUTTypes;
+ (NSArray *)_UTTypes;
+ (NSArray *)_figMIMETypes;
+ (NSDictionary *)_avfValidationPlist;
+ (NSArray *)audiovisualTypes;
+ (NSArray *)audiovisualMIMETypes;
+ (NSURL *)URLAssetWithURL:(NSString *)arg0 options:(NSDictionary *)arg1;
+ (char)isPlayableExtendedMIMEType:(NSObject *)arg0;

- (void)_addFigAssetNotifications;
- (void)_removeFigAssetNotifications;
- (id)_assetInspectorLoader;
- (id)_assetInspector;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (struct OpaqueFigFormatReader *)_formatReader;
- (Class)_classForTrackInspectors;
- (NSURL *)_absoluteURL;
- (unsigned int)referenceRestrictions;
- (void)_tracksDidChange;
- (char)_hasResourceLoaderDelegate;
- (void)_setAssetInspectorLoader:(AVAssetInspectorLoader *)arg0;
- (NSDictionary *)_handleURLAssetInitializationOptionsReturningFigAssetCreationOptions:(NSDictionary *)arg0 selector:(SEL)arg1;
- (NSArray *)_tracks;
- (NSData *)_errorForFigNotificationPayload:(struct __CFDictionary *)arg0 key:(struct __CFString *)arg1;
- (char)shouldMatchDataInCacheByURLPathComponentOnly;
- (char)shouldMatchDataInCacheByURLWithoutQueryComponent;
- (NSData *)SHA1Digest;
- (NSURL *)downloadDestinationURL;
- (char)_shouldOptimizeAccessForLinearMoviePlayback;
- (void)_finishLoadingCustomURLProviderRequestWithResponseProperties:(NSDictionary *)arg0 context:(NSObject *)arg1;
- (void)_handleURLRequest:(NSURLRequest *)arg0;
- (void)dealloc;
- (AVURLAsset *)init;
- (NSString *)description;
- (NSURL *)URL;
- (NSString *)cacheKey;
- (AVAssetCache *)assetCache;
- (unsigned long long)downloadToken;
- (NSString *)lyrics;
- (NSArray *)tracks;
- (void)finalize;
- (AVAssetResourceLoader *)resourceLoader;
- (void)cancelLoading;
- (AVURLAsset *)initWithURL:(NSString *)arg0 options:(NSDictionary *)arg1;
- (NSURL *)resolvedURL;

@end
