/* Runtime dump - ATVMusicStorePodcastAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRRSSMediaAsset.h>

@protocol BRMediaAssetDerivesMediaURL;

@class BRGenre, BRMediaType;
@interface ATVMusicStorePodcastAsset : BRRSSMediaAsset <BRMediaAssetDerivesMediaURL>
{
    NSDictionary * _feedInfo;
    ATVMutableBookmark * _podcastBookmark;
}

- (NSString *)assetID;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (BRGenre *)primaryGenre;
- (NSString *)mediaSummary;
- (NSString *)mediaDescription;
- (float)userStarRating;
- (long)performanceCount;
- (char)incrementPlayCount:(unsigned int)arg0;
- (void)willBeginPlayback;
- (char)hasCoverArt;
- (char)hasVideoContent;
- (NSString *)primaryCollectionTitle;
- (NSArray *)cast;
- (NSDate *)dateAcquired;
- (NSDate *)datePublished;
- (NSString *)datePublishedString;
- (void)setBookmarkTimeInMS:(unsigned int)arg0;
- (unsigned int)bookmarkTimeInMS;
- (NSObject *)thumbnailArtID;
- (NSObject *)coverArtID;
- (ATVMusicStorePodcastAsset *)initWithFeedInfo:(NSDictionary *)arg0;
- (NSString *)primaryGenreAsString;
- (id)_assetBookmark;
- (void)_updateBookmark;
- (NSURL *)_podcastFeedURL;
- (NSObject *)_episodeID;
- (void)resolveMediaURL:(id /* block */)arg0;
- (void)setHasBeenPlayed:(char)arg0;
- (NSString *)previewURL;
- (void)dealloc;
- (NSString *)description;
- (long)duration;
- (NSString *)title;
- (NSString *)publisher;
- (NSString *)rating;
- (NSString *)artist;
- (NSArray *)directors;
- (NSArray *)producers;
- (NSString *)copyright;
- (NSURL *)thumbnailURL;
- (BRMediaType *)mediaType;
- (NSString *)mediaURL;
- (char)isExplicit;
- (NSArray *)genres;

@end
