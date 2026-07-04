/* Runtime dump - GEOReview
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOReview : PBCodable <NSCopying>
{
    double _reviewTime;
    double _score;
    GEOUser * _reviewer;
    NSString * _snippet;
    NSString * _uid;
    struct ? _has;
}

@property (readonly, nonatomic) char hasSnippet;
@property (retain, nonatomic) NSString * snippet;
@property (nonatomic) char hasScore;
@property (nonatomic) double score;
@property (nonatomic) char hasReviewTime;
@property (nonatomic) double reviewTime;
@property (readonly, nonatomic) char hasReviewer;
@property (retain, nonatomic) GEOUser * reviewer;
@property (readonly, nonatomic) char hasUid;
@property (retain, nonatomic) NSString * uid;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOReview *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)uid;
- (void)setUid:(NSString *)arg0;
- (char)hasUid;
- (void)setSnippet:(NSString *)arg0;
- (void)setReviewer:(GEOUser *)arg0;
- (char)hasSnippet;
- (void)setReviewTime:(double)arg0;
- (void)setHasReviewTime:(char)arg0;
- (char)hasReviewTime;
- (char)hasReviewer;
- (NSString *)snippet;
- (double)reviewTime;
- (GEOUser *)reviewer;
- (GEOReview *)initWithPlaceDataReview:(id)arg0;
- (double)score;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (void)setScore:(double)arg0;
- (void)setHasScore:(char)arg0;
- (char)hasScore;

@end
