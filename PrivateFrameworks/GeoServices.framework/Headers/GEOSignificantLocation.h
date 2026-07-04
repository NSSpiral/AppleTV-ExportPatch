/* Runtime dump - GEOSignificantLocation
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSignificantLocation : PBCodable <NSCopying>
{
    double _confidence;
    NSString * _identifier;
    GEOLocation * _location;
    unsigned int _locationIndex;
    unsigned int _numberOfVisitsBucket;
    struct ? _has;
}

@property (readonly, nonatomic) char hasLocation;
@property (retain, nonatomic) GEOLocation * location;
@property (nonatomic) char hasLocationIndex;
@property (nonatomic) unsigned int locationIndex;
@property (nonatomic) char hasNumberOfVisitsBucket;
@property (nonatomic) unsigned int numberOfVisitsBucket;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString * identifier;
@property (nonatomic) char hasConfidence;
@property (nonatomic) double confidence;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)identifier;
- (GEOSignificantLocation *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (GEOLocation *)location;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasIdentifier;
- (void)setLocationIndex:(unsigned int)arg0;
- (void)setHasLocationIndex:(char)arg0;
- (char)hasLocationIndex;
- (void)setNumberOfVisitsBucket:(unsigned int)arg0;
- (void)setHasNumberOfVisitsBucket:(char)arg0;
- (char)hasNumberOfVisitsBucket;
- (void)setConfidence:(double)arg0;
- (void)setHasConfidence:(char)arg0;
- (char)hasConfidence;
- (unsigned int)locationIndex;
- (unsigned int)numberOfVisitsBucket;
- (double)confidence;
- (void)setLocation:(GEOLocation *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasLocation;

@end
