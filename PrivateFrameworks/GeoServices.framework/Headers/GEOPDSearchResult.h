/* Runtime dump - GEOPDSearchResult
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchResult : PBCodable <NSCopying>
{
    NSMutableArray * _disambiguationLabels;
    GEOMapRegion * _displayMapRegion;
}

@property (readonly, nonatomic) char hasDisplayMapRegion;
@property (retain, nonatomic) GEOMapRegion * displayMapRegion;
@property (retain, nonatomic) NSMutableArray * disambiguationLabels;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDSearchResult *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setDisplayMapRegion:(GEOMapRegion *)arg0;
- (void)setDisambiguationLabels:(NSMutableArray *)arg0;
- (void)addDisambiguationLabel:(NSString *)arg0;
- (unsigned int)disambiguationLabelsCount;
- (void)clearDisambiguationLabels;
- (NSObject *)disambiguationLabelAtIndex:(unsigned int)arg0;
- (char)hasDisplayMapRegion;
- (GEOMapRegion *)displayMapRegion;
- (NSMutableArray *)disambiguationLabels;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
