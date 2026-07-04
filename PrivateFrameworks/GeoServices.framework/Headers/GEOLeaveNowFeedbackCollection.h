/* Runtime dump - GEOLeaveNowFeedbackCollection
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLeaveNowFeedbackCollection : PBCodable <NSCopying>
{
    struct ? _sessionID;
    double _currentTimestamp;
    double _eventTimestamp;
    double _travelDuration;
    int _actionType;
    int _alertType;
    int _travelState;
    struct ? _has;
}

@property (nonatomic) char hasSessionID;
@property (nonatomic) struct ? sessionID;
@property (nonatomic) char hasActionType;
@property (nonatomic) int actionType;
@property (nonatomic) char hasAlertType;
@property (nonatomic) int alertType;
@property (nonatomic) char hasTravelState;
@property (nonatomic) int travelState;
@property (nonatomic) char hasEventTimestamp;
@property (nonatomic) double eventTimestamp;
@property (nonatomic) char hasCurrentTimestamp;
@property (nonatomic) double currentTimestamp;
@property (nonatomic) char hasTravelDuration;
@property (nonatomic) double travelDuration;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOLeaveNowFeedbackCollection *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (struct ?)sessionID;
- (void)setSessionID:(struct ?)arg0;
- (void)setHasSessionID:(char)arg0;
- (char)hasSessionID;
- (void)setHasActionType:(char)arg0;
- (char)hasActionType;
- (void)setAlertType:(int)arg0;
- (void)setHasAlertType:(char)arg0;
- (char)hasAlertType;
- (void)setTravelState:(int)arg0;
- (void)setHasTravelState:(char)arg0;
- (char)hasTravelState;
- (void)setEventTimestamp:(double)arg0;
- (void)setHasEventTimestamp:(char)arg0;
- (char)hasEventTimestamp;
- (void)setCurrentTimestamp:(double)arg0;
- (void)setHasCurrentTimestamp:(char)arg0;
- (char)hasCurrentTimestamp;
- (void)setTravelDuration:(double)arg0;
- (void)setHasTravelDuration:(char)arg0;
- (char)hasTravelDuration;
- (int)alertType;
- (int)travelState;
- (double)eventTimestamp;
- (double)currentTimestamp;
- (double)travelDuration;
- (void)setActionType:(int)arg0;
- (int)actionType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
