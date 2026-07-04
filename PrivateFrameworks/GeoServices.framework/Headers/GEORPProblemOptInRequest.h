/* Runtime dump - GEORPProblemOptInRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemOptInRequest : PBRequest <NSCopying>
{
    NSData * _devicePushToken;
    NSString * _problemId;
    GEORPUserCredentials * _userCredentials;
    NSString * _userEmail;
    char _didOptIn;
    struct ? _has;
}

@property (readonly, nonatomic) char hasProblemId;
@property (retain, nonatomic) NSString * problemId;
@property (nonatomic) char hasDidOptIn;
@property (nonatomic) char didOptIn;
@property (readonly, nonatomic) char hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials * userCredentials;
@property (readonly, nonatomic) char hasDevicePushToken;
@property (retain, nonatomic) NSData * devicePushToken;
@property (readonly, nonatomic) char hasUserEmail;
@property (retain, nonatomic) NSString * userEmail;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPProblemOptInRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (NSString *)problemId;
- (GEORPProblemOptInRequest *)initWithSubmissionID:(NSObject *)arg0 allowNotificationsAtPushToken:(NSString *)arg1 allowContactBackAtEmailAddress:(NSString *)arg2 traits:(NSArray *)arg3;
- (void)setProblemId:(NSString *)arg0;
- (char)hasProblemId;
- (void)setUserCredentials:(GEORPUserCredentials *)arg0;
- (char)hasUserCredentials;
- (GEORPUserCredentials *)userCredentials;
- (void)setDevicePushToken:(NSData *)arg0;
- (void)setUserEmail:(NSString *)arg0;
- (void)setDidOptIn:(char)arg0;
- (void)setHasDidOptIn:(char)arg0;
- (char)hasDidOptIn;
- (char)hasDevicePushToken;
- (char)hasUserEmail;
- (char)didOptIn;
- (NSData *)devicePushToken;
- (NSString *)userEmail;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
