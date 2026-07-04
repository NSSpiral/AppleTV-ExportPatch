/* Runtime dump - GEOBatchRevGeocodeResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOBatchRevGeocodeResponse : PBCodable <NSCopying>
{
    double _timestamp;
    NSMutableArray * _batchPlaceResults;
    NSMutableArray * _clusters;
    int _statusCode;
    unsigned int _ttl;
    unsigned int _version;
    NSMutableArray * _versionDomains;
    struct ? _has;
}

@property (retain, nonatomic) NSDictionary * httpHeaders;
@property (nonatomic) char hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray * clusters;
@property (retain, nonatomic) NSMutableArray * batchPlaceResults;
@property (nonatomic) char hasTtl;
@property (nonatomic) unsigned int ttl;
@property (retain, nonatomic) NSMutableArray * versionDomains;
@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (double)timestamp;
- (void)setTimestamp:(double)arg0;
- (GEOBatchRevGeocodeResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)statusCode;
- (void)setVersion:(unsigned int)arg0;
- (unsigned int)version;
- (char)hasTimestamp;
- (NSDictionary *)httpHeaders;
- (void)setHttpHeaders:(NSDictionary *)arg0;
- (void)setHasTimestamp:(char)arg0;
- (unsigned int)ttl;
- (NSMutableArray *)versionDomains;
- (unsigned int)batchPlaceResultsCount;
- (NSMutableArray *)batchPlaceResults;
- (void)setStatusCode:(int)arg0;
- (void)setHasStatusCode:(char)arg0;
- (char)hasStatusCode;
- (void)setVersionDomains:(NSMutableArray *)arg0;
- (void)addVersionDomain:(NSString *)arg0;
- (unsigned int)versionDomainsCount;
- (void)clearVersionDomains;
- (NSObject *)versionDomainAtIndex:(unsigned int)arg0;
- (void)setTtl:(unsigned int)arg0;
- (void)setHasTtl:(char)arg0;
- (char)hasTtl;
- (void)setClusters:(NSMutableArray *)arg0;
- (void)setBatchPlaceResults:(NSMutableArray *)arg0;
- (void)addCluster:(MPCluster *)arg0;
- (void)addBatchPlaceResult:(NSObject *)arg0;
- (unsigned int)clustersCount;
- (void)clearClusters;
- (NSObject *)clusterAtIndex:(unsigned int)arg0;
- (void)clearBatchPlaceResults;
- (NSObject *)batchPlaceResultAtIndex:(unsigned int)arg0;
- (NSMutableArray *)clusters;
- (void)mergeFrom:(NSObject *)arg0;
- (void)setHasVersion:(char)arg0;
- (char)hasVersion;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
