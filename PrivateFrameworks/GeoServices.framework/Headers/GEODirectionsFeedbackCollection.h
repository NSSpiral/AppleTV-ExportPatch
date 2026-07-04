/* Runtime dump - GEODirectionsFeedbackCollection
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsFeedbackCollection : PBCodable <NSCopying>
{
    struct ? _navigationAudioFeedback;
    double _endTimeStamp;
    double _startTimeStamp;
    NSMutableArray * _directionsFeedbacks;
    GEOLocation * _finalLocation;
    char _arrivedAtDestination;
    struct ? _has;
}

@property (retain, nonatomic) NSMutableArray * directionsFeedbacks;
@property (readonly, nonatomic) char hasFinalLocation;
@property (retain, nonatomic) GEOLocation * finalLocation;
@property (nonatomic) char hasStartTimeStamp;
@property (nonatomic) double startTimeStamp;
@property (nonatomic) char hasEndTimeStamp;
@property (nonatomic) double endTimeStamp;
@property (nonatomic) char hasArrivedAtDestination;
@property (nonatomic) char arrivedAtDestination;
@property (nonatomic) char hasNavigationAudioFeedback;
@property (nonatomic) struct ? navigationAudioFeedback;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEODirectionsFeedbackCollection *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)addDirectionsFeedback:(GEODirectionsFeedback *)arg0;
- (void)setStartTimeStamp:(double)arg0;
- (void)setFinalLocation:(GEOLocation *)arg0;
- (void)setArrivedAtDestination:(char)arg0;
- (void)setNavigationAudioFeedback:(struct ?)arg0;
- (void)setEndTimeStamp:(double)arg0;
- (void)setDirectionsFeedbacks:(NSMutableArray *)arg0;
- (unsigned int)directionsFeedbacksCount;
- (void)clearDirectionsFeedbacks;
- (NSObject *)directionsFeedbackAtIndex:(unsigned int)arg0;
- (char)hasFinalLocation;
- (void)setHasStartTimeStamp:(char)arg0;
- (char)hasStartTimeStamp;
- (void)setHasEndTimeStamp:(char)arg0;
- (char)hasEndTimeStamp;
- (void)setHasArrivedAtDestination:(char)arg0;
- (char)hasArrivedAtDestination;
- (void)setHasNavigationAudioFeedback:(char)arg0;
- (char)hasNavigationAudioFeedback;
- (NSMutableArray *)directionsFeedbacks;
- (GEOLocation *)finalLocation;
- (double)startTimeStamp;
- (double)endTimeStamp;
- (char)arrivedAtDestination;
- (struct ?)navigationAudioFeedback;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
