/* Runtime dump - GEOPDComponent
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDComponent : PBCodable <NSCopying>
{
    double _timestampFirstSeen;
    GEOPDAttribution * _attribution;
    int _cacheControl;
    GEOPDSource * _source;
    int _startIndex;
    int _status;
    unsigned int _ttl;
    int _type;
    NSMutableArray * _values;
    int _valuesAvailable;
    unsigned int _version;
    NSMutableArray * _versionDomains;
    struct ? _has;
}

@property (nonatomic) char hasTimestampFirstSeen;
@property (nonatomic) double timestampFirstSeen;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (nonatomic) char hasTtl;
@property (nonatomic) unsigned int ttl;
@property (nonatomic) char hasStartIndex;
@property (nonatomic) int startIndex;
@property (nonatomic) char hasValuesAvailable;
@property (nonatomic) int valuesAvailable;
@property (readonly, nonatomic) char hasAttribution;
@property (retain, nonatomic) GEOPDAttribution * attribution;
@property (retain, nonatomic) NSMutableArray * values;
@property (retain, nonatomic) NSMutableArray * versionDomains;
@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) char hasSource;
@property (retain, nonatomic) GEOPDSource * source;
@property (nonatomic) char hasCacheControl;
@property (nonatomic) int cacheControl;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (GEOPDComponent *)copyWithZone:(struct _NSZone *)arg0;
- (void)setValues:(NSMutableArray *)arg0;
- (NSMutableArray *)values;
- (NSDictionary *)dictionaryRepresentation;
- (GEOPDSource *)source;
- (void)setSource:(GEOPDSource *)arg0;
- (void)setVersion:(unsigned int)arg0;
- (unsigned int)version;
- (void)addValue:(NSValue *)arg0;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setHasStatus:(char)arg0;
- (char)hasStatus;
- (char)hasSource;
- (void)setCacheControl:(int)arg0;
- (void)setHasCacheControl:(char)arg0;
- (char)hasCacheControl;
- (int)cacheControl;
- (unsigned int)ttl;
- (NSMutableArray *)versionDomains;
- (double)timestampFirstSeen;
- (char)hasAttribution;
- (GEOPDAttribution *)attribution;
- (char)hasTimestampFirstSeen;
- (void)setTimestampFirstSeen:(double)arg0;
- (char)hasStartIndex;
- (int)startIndex;
- (void)setAttribution:(GEOPDAttribution *)arg0;
- (void)setVersionDomains:(NSMutableArray *)arg0;
- (void)addVersionDomain:(NSString *)arg0;
- (unsigned int)valuesCount;
- (void)clearValues;
- (unsigned int)versionDomainsCount;
- (void)clearVersionDomains;
- (NSObject *)versionDomainAtIndex:(unsigned int)arg0;
- (void)setTtl:(unsigned int)arg0;
- (void)setHasTtl:(char)arg0;
- (char)hasTtl;
- (void)setStartIndex:(int)arg0;
- (void)setHasStartIndex:(char)arg0;
- (void)setValuesAvailable:(int)arg0;
- (void)setHasValuesAvailable:(char)arg0;
- (char)hasValuesAvailable;
- (int)valuesAvailable;
- (void)setHasTimestampFirstSeen:(char)arg0;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (NSObject *)valueAtIndex:(unsigned int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (void)setHasVersion:(char)arg0;
- (char)hasVersion;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
