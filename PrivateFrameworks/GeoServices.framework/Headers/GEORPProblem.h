/* Runtime dump - GEORPProblem
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblem : PBCodable <NSCopying>
{
    struct ? _userPaths;
    GEORPProblemContext * _problemContext;
    GEORPProblemCorrections * _problemCorrections;
    int _problemType;
    unsigned int _protocolVersion;
    struct ? _has;
}

@property (nonatomic) char hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;
@property (readonly, nonatomic) unsigned int userPathsCount;
@property (readonly, nonatomic) int * userPaths;
@property (nonatomic) char hasProblemType;
@property (nonatomic) int problemType;
@property (readonly, nonatomic) char hasProblemCorrections;
@property (retain, nonatomic) GEORPProblemCorrections * problemCorrections;
@property (readonly, nonatomic) char hasProblemContext;
@property (retain, nonatomic) GEORPProblemContext * problemContext;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPProblem *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)protocolVersion;
- (void)setProtocolVersion:(unsigned int)arg0;
- (void)setProblemCorrections:(GEORPProblemCorrections *)arg0;
- (void)setProblemContext:(GEORPProblemContext *)arg0;
- (unsigned int)userPathsCount;
- (void)clearUserPaths;
- (int)userPathAtIndex:(unsigned int)arg0;
- (void)addUserPath:(int)arg0;
- (void)setHasProtocolVersion:(char)arg0;
- (char)hasProtocolVersion;
- (int *)userPaths;
- (void)setUserPaths:(int *)arg0 count:(unsigned int)arg1;
- (void)setProblemType:(int)arg0;
- (void)setHasProblemType:(char)arg0;
- (char)hasProblemType;
- (char)hasProblemCorrections;
- (char)hasProblemContext;
- (int)problemType;
- (GEORPProblemCorrections *)problemCorrections;
- (GEORPProblemContext *)problemContext;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
