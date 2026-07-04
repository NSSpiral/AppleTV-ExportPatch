/* Runtime dump - GEORPProblemCollectionRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemCollectionRequest : PBRequest <NSCopying>
{
    NSString * _countryCode;
    NSData * _devicePushToken;
    NSString * _hwMachine;
    NSString * _inputLanguage;
    NSString * _osRelease;
    NSMutableArray * _requestElements;
    GEORPUserCredentials * _userCredentials;
    NSString * _userEmail;
    GEOLocation * _userLocation;
}

@property (retain, nonatomic) NSMutableArray * requestElements;
@property (readonly, nonatomic) char hasHwMachine;
@property (retain, nonatomic) NSString * hwMachine;
@property (readonly, nonatomic) char hasOsRelease;
@property (retain, nonatomic) NSString * osRelease;
@property (readonly, nonatomic) char hasCountryCode;
@property (retain, nonatomic) NSString * countryCode;
@property (readonly, nonatomic) char hasInputLanguage;
@property (retain, nonatomic) NSString * inputLanguage;
@property (readonly, nonatomic) char hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials * userCredentials;
@property (readonly, nonatomic) char hasDevicePushToken;
@property (retain, nonatomic) NSData * devicePushToken;
@property (readonly, nonatomic) char hasUserEmail;
@property (retain, nonatomic) NSString * userEmail;
@property (readonly, nonatomic) char hasUserLocation;
@property (retain, nonatomic) GEOLocation * userLocation;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPProblemCollectionRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setUserLocation:(GEOLocation *)arg0;
- (char)hasUserLocation;
- (GEOLocation *)userLocation;
- (void)setRequestElements:(NSMutableArray *)arg0;
- (unsigned int)requestElementsCount;
- (void)clearRequestElements;
- (NSMutableArray *)requestElements;
- (void)setInputLanguage:(NSString *)arg0;
- (char)hasInputLanguage;
- (NSString *)inputLanguage;
- (void)setHwMachine:(NSString *)arg0;
- (char)hasHwMachine;
- (NSString *)hwMachine;
- (void)setUserCredentials:(GEORPUserCredentials *)arg0;
- (char)hasUserCredentials;
- (GEORPUserCredentials *)userCredentials;
- (void)setDevicePushToken:(NSData *)arg0;
- (void)setUserEmail:(NSString *)arg0;
- (char)hasDevicePushToken;
- (char)hasUserEmail;
- (NSData *)devicePushToken;
- (NSString *)userEmail;
- (void)setOsRelease:(NSString *)arg0;
- (void)addRequestElement:(NSObject *)arg0;
- (NSObject *)requestElementAtIndex:(unsigned int)arg0;
- (char)hasOsRelease;
- (NSString *)osRelease;
- (void)setCountryCode:(NSString *)arg0;
- (char)hasCountryCode;
- (NSString *)countryCode;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
