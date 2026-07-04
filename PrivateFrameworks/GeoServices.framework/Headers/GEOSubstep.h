/* Runtime dump - GEOSubstep
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSubstep : PBCodable <NSCopying>
{
    int _maneuverType;
    GEONameInfo * _name;
    NSMutableArray * _signposts;
    int _zilchIndex;
    struct ? _has;
}

@property (nonatomic) char hasManeuverType;
@property (nonatomic) int maneuverType;
@property (nonatomic) char hasZilchIndex;
@property (nonatomic) int zilchIndex;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) GEONameInfo * name;
@property (retain, nonatomic) NSMutableArray * signposts;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(GEONameInfo *)arg0;
- (GEONameInfo *)name;
- (GEOSubstep *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setSignposts:(NSMutableArray *)arg0;
- (void)addSignpost:(id)arg0;
- (unsigned int)signpostsCount;
- (void)clearSignposts;
- (NSObject *)signpostAtIndex:(unsigned int)arg0;
- (void)setManeuverType:(int)arg0;
- (void)setHasManeuverType:(char)arg0;
- (char)hasManeuverType;
- (int)maneuverType;
- (NSMutableArray *)signposts;
- (int)zilchIndex;
- (void)setZilchIndex:(int)arg0;
- (void)setHasZilchIndex:(char)arg0;
- (char)hasZilchIndex;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasName;

@end
