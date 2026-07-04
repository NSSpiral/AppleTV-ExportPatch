/* Runtime dump - GEORPPhotoWithMetadata
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPPhotoWithMetadata : PBCodable <NSCopying>
{
    double _creationDate;
    double _geotagHorizontalAccuracy;
    double _geotagTimestamp;
    NSData * _data;
    GEOLatLng * _geotagCoordinate;
    struct ? _has;
}

@property (readonly, nonatomic) char hasData;
@property (retain, nonatomic) NSData * data;
@property (nonatomic) char hasCreationDate;
@property (nonatomic) double creationDate;
@property (readonly, nonatomic) char hasGeotagCoordinate;
@property (retain, nonatomic) GEOLatLng * geotagCoordinate;
@property (nonatomic) char hasGeotagHorizontalAccuracy;
@property (nonatomic) double geotagHorizontalAccuracy;
@property (nonatomic) char hasGeotagTimestamp;
@property (nonatomic) double geotagTimestamp;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPPhotoWithMetadata *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (double)creationDate;
- (char)hasData;
- (void)setGeotagCoordinate:(GEOLatLng *)arg0;
- (void)setHasCreationDate:(char)arg0;
- (char)hasCreationDate;
- (char)hasGeotagCoordinate;
- (void)setGeotagHorizontalAccuracy:(double)arg0;
- (void)setHasGeotagHorizontalAccuracy:(char)arg0;
- (char)hasGeotagHorizontalAccuracy;
- (void)setGeotagTimestamp:(double)arg0;
- (void)setHasGeotagTimestamp:(char)arg0;
- (char)hasGeotagTimestamp;
- (GEOLatLng *)geotagCoordinate;
- (double)geotagHorizontalAccuracy;
- (double)geotagTimestamp;
- (void)setCreationDate:(double)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
