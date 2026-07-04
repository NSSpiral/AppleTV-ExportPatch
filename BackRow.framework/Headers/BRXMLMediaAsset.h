/* Runtime dump - BRXMLMediaAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRBaseMediaAsset.h>

@protocol BRSecureResource;

@class ATVFeedTrickPlayConfigElement, BRAuthenticator, BRGenre, BRMediaType, BRMerchant, BRResolution;
@interface BRXMLMediaAsset : BRBaseMediaAsset <BRSecureResource>
{
    NSMutableDictionary * _info;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)assetID;
- (NSDictionary *)playbackMetadata;
- (long)parentalControlRatingSystemID;
- (long)parentalControlRatingRank;
- (NSString *)trickPlayURL;
- (BRMerchant *)merchant;
- (BRAuthenticator *)secureResourceAuthenticator;
- (BRGenre *)primaryGenre;
- (NSString *)mediaSummary;
- (NSString *)secondScreenURL;
- (NSArray *)subtitleStyles;
- (NSString *)subtitleStylesURL;
- (ATVFeedTrickPlayConfigElement *)trickPlayConfig;
- (char)hasCoverArt;
- (char)forceHDCPProtection;
- (char)hasVideoContent;
- (NSString *)primaryCollectionTitle;
- (NSArray *)cast;
- (NSDate *)dateAcquired;
- (NSDate *)datePublished;
- (unsigned int)bookmarkTimeInMS;
- (unsigned int)bookmarkTimeInSeconds;
- (unsigned int)upNextPresentationTimeInSeconds;
- (unsigned int)upNextPresentationDurationInSeconds;
- (int)cachingIdentifierBehavior;
- (NSArray *)outOfBandAlternateTracks;
- (void)setPlaybackMetadataValue:(id)arg0 forKey:(NSString *)arg1;
- (NSDictionary *)coverArt;
- (id)thumbnailArt;
- (NSObject *)thumbnailArtID;
- (NSObject *)coverArtID;
- (BRXMLMediaAsset *)initWithMediaProvider:(NSObject *)arg0;
- (NSString *)previewURL;
- (void)setObject:(NSObject *)arg0 forKey:(id /* <NSCopying> */)arg1;
- (void)dealloc;
- (BRXMLMediaAsset *)init;
- (NSString *)description;
- (long)duration;
- (NSDictionary *)dictionary;
- (NSString *)title;
- (BRResolution *)resolution;
- (NSString *)publisher;
- (id /* <BRImageProxy> */)imageProxy;
- (NSString *)rating;
- (NSString *)artist;
- (NSString *)composer;
- (NSArray *)directors;
- (NSString *)ratingSystem;
- (NSNumber *)ratingRank;
- (NSString *)copyright;
- (NSDate *)dateCreated;
- (NSURL *)thumbnailURL;
- (BRMediaType *)mediaType;
- (NSString *)mediaURL;
- (void)setDictionary:(NSDictionary *)arg0;
- (char)isExplicit;
- (NSArray *)genres;

@end
