/* Runtime dump - CKDPDeleteCommentRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPDeleteCommentRequest : PBRequest <NSCopying>
{
    CKDPIdentifier * _commentId;
}

@property (readonly, nonatomic) char hasCommentId;
@property (retain, nonatomic) CKDPIdentifier * commentId;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPDeleteCommentRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setCommentId:(CKDPIdentifier *)arg0;
- (char)hasCommentId;
- (CKDPIdentifier *)commentId;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
