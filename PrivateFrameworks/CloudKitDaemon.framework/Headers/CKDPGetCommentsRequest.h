/* Runtime dump - CKDPGetCommentsRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPGetCommentsRequest : PBRequest <NSCopying>
{
    NSData * _continuationMarker;
    CKDPCommentedOnId * _identifier;
    unsigned int _limit;
    CKDPQuerySort * _orderBy;
    NSString * _path;
    struct ? _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) CKDPCommentedOnId * identifier;
@property (readonly, nonatomic) char hasContinuationMarker;
@property (retain, nonatomic) NSData * continuationMarker;
@property (nonatomic) char hasLimit;
@property (nonatomic) unsigned int limit;
@property (readonly, nonatomic) char hasOrderBy;
@property (retain, nonatomic) CKDPQuerySort * orderBy;
@property (readonly, nonatomic) char hasPath;
@property (retain, nonatomic) NSString * path;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPCommentedOnId *)identifier;
- (NSString *)path;
- (CKDPGetCommentsRequest *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(CKDPCommentedOnId *)arg0;
- (void)setPath:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)hasPath;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (char)hasIdentifier;
- (void)setHasLimit:(char)arg0;
- (char)hasLimit;
- (void)setContinuationMarker:(NSData *)arg0;
- (char)hasContinuationMarker;
- (NSData *)continuationMarker;
- (void)setOrderBy:(CKDPQuerySort *)arg0;
- (char)hasOrderBy;
- (CKDPQuerySort *)orderBy;
- (unsigned int)limit;
- (void)setLimit:(unsigned int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
