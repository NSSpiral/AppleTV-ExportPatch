/* Runtime dump - CKDPLikeInfo
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPLikeInfo : PBCodable <NSCopying>
{
    int _likeCount;
    char _likedByCurrentUser;
    struct ? _has;
}

@property (nonatomic) char hasLikeCount;
@property (nonatomic) int likeCount;
@property (nonatomic) char hasLikedByCurrentUser;
@property (nonatomic) char likedByCurrentUser;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPLikeInfo *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setLikeCount:(int)arg0;
- (void)setHasLikeCount:(char)arg0;
- (char)hasLikeCount;
- (void)setLikedByCurrentUser:(char)arg0;
- (void)setHasLikedByCurrentUser:(char)arg0;
- (char)hasLikedByCurrentUser;
- (int)likeCount;
- (char)likedByCurrentUser;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
