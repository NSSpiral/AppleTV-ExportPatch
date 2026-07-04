/* Runtime dump - MIPTVShow
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPTVShow : PBCodable <NSCopying>
{
    MIPArtist * _artist;
    NSString * _episodeId;
    NSString * _episodeSortId;
    NSString * _networkName;
    int _seasonNumber;
    MIPSeries * _series;
    int _videoQuality;
    struct ? _has;
}

@property (readonly, nonatomic) char hasArtist;
@property (retain, nonatomic) MIPArtist * artist;
@property (readonly, nonatomic) char hasSeries;
@property (retain, nonatomic) MIPSeries * series;
@property (nonatomic) char hasSeasonNumber;
@property (nonatomic) int seasonNumber;
@property (readonly, nonatomic) char hasEpisodeId;
@property (retain, nonatomic) NSString * episodeId;
@property (readonly, nonatomic) char hasEpisodeSortId;
@property (retain, nonatomic) NSString * episodeSortId;
@property (nonatomic) char hasVideoQuality;
@property (nonatomic) int videoQuality;
@property (readonly, nonatomic) char hasNetworkName;
@property (retain, nonatomic) NSString * networkName;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MIPTVShow *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)videoQuality;
- (void)setVideoQuality:(int)arg0;
- (void).cxx_destruct;
- (void)setArtist:(MIPArtist *)arg0;
- (void)setSeries:(MIPSeries *)arg0;
- (void)setEpisodeId:(NSString *)arg0;
- (void)setEpisodeSortId:(NSString *)arg0;
- (void)setNetworkName:(NSString *)arg0;
- (char)hasArtist;
- (char)hasSeries;
- (void)setSeasonNumber:(int)arg0;
- (void)setHasSeasonNumber:(char)arg0;
- (char)hasSeasonNumber;
- (char)hasEpisodeId;
- (char)hasEpisodeSortId;
- (void)setHasVideoQuality:(char)arg0;
- (char)hasVideoQuality;
- (char)hasNetworkName;
- (MIPArtist *)artist;
- (MIPSeries *)series;
- (int)seasonNumber;
- (NSString *)episodeId;
- (NSString *)episodeSortId;
- (NSString *)networkName;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
