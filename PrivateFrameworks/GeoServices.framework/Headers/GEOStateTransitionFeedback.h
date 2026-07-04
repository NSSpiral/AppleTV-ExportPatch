/* Runtime dump - GEOStateTransitionFeedback
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStateTransitionFeedback : PBCodable <NSCopying>
{
    int _newValue;
    int _oldValue;
    int _stateType;
    struct ? _has;
}

@property (nonatomic) char hasStateType;
@property (nonatomic) int stateType;
@property (nonatomic) char hasOldValue;
@property (nonatomic) int oldValue;
@property (nonatomic) char hasNewValue;
@property (nonatomic) int newValue;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOStateTransitionFeedback *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setStateType:(int)arg0;
- (void)setNewValue:(int)arg0;
- (void)setOldValue:(int)arg0;
- (int)oldValue;
- (void)setHasStateType:(char)arg0;
- (char)hasStateType;
- (void)setHasOldValue:(char)arg0;
- (char)hasOldValue;
- (void)setHasNewValue:(char)arg0;
- (char)hasNewValue;
- (int)stateType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (int)newValue;

@end
