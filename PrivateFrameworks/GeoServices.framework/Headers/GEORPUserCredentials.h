/* Runtime dump - GEORPUserCredentials
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPUserCredentials : PBCodable <NSCopying>
{
    NSString * _icloudUserMapsAuthToken;
    NSString * _icloudUserPersonId;
}

@property (readonly, nonatomic) char hasIcloudUserPersonId;
@property (retain, nonatomic) NSString * icloudUserPersonId;
@property (readonly, nonatomic) char hasIcloudUserMapsAuthToken;
@property (retain, nonatomic) NSString * icloudUserMapsAuthToken;

+ (NSNumber *)_credentialsForPrimaryICloudAccount;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPUserCredentials *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setIcloudUserPersonId:(NSString *)arg0;
- (void)setIcloudUserMapsAuthToken:(NSString *)arg0;
- (char)hasIcloudUserPersonId;
- (char)hasIcloudUserMapsAuthToken;
- (NSString *)icloudUserPersonId;
- (NSString *)icloudUserMapsAuthToken;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
