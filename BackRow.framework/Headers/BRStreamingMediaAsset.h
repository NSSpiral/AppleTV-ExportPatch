/* Runtime dump - BRStreamingMediaAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRBaseMediaAsset.h>

@protocol BRATVMediaItem;
@protocol BRMediaAssetDerivesMediaURL;
@protocol BRSecureResource;

@class BRAuthenticator, BRGenre, BRMediaType;
@interface BRStreamingMediaAsset : BRBaseMediaAsset <BRATVMediaItem, BRMediaAssetDerivesMediaURL, BRSecureResource>
{
    ATVDataItem * _mediaItem;
    NSMutableDictionary * _metadata;
    NSString * _assetID;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)setImplementationClass:(Class)arg0;
+ (BRStreamingMediaAsset *)streamingMediaAssetWithMediaItem:(ATVDataItem *)arg0;

- (ATVDataItem *)mediaItemRef;
- (NSString *)assetID;
- (NSDictionary *)playbackMetadata;
- (BRAuthenticator *)secureResourceAuthenticator;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (BRGenre *)primaryGenre;
- (NSString *)sceneSummary;
- (NSString *)mediaSummary;
- (NSString *)mediaDescription;
- (char)isHD;
- (NSString *)mediaFlavor;
- (char)incrementPlayCount:(unsigned int)arg0;
- (char)hasVideoContent;
- (NSString *)primaryCollectionTitle;
- (void)setBookmarkTimeInMS:(unsigned int)arg0;
- (unsigned int)bookmarkTimeInMS;
- (unsigned int)startTimeInMS;
- (double)sceneStartTime;
- (double)sceneEndTime;
- (char)isScrubbable;
- (char)alwaysRequiresAuthorization;
- (void)setPlaybackMetadataValue:(id)arg0 forKey:(NSString *)arg1;
- (char)shouldShowChapters;
- (char)shouldShowTrackPopup;
- (void)resolveMediaURL:(id /* block */)arg0;
- (void)setWatched:(char)arg0;
- (char)_useBumper;
- (void)_loadBumperConfigWithCompletion:(id /* block */)arg0;
- (NSObject *)_bumperConfigFromStoreBumperConfig:(NSObject *)arg0 logoImage:(UIImage *)arg1;
- (NSString *)externalID;
- (BRStreamingMediaAsset *)initWithMediaItem:(ATVDataItem *)arg0;
- (void)dealloc;
- (long)duration;
- (NSString *)title;
- (void).cxx_destruct;
- (char)_supportsBookmarkProperty;
- (id /* <BRImageProxy> */)imageProxy;
- (NSString *)sceneName;
- (NSString *)artist;
- (BRMediaType *)mediaType;
- (NSString *)mediaURL;

@end
