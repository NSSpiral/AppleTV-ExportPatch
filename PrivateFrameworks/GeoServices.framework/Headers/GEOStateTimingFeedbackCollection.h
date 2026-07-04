/* Runtime dump - GEOStateTimingFeedbackCollection
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStateTimingFeedbackCollection : PBCodable <NSCopying>
{
    struct ? _sessionID;
    double _durationInOldState;
    NSMutableArray * _stateTransitions;
    struct ? _has;
}

@property (nonatomic) char hasSessionID;
@property (nonatomic) struct ? sessionID;
@property (retain, nonatomic) NSMutableArray * stateTransitions;
@property (nonatomic) char hasDurationInOldState;
@property (nonatomic) double durationInOldState;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOStateTimingFeedbackCollection *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (struct ?)sessionID;
- (void)setSessionID:(struct ?)arg0;
- (void)setHasSessionID:(char)arg0;
- (char)hasSessionID;
- (void)setDurationInOldState:(double)arg0;
- (void)addStateTransition:(NSObject *)arg0;
- (void)setStateTransitions:(NSMutableArray *)arg0;
- (unsigned int)stateTransitionsCount;
- (void)clearStateTransitions;
- (NSObject *)stateTransitionAtIndex:(unsigned int)arg0;
- (void)setHasDurationInOldState:(char)arg0;
- (char)hasDurationInOldState;
- (NSMutableArray *)stateTransitions;
- (double)durationInOldState;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
