/* Runtime dump - CKDPLikedId
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPLikedId : PBCodable <NSCopying>
{
    CKDPIdentifier * _commentIdentifier;
    NSData * _itemId;
    CKDPShareIdentifier * _shareIdentifier;
}

@property (readonly, nonatomic) char hasShareIdentifier;
@property (retain, nonatomic) CKDPShareIdentifier * shareIdentifier;
@property (readonly, nonatomic) char hasCommentIdentifier;
@property (retain, nonatomic) CKDPIdentifier * commentIdentifier;
@property (readonly, nonatomic) char hasItemId;
@property (retain, nonatomic) NSData * itemId;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPLikedId *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setShareIdentifier:(CKDPShareIdentifier *)arg0;
- (char)hasShareIdentifier;
- (CKDPShareIdentifier *)shareIdentifier;
- (void)setCommentIdentifier:(CKDPIdentifier *)arg0;
- (void)setItemId:(NSData *)arg0;
- (char)hasCommentIdentifier;
- (char)hasItemId;
- (CKDPIdentifier *)commentIdentifier;
- (NSData *)itemId;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
