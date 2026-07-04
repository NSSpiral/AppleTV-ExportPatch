/* Runtime dump - GEORPProblemNotificationAvailabilityResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemNotificationAvailabilityResponse : PBCodable <NSCopying>
{
    struct ? _supportedProblemTypes;
    int _statusCode;
    struct ? _has;
}

@property (nonatomic) char hasStatusCode;
@property (nonatomic) int statusCode;
@property (readonly, nonatomic) unsigned int supportedProblemTypesCount;
@property (readonly, nonatomic) int * supportedProblemTypes;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPProblemNotificationAvailabilityResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)statusCode;
- (void)setStatusCode:(int)arg0;
- (void)setHasStatusCode:(char)arg0;
- (char)hasStatusCode;
- (unsigned int)supportedProblemTypesCount;
- (void)clearSupportedProblemTypes;
- (int)supportedProblemTypeAtIndex:(unsigned int)arg0;
- (void)addSupportedProblemType:(int)arg0;
- (int *)supportedProblemTypes;
- (void)setSupportedProblemTypes:(int *)arg0 count:(unsigned int)arg1;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
