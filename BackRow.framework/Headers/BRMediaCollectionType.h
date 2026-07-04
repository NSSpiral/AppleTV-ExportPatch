/* Runtime dump - BRMediaCollectionType
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRType.h>

@class BRMovieTrailer;
@interface BRMediaCollectionType : BRType

+ (BRMovieTrailer *)movieTrailer;
+ (BRMediaCollectionType *)iPhotoAlbum;
+ (BRMediaCollectionType *)iTunesGeniusMix;
+ (NSObject *)iPhotoEvent;
+ (BRMediaCollectionType *)iPhotoFaces;
+ (BRMediaCollectionType *)iPhotoSlideshow;
+ (NSArray *)playlistCollectionTypes;
+ (BRMediaCollectionType *)iTunesSmartPlaylist;
+ (BRMediaCollectionType *)iTunesFolderPlaylist;
+ (BRMediaCollectionType *)iTunesPurchasesPlaylist;
+ (BRMediaCollectionType *)iTunesMainGeniusPlaylist;
+ (BRMediaCollectionType *)iTunesSavedGeniusPlaylist;
+ (BRMediaCollectionType *)iTunesPlaylist;
+ (BRMediaCollectionType *)iTunesArtist;
+ (BRMediaCollectionType *)compoundITunesArtist;
+ (BRMediaCollectionType *)iTunesAlbum;
+ (BRMediaCollectionType *)compoundITunesAlbum;
+ (BRMediaCollectionType *)iTunesMainOnTheGoPlaylist;
+ (BRMediaCollectionType *)iTunesSavedOnTheGoPlaylist;
+ (BRMediaCollectionType *)iPhotoFolder;
+ (BRMediaCollectionType *)iTunesInternetRadioPlaylist;
+ (BRMediaCollectionType *)podcastSubscriptionCollection;
+ (BRMediaCollectionType *)videoSlideshow;
+ (NSArray *)onTheGoCollectionTypes;
+ (NSArray *)photoCollectionTypes;
+ (char)unknown;
+ (MIPArtist *)composer;
+ (MIPGenre *)genre;
+ (YTVideo *)video;
+ (SAMPPodcastCollection *)podcastCollection;

- (int)playlistTypeCompare:(NSObject *)arg0;
- (NSString *)description;

@end
