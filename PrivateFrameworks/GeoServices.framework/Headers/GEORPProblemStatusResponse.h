/* Runtime dump - GEORPProblemStatusResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemStatusResponse : PBCodable <NSCopying>
{
    NSMutableArray * _problemStatus;
    int _statusCode;
    struct ? _has;
}

@property (nonatomic) char hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray * problemStatus;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPProblemStatusResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)statusCode;
- (void)setStatusCode:(int)arg0;
- (void)setHasStatusCode:(char)arg0;
- (char)hasStatusCode;
- (void)setProblemStatus:(NSMutableArray *)arg0;
- (void)addProblemStatus:(GEORPProblemStatus *)arg0;
- (unsigned int)problemStatusCount;
- (void)clearProblemStatus;
- (NSObject *)problemStatusAtIndex:(unsigned int)arg0;
- (NSMutableArray *)problemStatus;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
