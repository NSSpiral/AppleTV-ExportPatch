/* Runtime dump - GEORPProblemOptInResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemOptInResponse : PBCodable <NSCopying>
{
    int _statusCode;
    struct ? _has;
}

@property (nonatomic) char hasStatusCode;
@property (nonatomic) int statusCode;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPProblemOptInResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)statusCode;
- (void)setStatusCode:(int)arg0;
- (void)setHasStatusCode:(char)arg0;
- (char)hasStatusCode;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
