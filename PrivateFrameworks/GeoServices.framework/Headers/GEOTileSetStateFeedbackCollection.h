/* Runtime dump - GEOTileSetStateFeedbackCollection
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileSetStateFeedbackCollection : PBCodable <NSCopying>
{
    struct ? _sessionID;
    double _durationInOldState;
    double _newCoverage;
    double _oldCoverage;
    double _sessionRelativeTimestamp;
    int _tileSetStateType;
    struct ? _has;
}

@property (nonatomic) char hasSessionID;
@property (nonatomic) struct ? sessionID;
@property (nonatomic) char hasSessionRelativeTimestamp;
@property (nonatomic) double sessionRelativeTimestamp;
@property (nonatomic) char hasDurationInOldState;
@property (nonatomic) double durationInOldState;
@property (nonatomic) char hasTileSetStateType;
@property (nonatomic) int tileSetStateType;
@property (nonatomic) char hasOldCoverage;
@property (nonatomic) double oldCoverage;
@property (nonatomic) char hasNewCoverage;
@property (nonatomic) double newCoverage;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOTileSetStateFeedbackCollection *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (struct ?)sessionID;
- (void)setSessionID:(struct ?)arg0;
- (void)setHasSessionID:(char)arg0;
- (char)hasSessionID;
- (void)setTileSetStateType:(int)arg0;
- (void)setNewCoverage:(double)arg0;
- (void)setOldCoverage:(double)arg0;
- (void)setDurationInOldState:(double)arg0;
- (void)setSessionRelativeTimestamp:(double)arg0;
- (void)setHasDurationInOldState:(char)arg0;
- (char)hasDurationInOldState;
- (double)durationInOldState;
- (void)setHasSessionRelativeTimestamp:(char)arg0;
- (char)hasSessionRelativeTimestamp;
- (void)setHasTileSetStateType:(char)arg0;
- (char)hasTileSetStateType;
- (void)setHasOldCoverage:(char)arg0;
- (char)hasOldCoverage;
- (void)setHasNewCoverage:(char)arg0;
- (char)hasNewCoverage;
- (double)sessionRelativeTimestamp;
- (int)tileSetStateType;
- (double)oldCoverage;
- (double)newCoverage;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
