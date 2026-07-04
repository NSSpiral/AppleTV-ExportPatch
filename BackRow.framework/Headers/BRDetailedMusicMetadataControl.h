/* Runtime dump - BRDetailedMusicMetadataControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRMarqueeTextControl, BRTextControl, WLKShowContentRating;
@interface BRDetailedMusicMetadataControl : BRControl
{
    BRMarqueeTextControl * _songTitle;
    BRTextControl * _songArtist;
    BRTextControl * _albumTitle;
    BRTextControl * _trackInfo;
    BRTextControl * _duration;
    BRTextControl * _releaseDate;
    BRTextControl * _price;
    BRImageControl * _ratingImage;
    char _scrollingAllowed;
}

- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)setSongTitle:(BRMarqueeTextControl *)arg0;
- (void)setSongArtist:(BRTextControl *)arg0;
- (void)setAlbumTitle:(BRTextControl *)arg0;
- (NSDictionary *)_metadataMusicSongTitleAttributes;
- (NSDictionary *)_metadataMusicArtistAndAlbumAttributes;
- (NSDictionary *)_metadataMusicDetailsAttributes;
- (void)setScrollingAllowed:(char)arg0;
- (char)scrollingAllowed;
- (void)dealloc;
- (BRDetailedMusicMetadataControl *)init;
- (void)setDuration:(BRTextControl *)arg0;
- (NSString *)accessibilityLabel;
- (void)setRating:(WLKShowContentRating *)arg0;
- (void)setPrice:(BRTextControl *)arg0;
- (void)setReleaseDate:(BRTextControl *)arg0;
- (void)setTrackInfo:(BRTextControl *)arg0;

@end
