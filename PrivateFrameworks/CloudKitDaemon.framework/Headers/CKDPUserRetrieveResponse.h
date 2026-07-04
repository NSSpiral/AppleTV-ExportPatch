/* Runtime dump - CKDPUserRetrieveResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserRetrieveResponse : PBCodable <NSCopying>
{
    CKDPRecord * _user;
}

@property (readonly, nonatomic) char hasUser;
@property (retain, nonatomic) CKDPRecord * user;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPUserRetrieveResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (CKDPRecord *)user;
- (void)setUser:(CKDPRecord *)arg0;
- (char)hasUser;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
