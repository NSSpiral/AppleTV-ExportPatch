/* Runtime dump - CKDPCommentSummary
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCommentSummary : PBCodable <NSCopying>
{
    CKDPCommentedOnId * _identifier;
    CKDPLikeInfo * _likeInfo;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) CKDPCommentedOnId * identifier;
@property (readonly, nonatomic) char hasLikeInfo;
@property (retain, nonatomic) CKDPLikeInfo * likeInfo;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPCommentedOnId *)identifier;
- (CKDPCommentSummary *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(CKDPCommentedOnId *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)hasIdentifier;
- (void)setLikeInfo:(CKDPLikeInfo *)arg0;
- (char)hasLikeInfo;
- (CKDPLikeInfo *)likeInfo;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
