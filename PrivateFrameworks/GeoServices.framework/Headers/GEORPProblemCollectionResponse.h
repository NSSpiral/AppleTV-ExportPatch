/* Runtime dump - GEORPProblemCollectionResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemCollectionResponse : PBCodable <NSCopying>
{
    NSString * _problemId;
    int _statusCode;
    struct ? _has;
}

@property (nonatomic) char hasStatusCode;
@property (nonatomic) int statusCode;
@property (readonly, nonatomic) char hasProblemId;
@property (retain, nonatomic) NSString * problemId;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPProblemCollectionResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)statusCode;
- (NSString *)problemId;
- (void)setProblemId:(NSString *)arg0;
- (void)setStatusCode:(int)arg0;
- (void)setHasStatusCode:(char)arg0;
- (char)hasStatusCode;
- (char)hasProblemId;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
