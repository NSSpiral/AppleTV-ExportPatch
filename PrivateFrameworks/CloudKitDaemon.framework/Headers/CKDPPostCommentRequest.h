/* Runtime dump - CKDPPostCommentRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPostCommentRequest : PBRequest <NSCopying>
{
    CKDPCommentContent * _commentContent;
    CKDPCommentedOnId * _identifier;
    NSString * _path;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) CKDPCommentedOnId * identifier;
@property (readonly, nonatomic) char hasPath;
@property (retain, nonatomic) NSString * path;
@property (readonly, nonatomic) char hasCommentContent;
@property (retain, nonatomic) CKDPCommentContent * commentContent;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPCommentedOnId *)identifier;
- (NSString *)path;
- (CKDPPostCommentRequest *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(CKDPCommentedOnId *)arg0;
- (void)setPath:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)hasPath;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (char)hasIdentifier;
- (void)setCommentContent:(CKDPCommentContent *)arg0;
- (char)hasCommentContent;
- (CKDPCommentContent *)commentContent;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
