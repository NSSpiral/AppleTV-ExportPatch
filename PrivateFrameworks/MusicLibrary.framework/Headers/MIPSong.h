/* Runtime dump - MIPSong
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPSong : PBCodable <NSCopying>
{
    long long _geniusId;
    MIPAlbum * _album;
    MIPArtist * _artist;
    int _audioFormat;
    MIPArtist * _composer;
    int _discNumber;
    MIPGenre * _genre;
    NSString * _lyrics;
    int _lyricsChecksum;
    MIPPlaybackInfo * _playbackInfo;
    int _trackNumber;
    int _userRating;
    char _excludeFromShuffle;
    char _hasVideo;
    struct ? _has;
}

@property (readonly, nonatomic) char hasAlbum;
@property (retain, nonatomic) MIPAlbum * album;
@property (readonly, nonatomic) char hasArtist;
@property (retain, nonatomic) MIPArtist * artist;
@property (readonly, nonatomic) char hasComposer;
@property (retain, nonatomic) MIPArtist * composer;
@property (readonly, nonatomic) char hasGenre;
@property (retain, nonatomic) MIPGenre * genre;
@property (nonatomic) char hasDiscNumber;
@property (nonatomic) int discNumber;
@property (nonatomic) char hasTrackNumber;
@property (nonatomic) int trackNumber;
@property (nonatomic) char hasUserRating;
@property (nonatomic) int userRating;
@property (nonatomic) char hasExcludeFromShuffle;
@property (nonatomic) char excludeFromShuffle;
@property (nonatomic) char hasGeniusId;
@property (nonatomic) long long geniusId;
@property (nonatomic) char hasAudioFormat;
@property (nonatomic) int audioFormat;
@property (nonatomic) char hasHasVideo;
@property (nonatomic) char hasVideo;
@property (readonly, nonatomic) char hasLyrics;
@property (retain, nonatomic) NSString * lyrics;
@property (readonly, nonatomic) char hasPlaybackInfo;
@property (retain, nonatomic) MIPPlaybackInfo * playbackInfo;
@property (nonatomic) char hasLyricsChecksum;
@property (nonatomic) int lyricsChecksum;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MIPSong *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setArtist:(MIPArtist *)arg0;
- (char)hasArtist;
- (MIPArtist *)artist;
- (void)setComposer:(MIPArtist *)arg0;
- (void)setGenre:(MIPGenre *)arg0;
- (void)setLyrics:(NSString *)arg0;
- (void)setPlaybackInfo:(MIPPlaybackInfo *)arg0;
- (char)hasAlbum;
- (char)hasComposer;
- (char)hasGenre;
- (void)setDiscNumber:(int)arg0;
- (void)setHasDiscNumber:(char)arg0;
- (char)hasDiscNumber;
- (void)setTrackNumber:(int)arg0;
- (void)setHasTrackNumber:(char)arg0;
- (char)hasTrackNumber;
- (void)setUserRating:(int)arg0;
- (void)setHasUserRating:(char)arg0;
- (char)hasUserRating;
- (void)setExcludeFromShuffle:(char)arg0;
- (void)setHasExcludeFromShuffle:(char)arg0;
- (char)hasExcludeFromShuffle;
- (void)setGeniusId:(long long)arg0;
- (void)setHasGeniusId:(char)arg0;
- (char)hasGeniusId;
- (void)setAudioFormat:(int)arg0;
- (void)setHasAudioFormat:(char)arg0;
- (char)hasAudioFormat;
- (void)setHasVideo:(char)arg0;
- (void)setHasHasVideo:(char)arg0;
- (char)hasHasVideo;
- (char)hasLyrics;
- (char)hasPlaybackInfo;
- (void)setLyricsChecksum:(int)arg0;
- (void)setHasLyricsChecksum:(char)arg0;
- (char)hasLyricsChecksum;
- (MIPArtist *)composer;
- (MIPGenre *)genre;
- (int)discNumber;
- (int)trackNumber;
- (int)userRating;
- (char)excludeFromShuffle;
- (long long)geniusId;
- (int)audioFormat;
- (char)hasVideo;
- (NSString *)lyrics;
- (MIPPlaybackInfo *)playbackInfo;
- (int)lyricsChecksum;
- (void)setAlbum:(MIPAlbum *)arg0;
- (MIPAlbum *)album;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
