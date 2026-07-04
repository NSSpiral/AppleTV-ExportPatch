/* Runtime dump - CKDPUserQueryResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserQueryResponse : PBCodable <NSCopying>
{
    CKDPUser * _user;
}

@property (readonly, nonatomic) char hasUser;
@property (retain, nonatomic) CKDPUser * user;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPUserQueryResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (CKDPUser *)user;
- (void)setUser:(CKDPUser *)arg0;
- (char)hasUser;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
