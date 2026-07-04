/* Runtime dump - GEOETAResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAResponse : PBCodable <NSCopying>
{
    struct ? * _problemDetails;
    unsigned int _problemDetailsCount;
    unsigned int _problemDetailsSpace;
    NSMutableArray * _etaResults;
    GEOPlaceSearchResponse * _originPlaceSearchResponse;
    int _status;
    struct ? _has;
}

@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray * etaResults;
@property (readonly, nonatomic) char hasOriginPlaceSearchResponse;
@property (retain, nonatomic) GEOPlaceSearchResponse * originPlaceSearchResponse;
@property (readonly, nonatomic) unsigned int problemDetailsCount;
@property (readonly, nonatomic) struct ? * problemDetails;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOETAResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setHasStatus:(char)arg0;
- (char)hasStatus;
- (void)clearProblemDetails;
- (unsigned int)problemDetailsCount;
- (struct ?)problemDetailAtIndex:(SEL)arg0;
- (void)addProblemDetail:(struct ?)arg0;
- (struct ? *)problemDetails;
- (void)setProblemDetails:(struct ? *)arg0 count:(NSObject *)arg1;
- (void)setEtaResults:(NSMutableArray *)arg0;
- (void)setOriginPlaceSearchResponse:(GEOPlaceSearchResponse *)arg0;
- (void)addEtaResult:(NSObject *)arg0;
- (unsigned int)etaResultsCount;
- (void)clearEtaResults;
- (NSObject *)etaResultAtIndex:(unsigned int)arg0;
- (char)hasOriginPlaceSearchResponse;
- (NSMutableArray *)etaResults;
- (GEOPlaceSearchResponse *)originPlaceSearchResponse;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
