/* Runtime dump - GEOCompanionWalkStep
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCompanionWalkStep : PBCodable <GEOCompanionManeuverStep, NSCopying>
{
    struct ? * _junctionElements;
    unsigned int _junctionElementsCount;
    unsigned int _junctionElementsSpace;
    int _junctionType;
    NSMutableArray * _maneuverNames;
    int _maneuverType;
    NSMutableArray * _signposts;
    struct ? _has;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char hasManeuverType;
@property (nonatomic) int maneuverType;
@property (retain, nonatomic) NSMutableArray * maneuverNames;
@property (retain, nonatomic) NSMutableArray * signposts;
@property (nonatomic) char hasJunctionType;
@property (nonatomic) int junctionType;
@property (readonly, nonatomic) unsigned int junctionElementsCount;
@property (readonly, nonatomic) struct ? * junctionElements;
@property (readonly, nonatomic) int transportType;
@property (nonatomic) char hasManeuverType;
@property (nonatomic) int maneuverType;
@property (retain, nonatomic) NSMutableArray * maneuverNames;
@property (retain, nonatomic) NSMutableArray * signposts;
@property (nonatomic) char hasJunctionType;
@property (nonatomic) int junctionType;
@property (readonly, nonatomic) unsigned int junctionElementsCount;
@property (readonly, nonatomic) struct ? * junctionElements;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOCompanionWalkStep *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setManeuverNames:(NSMutableArray *)arg0;
- (void)clearJunctionElements;
- (void)setSignposts:(NSMutableArray *)arg0;
- (void)addManeuverName:(NSString *)arg0;
- (void)addSignpost:(id)arg0;
- (unsigned int)maneuverNamesCount;
- (void)clearManeuverNames;
- (NSObject *)maneuverNameAtIndex:(unsigned int)arg0;
- (unsigned int)junctionElementsCount;
- (struct ?)junctionElementAtIndex:(SEL)arg0;
- (void)addJunctionElement:(struct ?)arg0;
- (unsigned int)signpostsCount;
- (void)clearSignposts;
- (NSObject *)signpostAtIndex:(unsigned int)arg0;
- (void)setManeuverType:(int)arg0;
- (void)setHasManeuverType:(char)arg0;
- (char)hasManeuverType;
- (int)junctionType;
- (void)setJunctionType:(int)arg0;
- (void)setHasJunctionType:(char)arg0;
- (char)hasJunctionType;
- (struct ? *)junctionElements;
- (void)setJunctionElements:(struct ? *)arg0 count:(NSObject *)arg1;
- (int)maneuverType;
- (NSMutableArray *)maneuverNames;
- (NSMutableArray *)signposts;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (int)transportType;

@end
