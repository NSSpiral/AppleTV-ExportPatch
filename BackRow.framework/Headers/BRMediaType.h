/* Runtime dump - BRMediaType
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRType.h>

@class BRImageControl, BRMovieTrailer;
@interface BRMediaType : BRType
{
    BRMediaType * _derivedFrom;
    NSString * _canonicalName;
}

@property (nonatomic) NSString * canonicalName;

+ (char)airTunes;
+ (BRMediaType *)storeRentalMovie;
+ (BRMediaType *)TVShow;
+ (BRMediaType *)storeRentalTVShow;
+ (BRMediaType *)musicVideo;
+ (BRMediaType *)streamingPodcast;
+ (NSObject *)podcastSubscription;
+ (BRMediaType *)demoRentalMovie;
+ (BRMediaType *)defaultImageForMediaType:(NSObject *)arg0 forImageSize:(int)arg1;
+ (BRMediaType *)songPreview;
+ (BRMediaType *)audioBook;
+ (BRMediaType *)syncedInternetRadioStation;
+ (BRMediaType *)internetRadioStation;
+ (BRMovieTrailer *)movieTrailer;
+ (UIImage *)flickrPhoto;
+ (BRMediaType *)iTunesExtras;
+ (BRMediaType *)iTunesLP;
+ (BRMediaType *)moviePreview;
+ (BRMediaType *)TVShowPreview;
+ (BRMediaType *)musicVideoPreview;
+ (BRMediaType *)videoClip;
+ (NSObject *)storeMediaTypeStringForMediaType:(NSObject *)arg0;
+ (BRMediaType *)iTunesU;
+ (BRMediaType *)streamingVideo;
+ (BRMediaType *)liveVideo;
+ (BRMediaType *)ytVideo;
+ (NSArray *)liveStreamingTypes;
+ (NSArray *)unchapteredTypes;
+ (UIImage *)internetPhoto;
+ (BRMediaType *)cdSong;
+ (BRMediaType *)dvd;
+ (BRMediaType *)booklet;
+ (BRMediaType *)interactiveBooklet;
+ (BRMediaType *)coachedAudio;
+ (id /* block */)downloadSpeedTest;
+ (BRMediaType *)trickPlay;
+ (NSObject *)_defaultImageForMediaType:(NSObject *)arg0 forImageSize:(int)arg1;
+ (NSArray *)storeMediaTypes;
+ (NSArray *)internetPhotoMediaTypes;
+ (NSArray *)onTheGoMediaTypes;
+ (MPRadioStation *)radioStation;
+ (void)initialize;
+ (BRImageControl *)photo;
+ (<IKApplication> *)app;
+ (MIPSong *)song;
+ (MIPMovie *)movie;
+ (MIPPodcast *)podcast;

- (char)isKindOfMediaType:(NSObject *)arg0;
- (NSString *)canonicalName;
- (NSObject *)parentType;
- (void)setCanonicalName:(NSString *)arg0;
- (void)setParentType:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)description;

@end
