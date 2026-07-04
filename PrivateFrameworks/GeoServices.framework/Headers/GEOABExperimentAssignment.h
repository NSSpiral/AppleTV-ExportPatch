/* Runtime dump - GEOABExperimentAssignment
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOABExperimentAssignment : PBCodable <NSCopying>
{
    int _placeRequestType;
    NSString * _querySubstring;
    int _serviceType;
    struct ? _has;
}

@property (nonatomic) char hasServiceType;
@property (nonatomic) int serviceType;
@property (nonatomic) char hasPlaceRequestType;
@property (nonatomic) int placeRequestType;
@property (readonly, nonatomic) char hasQuerySubstring;
@property (retain, nonatomic) NSString * querySubstring;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOABExperimentAssignment *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)serviceType;
- (void)setPlaceRequestType:(int)arg0;
- (void)setHasPlaceRequestType:(char)arg0;
- (char)hasPlaceRequestType;
- (int)placeRequestType;
- (char)hasQuerySubstring;
- (NSString *)querySubstring;
- (void)setHasServiceType:(char)arg0;
- (char)hasServiceType;
- (void)setQuerySubstring:(NSString *)arg0;
- (void)setServiceType:(int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
