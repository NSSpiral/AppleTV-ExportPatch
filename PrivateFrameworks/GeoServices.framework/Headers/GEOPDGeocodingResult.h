/* Runtime dump - GEOPDGeocodingResult
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDGeocodingResult : PBCodable <NSCopying>
{
    NSMutableArray * _disambiguationLabels;
}

@property (retain, nonatomic) NSMutableArray * disambiguationLabels;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDGeocodingResult *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setDisambiguationLabels:(NSMutableArray *)arg0;
- (void)addDisambiguationLabel:(NSString *)arg0;
- (unsigned int)disambiguationLabelsCount;
- (void)clearDisambiguationLabels;
- (NSObject *)disambiguationLabelAtIndex:(unsigned int)arg0;
- (NSMutableArray *)disambiguationLabels;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
