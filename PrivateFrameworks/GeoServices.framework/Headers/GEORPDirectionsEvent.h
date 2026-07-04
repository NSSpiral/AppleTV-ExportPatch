/* Runtime dump - GEORPDirectionsEvent
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPDirectionsEvent : PBCodable <NSCopying>
{
    long long _errorCode;
    NSString * _errorDomain;
    GEOLatLng * _occurrenceLatLng;
    unsigned int _occurrenceResponseIndex;
    NSData * _occurrenceRouteId;
    unsigned int _occurrenceStepIndex;
    unsigned int _switchedToResponseIndex;
    NSData * _switchedToRouteId;
    NSString * _synthesizedStepInstructions;
    int _synthesizedStepManeuverType;
    int _type;
    struct ? _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasOccurrenceResponseIndex;
@property (nonatomic) unsigned int occurrenceResponseIndex;
@property (readonly, nonatomic) char hasOccurrenceRouteId;
@property (retain, nonatomic) NSData * occurrenceRouteId;
@property (nonatomic) char hasOccurrenceStepIndex;
@property (nonatomic) unsigned int occurrenceStepIndex;
@property (readonly, nonatomic) char hasOccurrenceLatLng;
@property (retain, nonatomic) GEOLatLng * occurrenceLatLng;
@property (nonatomic) char hasSwitchedToResponseIndex;
@property (nonatomic) unsigned int switchedToResponseIndex;
@property (readonly, nonatomic) char hasSwitchedToRouteId;
@property (retain, nonatomic) NSData * switchedToRouteId;
@property (nonatomic) char hasSynthesizedStepManeuverType;
@property (nonatomic) int synthesizedStepManeuverType;
@property (readonly, nonatomic) char hasSynthesizedStepInstructions;
@property (retain, nonatomic) NSString * synthesizedStepInstructions;
@property (readonly, nonatomic) char hasErrorDomain;
@property (retain, nonatomic) NSString * errorDomain;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) long long errorCode;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (GEORPDirectionsEvent *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setOccurrenceRouteId:(NSData *)arg0;
- (void)setOccurrenceLatLng:(GEOLatLng *)arg0;
- (void)setSwitchedToRouteId:(NSData *)arg0;
- (void)setSynthesizedStepInstructions:(NSString *)arg0;
- (void)setErrorDomain:(NSString *)arg0;
- (void)setOccurrenceResponseIndex:(unsigned int)arg0;
- (void)setHasOccurrenceResponseIndex:(char)arg0;
- (char)hasOccurrenceResponseIndex;
- (char)hasOccurrenceRouteId;
- (void)setOccurrenceStepIndex:(unsigned int)arg0;
- (void)setHasOccurrenceStepIndex:(char)arg0;
- (char)hasOccurrenceStepIndex;
- (char)hasOccurrenceLatLng;
- (void)setSwitchedToResponseIndex:(unsigned int)arg0;
- (void)setHasSwitchedToResponseIndex:(char)arg0;
- (char)hasSwitchedToResponseIndex;
- (char)hasSwitchedToRouteId;
- (void)setSynthesizedStepManeuverType:(int)arg0;
- (void)setHasSynthesizedStepManeuverType:(char)arg0;
- (char)hasSynthesizedStepManeuverType;
- (char)hasSynthesizedStepInstructions;
- (char)hasErrorDomain;
- (unsigned int)occurrenceResponseIndex;
- (NSData *)occurrenceRouteId;
- (unsigned int)occurrenceStepIndex;
- (GEOLatLng *)occurrenceLatLng;
- (unsigned int)switchedToResponseIndex;
- (NSData *)switchedToRouteId;
- (int)synthesizedStepManeuverType;
- (NSString *)synthesizedStepInstructions;
- (NSString *)errorDomain;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (void)setErrorCode:(long long)arg0;
- (void)setHasErrorCode:(char)arg0;
- (char)hasErrorCode;
- (long long)errorCode;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
