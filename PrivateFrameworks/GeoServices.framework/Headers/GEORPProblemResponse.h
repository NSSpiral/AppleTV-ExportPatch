/* Runtime dump - GEORPProblemResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemResponse : PBCodable <NSCopying>
{
    NSString * _problemId;
    int _statusCode;
    char _isNotificationSupported;
    struct ? _has;
}

@property (nonatomic) char hasStatusCode;
@property (nonatomic) int statusCode;
@property (readonly, nonatomic) char hasProblemId;
@property (retain, nonatomic) NSString * problemId;
@property (nonatomic) char hasIsNotificationSupported;
@property (nonatomic) char isNotificationSupported;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPProblemResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)statusCode;
- (NSString *)problemId;
- (char)isNotificationSupported;
- (void)setProblemId:(NSString *)arg0;
- (void)setStatusCode:(int)arg0;
- (void)setHasStatusCode:(char)arg0;
- (char)hasStatusCode;
- (char)hasProblemId;
- (void)setIsNotificationSupported:(char)arg0;
- (void)setHasIsNotificationSupported:(char)arg0;
- (char)hasIsNotificationSupported;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
