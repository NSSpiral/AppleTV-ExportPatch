/* Runtime dump - CKDPGetCommentRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPGetCommentRequest : PBRequest <NSCopying>
{
    CKDPIdentifier * _commentId;
}

@property (readonly, nonatomic) char hasCommentId;
@property (retain, nonatomic) CKDPIdentifier * commentId;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPGetCommentRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setCommentId:(CKDPIdentifier *)arg0;
- (char)hasCommentId;
- (CKDPIdentifier *)commentId;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
