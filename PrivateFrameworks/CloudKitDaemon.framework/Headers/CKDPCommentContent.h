/* Runtime dump - CKDPCommentContent
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCommentContent : PBCodable <NSCopying>
{
    NSData * _comment;
    char _encrypted;
    struct ? _has;
}

@property (nonatomic) char hasEncrypted;
@property (nonatomic) char encrypted;
@property (readonly, nonatomic) char hasComment;
@property (retain, nonatomic) NSData * comment;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPCommentContent *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)encrypted;
- (void)setEncrypted:(char)arg0;
- (void)setHasEncrypted:(char)arg0;
- (char)hasEncrypted;
- (void)setComment:(NSData *)arg0;
- (char)hasComment;
- (NSData *)comment;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
