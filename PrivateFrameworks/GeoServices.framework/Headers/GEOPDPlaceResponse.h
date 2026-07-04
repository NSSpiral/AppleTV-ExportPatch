/* Runtime dump - GEOPDPlaceResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceResponse : PBCodable <NSCopying>
{
    GEOPDPlaceGlobalResult * _globalResult;
    NSMutableArray * _placeResults;
    int _requestType;
    int _status;
    struct ? _has;
}

@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (nonatomic) char hasRequestType;
@property (nonatomic) int requestType;
@property (readonly, nonatomic) char hasGlobalResult;
@property (retain, nonatomic) GEOPDPlaceGlobalResult * globalResult;
@property (retain, nonatomic) NSMutableArray * placeResults;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDPlaceResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setHasStatus:(char)arg0;
- (char)hasStatus;
- (void)setHasRequestType:(char)arg0;
- (char)hasRequestType;
- (NSMutableArray *)_disambiguationLabels;
- (void)setPlaceResults:(NSMutableArray *)arg0;
- (void)addPlaceResult:(NSObject *)arg0;
- (unsigned int)placeResultsCount;
- (void)clearPlaceResults;
- (NSObject *)placeResultAtIndex:(unsigned int)arg0;
- (NSMutableArray *)placeResults;
- (GEOPDPlaceResponse *)initWithGeocoderPlace:(CLGeocoder *)arg0;
- (char)hasGlobalResult;
- (GEOPDPlaceGlobalResult *)globalResult;
- (void)setGlobalResult:(GEOPDPlaceGlobalResult *)arg0;
- (void)setRequestType:(int)arg0;
- (int)requestType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
