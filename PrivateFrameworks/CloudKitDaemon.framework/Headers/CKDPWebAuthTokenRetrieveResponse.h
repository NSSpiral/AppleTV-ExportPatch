/* Runtime dump - CKDPWebAuthTokenRetrieveResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPWebAuthTokenRetrieveResponse : PBCodable <NSCopying>
{
    NSString * _token;
}

@property (readonly, nonatomic) char hasToken;
@property (retain, nonatomic) NSString * token;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPWebAuthTokenRetrieveResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSString *)token;
- (void)setToken:(NSString *)arg0;
- (char)hasToken;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
