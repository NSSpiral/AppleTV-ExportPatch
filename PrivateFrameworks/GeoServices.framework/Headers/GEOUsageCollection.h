/* Runtime dump - GEOUsageCollection
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUsageCollection : PBCodable <NSCopying>
{
    struct ? _sessionID;
    struct ? * _tileUsages;
    unsigned int _tileUsagesCount;
    unsigned int _tileUsagesSpace;
    double _timestamp;
    int _cellWifi;
    NSString * _countryCode;
    int _geoService;
    NSString * _hwMachine;
    int _placeRequestType;
    int _requestDataSize;
    int _responseDataSize;
    int _responseTime;
    char _sessionIDIsPersistent;
    struct ? _has;
}

@property (nonatomic) char hasGeoService;
@property (nonatomic) int geoService;
@property (nonatomic) char hasRequestDataSize;
@property (nonatomic) int requestDataSize;
@property (nonatomic) char hasResponseDataSize;
@property (nonatomic) int responseDataSize;
@property (nonatomic) char hasResponseTime;
@property (nonatomic) int responseTime;
@property (nonatomic) char hasCellWifi;
@property (nonatomic) int cellWifi;
@property (readonly, nonatomic) char hasCountryCode;
@property (retain, nonatomic) NSString * countryCode;
@property (nonatomic) char hasSessionID;
@property (nonatomic) struct ? sessionID;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) unsigned int tileUsagesCount;
@property (readonly, nonatomic) struct ? * tileUsages;
@property (readonly, nonatomic) char hasHwMachine;
@property (retain, nonatomic) NSString * hwMachine;
@property (nonatomic) char hasSessionIDIsPersistent;
@property (nonatomic) char sessionIDIsPersistent;
@property (nonatomic) char hasPlaceRequestType;
@property (nonatomic) int placeRequestType;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (double)timestamp;
- (void)setTimestamp:(double)arg0;
- (GEOUsageCollection *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasTimestamp;
- (struct ?)sessionID;
- (void)setSessionID:(struct ?)arg0;
- (void)setHasSessionID:(char)arg0;
- (char)hasSessionID;
- (void)setHasTimestamp:(char)arg0;
- (void)setHwMachine:(NSString *)arg0;
- (void)setGeoService:(int)arg0;
- (void)setRequestDataSize:(int)arg0;
- (void)setResponseDataSize:(int)arg0;
- (void)setResponseTime:(int)arg0;
- (void)setCellWifi:(int)arg0;
- (void)setPlaceRequestType:(int)arg0;
- (void)setSessionIDIsPersistent:(char)arg0;
- (void)addTileUsage:(struct ?)arg0;
- (void)clearTileUsages;
- (unsigned int)tileUsagesCount;
- (struct ?)tileUsageAtIndex:(SEL)arg0;
- (void)setHasGeoService:(char)arg0;
- (char)hasGeoService;
- (void)setHasRequestDataSize:(char)arg0;
- (char)hasRequestDataSize;
- (void)setHasResponseDataSize:(char)arg0;
- (char)hasResponseDataSize;
- (void)setHasResponseTime:(char)arg0;
- (char)hasResponseTime;
- (void)setHasCellWifi:(char)arg0;
- (char)hasCellWifi;
- (struct ? *)tileUsages;
- (void)setTileUsages:(struct ? *)arg0 count:(NSObject *)arg1;
- (char)hasHwMachine;
- (char)sessionIDIsPersistent;
- (void)setHasSessionIDIsPersistent:(char)arg0;
- (char)hasSessionIDIsPersistent;
- (void)setHasPlaceRequestType:(char)arg0;
- (char)hasPlaceRequestType;
- (int)geoService;
- (int)requestDataSize;
- (int)responseDataSize;
- (int)responseTime;
- (int)cellWifi;
- (NSString *)hwMachine;
- (int)placeRequestType;
- (void)setCountryCode:(NSString *)arg0;
- (char)hasCountryCode;
- (NSString *)countryCode;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
