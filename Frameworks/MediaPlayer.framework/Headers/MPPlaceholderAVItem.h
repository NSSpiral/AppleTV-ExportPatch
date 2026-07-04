/* Runtime dump - MPPlaceholderAVItem
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaceholderAVItem : MPAVItem
{
    NSString * _album;
    NSString * _artist;
    double _durationFromExternalMetadata;
    char _explicitTrack;
    char _likeStateEnabled;
    NSString * _mainTitle;
    char _supportsLikedState;
}

@property (retain, nonatomic) NSString * album;
@property (retain, nonatomic) NSString * artist;
@property (nonatomic) double durationFromExternalMetadata;
@property (nonatomic) char explicitTrack;
@property (nonatomic) char likedStateEnabled;
@property (retain, nonatomic) NSString * mainTitle;
@property (nonatomic) char supportsLikedState;

- (void)loadAssetAndPlayerItem;
- (double)durationFromExternalMetadata;
- (char)isValidPlayerSubstituteForItem:(NSObject *)arg0;
- (char)isExplicitTrack;
- (NSString *)mainTitle;
- (char)supportsSkip;
- (char)supportsSettingCurrentTime;
- (char)isLikedStateEnabled;
- (char)supportsLikedState;
- (void)setDurationFromExternalMetadata:(double)arg0;
- (void)setExplicitTrack:(char)arg0;
- (void)setLikedStateEnabled:(char)arg0;
- (void)setMainTitle:(NSString *)arg0;
- (void)setSupportsLikedState:(char)arg0;
- (void).cxx_destruct;
- (void)setArtist:(NSString *)arg0;
- (NSString *)artist;
- (void)setAlbum:(NSString *)arg0;
- (NSString *)album;

@end
