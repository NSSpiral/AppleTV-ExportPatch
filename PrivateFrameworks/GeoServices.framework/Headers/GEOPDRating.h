/* Runtime dump - GEOPDRating
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDRating : PBCodable <NSCopying>
{
    double _maxScore;
    double _score;
    int _numRatingsUsedForScore;
    int _ratingType;
    struct ? _has;
}

@property (nonatomic) char hasRatingType;
@property (nonatomic) int ratingType;
@property (nonatomic) char hasScore;
@property (nonatomic) double score;
@property (nonatomic) char hasMaxScore;
@property (nonatomic) double maxScore;
@property (nonatomic) char hasNumRatingsUsedForScore;
@property (nonatomic) int numRatingsUsedForScore;

+ (NSData *)ratingForPlaceData:(NSData *)arg0 type:(int)arg1;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDRating *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (double)maxScore;
- (void)setMaxScore:(double)arg0;
- (void)setHasMaxScore:(char)arg0;
- (char)hasMaxScore;
- (char)hasNumRatingsUsedForScore;
- (int)numRatingsUsedForScore;
- (int)ratingType;
- (void)setRatingType:(int)arg0;
- (void)setHasRatingType:(char)arg0;
- (char)hasRatingType;
- (void)setNumRatingsUsedForScore:(int)arg0;
- (void)setHasNumRatingsUsedForScore:(char)arg0;
- (double)score;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (void)setScore:(double)arg0;
- (void)setHasScore:(char)arg0;
- (char)hasScore;

@end
