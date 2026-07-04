/* Runtime dump - GEORPProblemNotificationAvailabilityRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemNotificationAvailabilityRequest : PBRequest <NSCopying>
{
    struct ? _businessIds;
    struct ? _problemTypes;
    GEOClientCapabilities * _clientCapabilities;
    NSString * _countryCode;
    NSData * _devicePushToken;
    int _pinType;
    int _placeType;
    struct ? _has;
}

@property (readonly, nonatomic) unsigned int problemTypesCount;
@property (readonly, nonatomic) int * problemTypes;
@property (readonly, nonatomic) char hasCountryCode;
@property (retain, nonatomic) NSString * countryCode;
@property (readonly, nonatomic) char hasDevicePushToken;
@property (retain, nonatomic) NSData * devicePushToken;
@property (readonly, nonatomic) char hasClientCapabilities;
@property (retain, nonatomic) GEOClientCapabilities * clientCapabilities;
@property (readonly, nonatomic) unsigned int businessIdsCount;
@property (readonly, nonatomic) unsigned long long * businessIds;
@property (nonatomic) char hasPlaceType;
@property (nonatomic) int placeType;
@property (nonatomic) char hasPinType;
@property (nonatomic) int pinType;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPProblemNotificationAvailabilityRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setClientCapabilities:(GEOClientCapabilities *)arg0;
- (char)hasClientCapabilities;
- (GEOClientCapabilities *)clientCapabilities;
- (void)setPinType:(int)arg0;
- (void)setHasPinType:(char)arg0;
- (char)hasPinType;
- (int)pinType;
- (void)setPlaceType:(int)arg0;
- (void)setHasPlaceType:(char)arg0;
- (char)hasPlaceType;
- (void)setDevicePushToken:(NSData *)arg0;
- (char)hasDevicePushToken;
- (NSData *)devicePushToken;
- (unsigned int)problemTypesCount;
- (void)clearProblemTypes;
- (int)problemTypeAtIndex:(unsigned int)arg0;
- (void)addProblemType:(int)arg0;
- (unsigned int)businessIdsCount;
- (void)clearBusinessIds;
- (unsigned long long)businessIdAtIndex:(unsigned int)arg0;
- (void)addBusinessId:(unsigned long long)arg0;
- (int *)problemTypes;
- (void)setProblemTypes:(int *)arg0 count:(unsigned int)arg1;
- (unsigned long long *)businessIds;
- (void)setBusinessIds:(unsigned long long *)arg0 count:(unsigned int)arg1;
- (void)setCountryCode:(NSString *)arg0;
- (char)hasCountryCode;
- (int)placeType;
- (NSString *)countryCode;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
