/* Runtime dump - GEORPDirectionsProblem
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPDirectionsProblem : PBCodable <NSCopying>
{
    NSData * _directionsResponseId;
    GEORPUserSearchInput * _endWaypoint;
    NSData * _overviewScreenshotImageData;
    unsigned int _problematicStepIndex;
    GEORPUserSearchInput * _startWaypoint;
    struct ? _has;
}

@property (readonly, nonatomic) char hasDirectionsResponseId;
@property (retain, nonatomic) NSData * directionsResponseId;
@property (readonly, nonatomic) char hasOverviewScreenshotImageData;
@property (retain, nonatomic) NSData * overviewScreenshotImageData;
@property (nonatomic) char hasProblematicStepIndex;
@property (nonatomic) unsigned int problematicStepIndex;
@property (readonly, nonatomic) char hasStartWaypoint;
@property (retain, nonatomic) GEORPUserSearchInput * startWaypoint;
@property (readonly, nonatomic) char hasEndWaypoint;
@property (retain, nonatomic) GEORPUserSearchInput * endWaypoint;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPDirectionsProblem *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (GEORPUserSearchInput *)startWaypoint;
- (GEORPUserSearchInput *)endWaypoint;
- (void)setDirectionsResponseId:(NSData *)arg0;
- (void)setOverviewScreenshotImageData:(NSData *)arg0;
- (void)setStartWaypoint:(GEORPUserSearchInput *)arg0;
- (void)setEndWaypoint:(GEORPUserSearchInput *)arg0;
- (char)hasDirectionsResponseId;
- (char)hasOverviewScreenshotImageData;
- (void)setProblematicStepIndex:(unsigned int)arg0;
- (void)setHasProblematicStepIndex:(char)arg0;
- (char)hasProblematicStepIndex;
- (char)hasStartWaypoint;
- (char)hasEndWaypoint;
- (NSData *)directionsResponseId;
- (NSData *)overviewScreenshotImageData;
- (unsigned int)problematicStepIndex;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
