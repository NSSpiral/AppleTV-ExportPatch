/* Runtime dump - GEOPDReview
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDReview : PBCodable <NSCopying>
{
    double _reviewTime;
    GEOPDRating * _rating;
    NSString * _reviewId;
    GEOPDUser * _reviewer;
    NSMutableArray * _snippets;
    struct ? _has;
}

@property (retain, nonatomic) NSMutableArray * snippets;
@property (nonatomic) char hasReviewTime;
@property (nonatomic) double reviewTime;
@property (readonly, nonatomic) char hasReviewer;
@property (retain, nonatomic) GEOPDUser * reviewer;
@property (readonly, nonatomic) char hasReviewId;
@property (retain, nonatomic) NSString * reviewId;
@property (readonly, nonatomic) char hasRating;
@property (retain, nonatomic) GEOPDRating * rating;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDReview *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setReviewer:(GEOPDUser *)arg0;
- (void)setReviewTime:(double)arg0;
- (void)setHasReviewTime:(char)arg0;
- (char)hasReviewTime;
- (char)hasReviewer;
- (double)reviewTime;
- (GEOPDUser *)reviewer;
- (char)hasRating;
- (GEOPDRating *)rating;
- (unsigned int)snippetsCount;
- (id)bestLocalizedSnippet;
- (char)hasReviewId;
- (NSString *)reviewId;
- (NSMutableArray *)snippets;
- (void)setSnippets:(NSMutableArray *)arg0;
- (void)setReviewId:(NSString *)arg0;
- (void)setRating:(GEOPDRating *)arg0;
- (void)addSnippet:(SAMPSnippet *)arg0;
- (void)clearSnippets;
- (NSObject *)snippetAtIndex:(unsigned int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
