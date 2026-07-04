/* Runtime dump - GEOCompanionDriveStep
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCompanionDriveStep : PBCodable <GEOCompanionManeuverStep, NSCopying>
{
    struct ? * _junctionElements;
    unsigned int _junctionElementsCount;
    unsigned int _junctionElementsSpace;
    int _drivingSide;
    GEONameInfo * _exitNumber;
    int _junctionType;
    NSMutableArray * _maneuverNames;
    int _maneuverType;
    NSString * _shield;
    int _shieldType;
    NSMutableArray * _signposts;
    char _toFreeway;
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
@property (nonatomic) char hasToFreeway;
@property (nonatomic) char toFreeway;
@property (readonly, nonatomic) char hasExitNumber;
@property (retain, nonatomic) GEONameInfo * exitNumber;
@property (readonly, nonatomic) char hasShield;
@property (retain, nonatomic) NSString * shield;
@property (nonatomic) char hasShieldType;
@property (nonatomic) int shieldType;
@property (nonatomic) char hasJunctionType;
@property (nonatomic) int junctionType;
@property (readonly, nonatomic) unsigned int junctionElementsCount;
@property (readonly, nonatomic) struct ? * junctionElements;
@property (nonatomic) char hasDrivingSide;
@property (nonatomic) int drivingSide;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOCompanionDriveStep *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setDrivingSide:(int)arg0;
- (void)setHasDrivingSide:(char)arg0;
- (char)hasDrivingSide;
- (void)setManeuverNames:(NSMutableArray *)arg0;
- (void)clearJunctionElements;
- (void)setSignposts:(NSMutableArray *)arg0;
- (void)setExitNumber:(GEONameInfo *)arg0;
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
- (char)hasExitNumber;
- (char)toFreeway;
- (void)setToFreeway:(char)arg0;
- (void)setHasToFreeway:(char)arg0;
- (char)hasToFreeway;
- (int)maneuverType;
- (NSMutableArray *)maneuverNames;
- (NSMutableArray *)signposts;
- (GEONameInfo *)exitNumber;
- (void)setShield:(NSString *)arg0;
- (NSString *)shield;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (int)shieldType;
- (int)transportType;
- (char)hasShield;
- (int)drivingSide;
- (void)setShieldType:(int)arg0;
- (void)setHasShieldType:(char)arg0;
- (char)hasShieldType;

@end
