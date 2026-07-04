/* Runtime dump - GEOTransitAppLaunchFeedbackCollection
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitAppLaunchFeedbackCollection : PBCodable <NSCopying>
{
    double _timestamp;
    NSString * _bundleIdentifier;
    GEOLatLng * _destination;
    GEOLatLng * _source;
    struct ? _has;
}

@property (readonly, nonatomic) char hasBundleIdentifier;
@property (retain, nonatomic) NSString * bundleIdentifier;
@property (readonly, nonatomic) char hasSource;
@property (retain, nonatomic) GEOLatLng * source;
@property (readonly, nonatomic) char hasDestination;
@property (retain, nonatomic) GEOLatLng * destination;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (double)timestamp;
- (NSString *)bundleIdentifier;
- (void)setTimestamp:(double)arg0;
- (GEOTransitAppLaunchFeedbackCollection *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (GEOLatLng *)source;
- (void)setSource:(GEOLatLng *)arg0;
- (GEOLatLng *)destination;
- (void)setDestination:(GEOLatLng *)arg0;
- (void)setBundleIdentifier:(NSString *)arg0;
- (char)hasBundleIdentifier;
- (char)hasTimestamp;
- (char)hasSource;
- (char)hasDestination;
- (void)setHasTimestamp:(char)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
