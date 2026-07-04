/* Runtime dump - CKDPComment
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPComment : PBCodable <NSCopying>
{
    CKDPCommentContent * _commentContent;
    CKDPIdentifier * _commentId;
    CKDPDate * _createdAt;
    CKDPIdentifier * _from;
    CKDPLikeInfo * _likeInfo;
    NSString * _path;
}

@property (readonly, nonatomic) char hasCommentId;
@property (retain, nonatomic) CKDPIdentifier * commentId;
@property (readonly, nonatomic) char hasPath;
@property (retain, nonatomic) NSString * path;
@property (readonly, nonatomic) char hasCreatedAt;
@property (retain, nonatomic) CKDPDate * createdAt;
@property (readonly, nonatomic) char hasFrom;
@property (retain, nonatomic) CKDPIdentifier * from;
@property (readonly, nonatomic) char hasCommentContent;
@property (retain, nonatomic) CKDPCommentContent * commentContent;
@property (readonly, nonatomic) char hasLikeInfo;
@property (retain, nonatomic) CKDPLikeInfo * likeInfo;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)path;
- (CKDPComment *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPath:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)hasPath;
- (void)setCommentId:(CKDPIdentifier *)arg0;
- (char)hasCommentId;
- (CKDPIdentifier *)commentId;
- (void)setCommentContent:(CKDPCommentContent *)arg0;
- (char)hasCommentContent;
- (CKDPCommentContent *)commentContent;
- (void)setLikeInfo:(CKDPLikeInfo *)arg0;
- (char)hasLikeInfo;
- (CKDPLikeInfo *)likeInfo;
- (void)setCreatedAt:(CKDPDate *)arg0;
- (void)setFrom:(CKDPIdentifier *)arg0;
- (char)hasCreatedAt;
- (char)hasFrom;
- (CKDPIdentifier *)from;
- (CKDPDate *)createdAt;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
