/* Runtime dump - CKDPGetLikesRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPGetLikesRequest : PBRequest <NSCopying>
{
    CKDPLikedId * _identifier;
    unsigned int _limit;
    struct ? _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) CKDPLikedId * identifier;
@property (nonatomic) char hasLimit;
@property (nonatomic) unsigned int limit;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPLikedId *)identifier;
- (CKDPGetLikesRequest *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(CKDPLikedId *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (char)hasIdentifier;
- (void)setHasLimit:(char)arg0;
- (char)hasLimit;
- (unsigned int)limit;
- (void)setLimit:(unsigned int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
