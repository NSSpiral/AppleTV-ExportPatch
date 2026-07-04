/* Runtime dump - CKDPGetCommentsResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPGetCommentsResponse : PBCodable <NSCopying>
{
    NSMutableArray * _comments;
    NSData * _continuationMarker;
    CKDPCommentSummary * _summary;
    int _totalCount;
    struct ? _has;
}

@property (nonatomic) char hasTotalCount;
@property (nonatomic) int totalCount;
@property (readonly, nonatomic) char hasContinuationMarker;
@property (retain, nonatomic) NSData * continuationMarker;
@property (readonly, nonatomic) char hasSummary;
@property (retain, nonatomic) CKDPCommentSummary * summary;
@property (retain, nonatomic) NSMutableArray * comments;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPGetCommentsResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (int)totalCount;
- (void)setContinuationMarker:(NSData *)arg0;
- (char)hasContinuationMarker;
- (NSData *)continuationMarker;
- (void)addComments:(id)arg0;
- (unsigned int)commentsCount;
- (void)clearComments;
- (NSObject *)commentsAtIndex:(unsigned int)arg0;
- (void)setTotalCount:(int)arg0;
- (void)setHasTotalCount:(char)arg0;
- (char)hasTotalCount;
- (char)hasSummary;
- (NSMutableArray *)comments;
- (void)setComments:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (CKDPCommentSummary *)summary;
- (void)setSummary:(CKDPCommentSummary *)arg0;

@end
