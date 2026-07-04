/* Runtime dump - GEORating
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORating : PBCodable <NSCopying>
{
    double _maxScore;
    double _score;
    int _numberOfRatings;
    int _numberOfReviews;
    NSString * _provider;
    NSMutableArray * _reviews;
    NSString * _uRL;
    struct ? _has;
}

@property (nonatomic) char hasScore;
@property (nonatomic) double score;
@property (nonatomic) char hasMaxScore;
@property (nonatomic) double maxScore;
@property (nonatomic) char hasNumberOfRatings;
@property (nonatomic) int numberOfRatings;
@property (readonly, nonatomic) char hasProvider;
@property (retain, nonatomic) NSString * provider;
@property (readonly, nonatomic) char hasURL;
@property (retain, nonatomic) NSString * uRL;
@property (retain, nonatomic) NSMutableArray * reviews;
@property (nonatomic) char hasNumberOfReviews;
@property (nonatomic) int numberOfReviews;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORating *)copyWithZone:(struct _NSZone *)arg0;
- (void)setURL:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)provider;
- (char)hasURL;
- (NSString *)uRL;
- (void)setProvider:(NSString *)arg0;
- (void)setReviews:(NSMutableArray *)arg0;
- (void)addReview:(AVConferencePreview *)arg0;
- (unsigned int)reviewsCount;
- (void)clearReviews;
- (NSObject *)reviewAtIndex:(unsigned int)arg0;
- (double)maxScore;
- (void)setMaxScore:(double)arg0;
- (void)setHasMaxScore:(char)arg0;
- (char)hasMaxScore;
- (void)setNumberOfRatings:(int)arg0;
- (void)setHasNumberOfRatings:(char)arg0;
- (char)hasNumberOfRatings;
- (char)hasProvider;
- (void)setNumberOfReviews:(int)arg0;
- (void)setHasNumberOfReviews:(char)arg0;
- (char)hasNumberOfReviews;
- (int)numberOfRatings;
- (NSMutableArray *)reviews;
- (int)numberOfReviews;
- (GEORating *)initWithPlaceDataRating:(id)arg0 reviews:(NSMutableArray *)arg1;
- (GEORating *)initWithSampleSizeForUserRatingScore:(unsigned int)arg0 normalizedUserRatingScore:(float)arg1;
- (double)score;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (void)setScore:(double)arg0;
- (void)setHasScore:(char)arg0;
- (char)hasScore;

@end
