/* Runtime dump - MKDirectionsRequest
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKDirectionsRequest : NSObject <NSCopying>
{
    MKMapItem * _source;
    MKMapItem * _destination;
    unsigned int _transportType;
    char _requestsAlternateRoutes;
    char _includeTravelTimes;
    char _includeTrafficIncidents;
    char _includeZilchRoutePoints;
    char _includeBasicRoutePoints;
    char _includeEntryPoints;
    char _includeDistanceInETA;
    NSDate * _departureDate;
    NSDate * _arrivalDate;
    NSArray * _additionalTransportTypesRequested;
}

@property (retain, nonatomic) MKMapItem * source;
@property (retain, nonatomic) MKMapItem * destination;
@property (nonatomic) char includeDistanceInETA;
@property (retain, nonatomic) NSArray * additionalTransportTypesRequested;
@property (readonly, nonatomic) char _includeTypicalRouteDuration;
@property (readonly, nonatomic) char _includeTravelTimes;
@property (readonly, nonatomic) char _includeTrafficIncidents;
@property (readonly, nonatomic) char _includeZilchRoutePoints;
@property (readonly, nonatomic) char _includeBasicRoutePoints;
@property (readonly, nonatomic) char _includeEntryPoints;

+ (char)isDirectionsRequestURL:(NSURL *)arg0;

- (void)setArrivalDate:(NSDate *)arg0;
- (char)_includeBasicRoutePoints;
- (char)_includeZilchRoutePoints;
- (unsigned int)_transportType;
- (char)_includeTravelTimes;
- (char)_includeTrafficIncidents;
- (char)requestsAlternateRoutes;
- (NSDate *)_arrivalDate;
- (NSDate *)_departureDate;
- (char)_includeDistanceInETA;
- (NSArray *)_additionalTransportTypesRequested;
- (void)setRequestsAlternateRoutes:(char)arg0;
- (void)setDepartureDate:(NSDate *)arg0;
- (NSObject *)_mapkit_initWithSource:(MKMapItem *)arg0 destination:(MKMapItem *)arg1 transportType:(unsigned int)arg2 departureDate:(NSDate *)arg3 includeTravelTimes:(char)arg4 includeTrafficIncidents:(char)arg5 includeEntryPoints:(char)arg6 includeRoutePoints:(char)arg7;
- (NSObject *)_mapkit_initWithSource:(MKMapItem *)arg0 destination:(MKMapItem *)arg1 transportType:(unsigned int)arg2 departureDate:(NSDate *)arg3;
- (NSObject *)_mapkit_initWithSource:(MKMapItem *)arg0 destination:(MKMapItem *)arg1 transportType:(unsigned int)arg2 arrivalDate:(NSDate *)arg3;
- (char)_includeTypicalRouteDuration;
- (NSObject *)_mapkit_initWithSource:(MKMapItem *)arg0 destination:(MKMapItem *)arg1 transportType:(unsigned int)arg2 arrivalDate:(NSDate *)arg3 includeTravelTimes:(char)arg4 includeTrafficIncidents:(char)arg5 includeEntryPoints:(char)arg6 includeRoutePoints:(char)arg7;
- (NSObject *)_mapkit_initWithAllTransportTypesSource:(NSObject *)arg0 destination:(MKMapItem *)arg1 departureDate:(NSDate *)arg2;
- (NSObject *)_mapkit_initWithAllTransportTypesSource:(NSObject *)arg0 destination:(MKMapItem *)arg1 arrivalDate:(NSDate *)arg2;
- (char)writeToURL:(NSURL *)arg0 error:(id *)arg1;
- (char)_includeEntryPoints;
- (void)_setIncludeDistanceInETA:(char)arg0;
- (void)_setAdditionalTransportTypesRequested:(id)arg0;
- (MKDirectionsRequest *)init;
- (NSString *)description;
- (MKDirectionsRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (MKMapItem *)source;
- (void)setSource:(MKMapItem *)arg0;
- (MKMapItem *)destination;
- (void)setDestination:(MKMapItem *)arg0;
- (void).cxx_destruct;
- (MKDirectionsRequest *)initWithContentsOfURL:(NSURL *)arg0;
- (NSDate *)departureDate;
- (NSDate *)arrivalDate;
- (void)setTransportType:(unsigned int)arg0;
- (unsigned int)transportType;

@end
