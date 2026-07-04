/* Runtime dump - CKDPGetCommentResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPGetCommentResponse : PBCodable <NSCopying>
{
    CKDPComment * _comment;
}

@property (readonly, nonatomic) char hasComment;
@property (retain, nonatomic) CKDPComment * comment;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPGetCommentResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setComment:(CKDPComment *)arg0;
- (char)hasComment;
- (CKDPComment *)comment;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
