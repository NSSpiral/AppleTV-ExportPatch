/* Runtime dump - MIPPodcast
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPPodcast : PBCodable <NSCopying>
{
    MIPArtist * _artist;
    NSString * _externalGuid;
    NSString * _feedUrl;
    MIPSeries * _series;
}

@property (readonly, nonatomic) char hasArtist;
@property (retain, nonatomic) MIPArtist * artist;
@property (readonly, nonatomic) char hasSeries;
@property (retain, nonatomic) MIPSeries * series;
@property (readonly, nonatomic) char hasExternalGuid;
@property (retain, nonatomic) NSString * externalGuid;
@property (readonly, nonatomic) char hasFeedUrl;
@property (retain, nonatomic) NSString * feedUrl;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MIPPodcast *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setArtist:(MIPArtist *)arg0;
- (void)setSeries:(MIPSeries *)arg0;
- (char)hasArtist;
- (char)hasSeries;
- (MIPArtist *)artist;
- (MIPSeries *)series;
- (void)setExternalGuid:(NSString *)arg0;
- (void)setFeedUrl:(NSString *)arg0;
- (char)hasExternalGuid;
- (char)hasFeedUrl;
- (NSString *)externalGuid;
- (NSString *)feedUrl;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
