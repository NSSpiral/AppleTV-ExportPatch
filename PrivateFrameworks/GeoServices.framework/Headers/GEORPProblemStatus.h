/* Runtime dump - GEORPProblemStatus
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemStatus : PBCodable <NSCopying>
{
    double _creationDate;
    NSString * _problemId;
    GEORPResolution * _problemResolution;
    int _problemState;
    struct ? _has;
}

@property (readonly, nonatomic) char hasProblemId;
@property (retain, nonatomic) NSString * problemId;
@property (nonatomic) char hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) char hasProblemState;
@property (nonatomic) int problemState;
@property (readonly, nonatomic) char hasProblemResolution;
@property (retain, nonatomic) GEORPResolution * problemResolution;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPProblemStatus *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (double)creationDate;
- (void)setHasCreationDate:(char)arg0;
- (char)hasCreationDate;
- (NSString *)problemId;
- (void)setProblemId:(NSString *)arg0;
- (char)hasProblemId;
- (void)setProblemResolution:(GEORPResolution *)arg0;
- (void)setProblemState:(int)arg0;
- (void)setHasProblemState:(char)arg0;
- (char)hasProblemState;
- (char)hasProblemResolution;
- (int)problemState;
- (GEORPResolution *)problemResolution;
- (void)setCreationDate:(double)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
