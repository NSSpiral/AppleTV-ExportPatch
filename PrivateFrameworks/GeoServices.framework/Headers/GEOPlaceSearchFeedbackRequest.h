/* Runtime dump - GEOPlaceSearchFeedbackRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying>
{
    struct ? _sessionGUID;
    long long _businessID;
    double _timestamp;
    int _feedbackType;
    int _localSearchProviderID;
    int _numberOfResults;
    int _positionInResults;
    int _sequenceNumber;
    struct ? _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasSessionGUID;
@property (nonatomic) struct ? sessionGUID;
@property (nonatomic) char hasBusinessID;
@property (nonatomic) long long businessID;
@property (nonatomic) char hasFeedbackType;
@property (nonatomic) int feedbackType;
@property (nonatomic) char hasNumberOfResults;
@property (nonatomic) int numberOfResults;
@property (nonatomic) char hasPositionInResults;
@property (nonatomic) int positionInResults;
@property (nonatomic) char hasSequenceNumber;
@property (nonatomic) int sequenceNumber;
@property (nonatomic) char hasLocalSearchProviderID;
@property (nonatomic) int localSearchProviderID;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (double)timestamp;
- (void)setTimestamp:(double)arg0;
- (GEOPlaceSearchFeedbackRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (char)hasTimestamp;
- (char)hasFeedbackType;
- (void)setHasTimestamp:(char)arg0;
- (void)setSequenceNumber:(int)arg0;
- (void)setHasSequenceNumber:(char)arg0;
- (char)hasSequenceNumber;
- (int)sequenceNumber;
- (void)setLocalSearchProviderID:(int)arg0;
- (void)setHasLocalSearchProviderID:(char)arg0;
- (char)hasLocalSearchProviderID;
- (int)localSearchProviderID;
- (void)setSessionGUID:(struct ?)arg0;
- (void)setHasSessionGUID:(char)arg0;
- (char)hasSessionGUID;
- (struct ?)sessionGUID;
- (void)setBusinessID:(long long)arg0;
- (void)setHasBusinessID:(char)arg0;
- (void)setFeedbackType:(int)arg0;
- (void)setHasFeedbackType:(char)arg0;
- (void)setNumberOfResults:(int)arg0;
- (void)setHasNumberOfResults:(char)arg0;
- (char)hasNumberOfResults;
- (void)setPositionInResults:(int)arg0;
- (void)setHasPositionInResults:(char)arg0;
- (char)hasPositionInResults;
- (int)feedbackType;
- (int)numberOfResults;
- (int)positionInResults;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasBusinessID;
- (long long)businessID;

@end
