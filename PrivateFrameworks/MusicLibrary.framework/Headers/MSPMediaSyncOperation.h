/* Runtime dump - MSPMediaSyncOperation
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MSPMediaSyncOperation : PBCodable <NSCopying>
{
    MIPAlbum * _album;
    MIPArtist * _artist;
    MIPGenre * _genre;
    MIPMediaItem * _mediaItem;
    MIPMultiverseIdentifier * _multiverseId;
    int _operationType;
    MIPPlaylist * _playlist;
    MIPSeries * _series;
    struct ? _has;
}

@property (nonatomic) char hasOperationType;
@property (nonatomic) int operationType;
@property (readonly, nonatomic) char hasMultiverseId;
@property (retain, nonatomic) MIPMultiverseIdentifier * multiverseId;
@property (readonly, nonatomic) char hasArtist;
@property (retain, nonatomic) MIPArtist * artist;
@property (readonly, nonatomic) char hasAlbum;
@property (retain, nonatomic) MIPAlbum * album;
@property (readonly, nonatomic) char hasGenre;
@property (retain, nonatomic) MIPGenre * genre;
@property (readonly, nonatomic) char hasSeries;
@property (retain, nonatomic) MIPSeries * series;
@property (readonly, nonatomic) char hasMediaItem;
@property (retain, nonatomic) MIPMediaItem * mediaItem;
@property (readonly, nonatomic) char hasPlaylist;
@property (retain, nonatomic) MIPPlaylist * playlist;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MSPMediaSyncOperation *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setArtist:(MIPArtist *)arg0;
- (void)setSeries:(MIPSeries *)arg0;
- (char)hasArtist;
- (char)hasSeries;
- (MIPArtist *)artist;
- (MIPSeries *)series;
- (void)setGenre:(MIPGenre *)arg0;
- (char)hasAlbum;
- (char)hasGenre;
- (MIPGenre *)genre;
- (void)setMultiverseId:(MIPMultiverseIdentifier *)arg0;
- (void)setMediaItem:(MIPMediaItem *)arg0;
- (void)setPlaylist:(MIPPlaylist *)arg0;
- (void)setOperationType:(int)arg0;
- (void)setHasOperationType:(char)arg0;
- (char)hasOperationType;
- (char)hasMultiverseId;
- (char)hasMediaItem;
- (char)hasPlaylist;
- (int)operationType;
- (MIPMultiverseIdentifier *)multiverseId;
- (MIPMediaItem *)mediaItem;
- (MIPPlaylist *)playlist;
- (void)setAlbum:(MIPAlbum *)arg0;
- (MIPAlbum *)album;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
