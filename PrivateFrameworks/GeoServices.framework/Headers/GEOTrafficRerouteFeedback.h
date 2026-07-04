/* Runtime dump - GEOTrafficRerouteFeedback
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficRerouteFeedback : PBCodable <NSCopying>
{
    int _actionType;
    NSData * _directionResponseID;
    unsigned int _oldRouteHistoricTravelTime;
    NSData * _oldRouteID;
    NSMutableArray * _oldRouteIncidents;
    unsigned int _oldRouteTravelTime;
    unsigned int _reroutedRouteHistoricTravelTime;
    NSData * _reroutedRouteID;
    unsigned int _reroutedRouteTravelTime;
    char _oldRouteBlocked;
    struct ? _has;
}

@property (nonatomic) char hasOldRouteTravelTime;
@property (nonatomic) unsigned int oldRouteTravelTime;
@property (nonatomic) char hasReroutedRouteTravelTime;
@property (nonatomic) unsigned int reroutedRouteTravelTime;
@property (nonatomic) char hasOldRouteHistoricTravelTime;
@property (nonatomic) unsigned int oldRouteHistoricTravelTime;
@property (nonatomic) char hasReroutedRouteHistoricTravelTime;
@property (nonatomic) unsigned int reroutedRouteHistoricTravelTime;
@property (nonatomic) char hasOldRouteBlocked;
@property (nonatomic) char oldRouteBlocked;
@property (retain, nonatomic) NSMutableArray * oldRouteIncidents;
@property (readonly, nonatomic) char hasDirectionResponseID;
@property (retain, nonatomic) NSData * directionResponseID;
@property (readonly, nonatomic) char hasOldRouteID;
@property (retain, nonatomic) NSData * oldRouteID;
@property (readonly, nonatomic) char hasReroutedRouteID;
@property (retain, nonatomic) NSData * reroutedRouteID;
@property (nonatomic) char hasActionType;
@property (nonatomic) int actionType;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOTrafficRerouteFeedback *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setHasActionType:(char)arg0;
- (char)hasActionType;
- (void)setDirectionResponseID:(NSData *)arg0;
- (char)hasDirectionResponseID;
- (NSData *)directionResponseID;
- (void)setOldRouteIncidents:(NSMutableArray *)arg0;
- (void)setOldRouteID:(NSData *)arg0;
- (void)setReroutedRouteID:(NSData *)arg0;
- (void)addOldRouteIncidents:(id)arg0;
- (unsigned int)oldRouteIncidentsCount;
- (void)clearOldRouteIncidents;
- (NSObject *)oldRouteIncidentsAtIndex:(unsigned int)arg0;
- (void)setOldRouteTravelTime:(unsigned int)arg0;
- (void)setHasOldRouteTravelTime:(char)arg0;
- (char)hasOldRouteTravelTime;
- (void)setReroutedRouteTravelTime:(unsigned int)arg0;
- (void)setHasReroutedRouteTravelTime:(char)arg0;
- (char)hasReroutedRouteTravelTime;
- (void)setOldRouteHistoricTravelTime:(unsigned int)arg0;
- (void)setHasOldRouteHistoricTravelTime:(char)arg0;
- (char)hasOldRouteHistoricTravelTime;
- (void)setReroutedRouteHistoricTravelTime:(unsigned int)arg0;
- (void)setHasReroutedRouteHistoricTravelTime:(char)arg0;
- (char)hasReroutedRouteHistoricTravelTime;
- (void)setOldRouteBlocked:(char)arg0;
- (void)setHasOldRouteBlocked:(char)arg0;
- (char)hasOldRouteBlocked;
- (char)hasOldRouteID;
- (char)hasReroutedRouteID;
- (unsigned int)oldRouteTravelTime;
- (unsigned int)reroutedRouteTravelTime;
- (unsigned int)oldRouteHistoricTravelTime;
- (unsigned int)reroutedRouteHistoricTravelTime;
- (char)oldRouteBlocked;
- (NSMutableArray *)oldRouteIncidents;
- (NSData *)oldRouteID;
- (NSData *)reroutedRouteID;
- (void)setActionType:(int)arg0;
- (int)actionType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
