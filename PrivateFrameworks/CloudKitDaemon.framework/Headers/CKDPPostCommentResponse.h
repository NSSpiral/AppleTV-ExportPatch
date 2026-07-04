/* Runtime dump - CKDPPostCommentResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPostCommentResponse : PBCodable <NSCopying>
{
    CKDPIdentifier * _commentId;
}

@property (readonly, nonatomic) char hasCommentId;
@property (retain, nonatomic) CKDPIdentifier * commentId;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPPostCommentResponse *)copyWithZone:(struct _NSZone *)arg0;
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
