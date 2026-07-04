/* Runtime dump - GEORPResolution
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPResolution : PBCodable <NSCopying>
{
    double _resolutionDate;
    GEOMapRegion * _displayRegion;
    NSString * _localizedAlertText;
    NSMutableArray * _localizedChangeLists;
    NSString * _localizedDescription;
    NSMutableArray * _updatedPlaces;
    struct ? _has;
}

@property (nonatomic) char hasResolutionDate;
@property (nonatomic) double resolutionDate;
@property (readonly, nonatomic) char hasDisplayRegion;
@property (retain, nonatomic) GEOMapRegion * displayRegion;
@property (retain, nonatomic) NSMutableArray * localizedChangeLists;
@property (retain, nonatomic) NSMutableArray * updatedPlaces;
@property (readonly, nonatomic) char hasLocalizedDescription;
@property (retain, nonatomic) NSString * localizedDescription;
@property (readonly, nonatomic) char hasLocalizedAlertText;
@property (retain, nonatomic) NSString * localizedAlertText;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPResolution *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)localizedDescription;
- (NSDictionary *)dictionaryRepresentation;
- (NSMutableArray *)updatedPlaces;
- (void)setDisplayRegion:(GEOMapRegion *)arg0;
- (void)setLocalizedChangeLists:(NSMutableArray *)arg0;
- (void)setUpdatedPlaces:(NSMutableArray *)arg0;
- (void)setLocalizedAlertText:(NSString *)arg0;
- (void)addLocalizedChangeList:(NSArray *)arg0;
- (void)addUpdatedPlace:(id)arg0;
- (unsigned int)localizedChangeListsCount;
- (void)clearLocalizedChangeLists;
- (NSObject *)localizedChangeListAtIndex:(unsigned int)arg0;
- (unsigned int)updatedPlacesCount;
- (void)clearUpdatedPlaces;
- (NSObject *)updatedPlaceAtIndex:(unsigned int)arg0;
- (void)setResolutionDate:(double)arg0;
- (void)setHasResolutionDate:(char)arg0;
- (char)hasResolutionDate;
- (char)hasDisplayRegion;
- (char)hasLocalizedDescription;
- (char)hasLocalizedAlertText;
- (double)resolutionDate;
- (GEOMapRegion *)displayRegion;
- (NSMutableArray *)localizedChangeLists;
- (NSString *)localizedAlertText;
- (void)setLocalizedDescription:(NSString *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
