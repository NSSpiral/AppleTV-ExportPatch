/* Runtime dump - GEOBatchRevGeocodeRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOBatchRevGeocodeRequest : PBRequest <NSCopying>
{
    struct ? _additionalPlaceTypes;
    NSMutableArray * _locations;
    NSMutableArray * _serviceTags;
    char _splitIntoClusters;
    struct ? _has;
}

@property (nonatomic) char hasSplitIntoClusters;
@property (nonatomic) char splitIntoClusters;
@property (retain, nonatomic) NSMutableArray * locations;
@property (readonly, nonatomic) unsigned int additionalPlaceTypesCount;
@property (readonly, nonatomic) int * additionalPlaceTypes;
@property (retain, nonatomic) NSMutableArray * serviceTags;

- (void)dealloc;
- (void)setLocations:(NSMutableArray *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOBatchRevGeocodeRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setServiceTags:(NSMutableArray *)arg0;
- (void)addServiceTag:(NSString *)arg0;
- (unsigned int)serviceTagsCount;
- (void)clearServiceTags;
- (NSObject *)serviceTagAtIndex:(unsigned int)arg0;
- (NSMutableArray *)serviceTags;
- (unsigned int)additionalPlaceTypesCount;
- (void)clearAdditionalPlaceTypes;
- (int)additionalPlaceTypeAtIndex:(unsigned int)arg0;
- (void)addAdditionalPlaceType:(int)arg0;
- (int *)additionalPlaceTypes;
- (void)setAdditionalPlaceTypes:(int *)arg0 count:(unsigned int)arg1;
- (unsigned int)locationsCount;
- (NSObject *)locationAtIndex:(unsigned int)arg0;
- (NSMutableArray *)locations;
- (void)addLocation:(NSObject *)arg0;
- (void)clearLocations;
- (char)splitIntoClusters;
- (void)setSplitIntoClusters:(char)arg0;
- (void)setHasSplitIntoClusters:(char)arg0;
- (char)hasSplitIntoClusters;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
