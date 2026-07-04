/* Runtime dump - GEOUIActionCapture
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUIActionCapture : PBCodable <NSCopying>
{
    double _duration;
    int _actionType;
    int _sequenceNumber;
    struct ? _has;
}

@property (nonatomic) char hasActionType;
@property (nonatomic) int actionType;
@property (nonatomic) char hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) char hasSequenceNumber;
@property (nonatomic) int sequenceNumber;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (double)duration;
- (void)setDuration:(double)arg0;
- (GEOUIActionCapture *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setSequenceNumber:(int)arg0;
- (void)setHasSequenceNumber:(char)arg0;
- (char)hasSequenceNumber;
- (int)sequenceNumber;
- (void)setHasActionType:(char)arg0;
- (char)hasActionType;
- (void)setHasDuration:(char)arg0;
- (char)hasDuration;
- (void)setActionType:(int)arg0;
- (int)actionType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
