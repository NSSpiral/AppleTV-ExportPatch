/* Runtime dump - CKDPUnlikeRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUnlikeRequest : PBRequest <NSCopying>
{
    CKDPLikedId * _identifier;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) CKDPLikedId * identifier;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPLikedId *)identifier;
- (CKDPUnlikeRequest *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(CKDPLikedId *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (char)hasIdentifier;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
