/* Runtime dump - GEORPProblemStatusRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemStatusRequest : PBRequest <NSCopying>
{
    NSMutableArray * _problemIds;
    NSString * _statusNotificationId;
    GEORPUserCredentials * _userCredentials;
}

@property (readonly, nonatomic) char hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials * userCredentials;
@property (readonly, nonatomic) char hasStatusNotificationId;
@property (retain, nonatomic) NSString * statusNotificationId;
@property (retain, nonatomic) NSMutableArray * problemIds;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPProblemStatusRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setUserCredentials:(GEORPUserCredentials *)arg0;
- (char)hasUserCredentials;
- (GEORPUserCredentials *)userCredentials;
- (void)setStatusNotificationId:(NSString *)arg0;
- (void)setProblemIds:(NSMutableArray *)arg0;
- (void)addProblemId:(NSObject *)arg0;
- (unsigned int)problemIdsCount;
- (void)clearProblemIds;
- (NSObject *)problemIdAtIndex:(unsigned int)arg0;
- (char)hasStatusNotificationId;
- (NSString *)statusNotificationId;
- (NSMutableArray *)problemIds;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
