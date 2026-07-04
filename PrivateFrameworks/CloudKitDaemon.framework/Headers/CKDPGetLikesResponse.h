/* Runtime dump - CKDPGetLikesResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPGetLikesResponse : PBCodable <NSCopying>
{
    CKDPLikeInfo * _likeInfo;
    NSMutableArray * _likes;
}

@property (readonly, nonatomic) char hasLikeInfo;
@property (retain, nonatomic) CKDPLikeInfo * likeInfo;
@property (retain, nonatomic) NSMutableArray * likes;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPGetLikesResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setLikeInfo:(CKDPLikeInfo *)arg0;
- (char)hasLikeInfo;
- (CKDPLikeInfo *)likeInfo;
- (void)addLike:(id)arg0;
- (unsigned int)likesCount;
- (void)clearLikes;
- (NSObject *)likeAtIndex:(unsigned int)arg0;
- (NSMutableArray *)likes;
- (void)setLikes:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
