/* Runtime dump - GEOQuickETARequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOQuickETARequest : NSObject
{
    GEOComposedWaypoint * _sourceWaypoint;
    GEOComposedWaypoint * _destinationWaypoint;
    NSDate * _departureDate;
    NSDate * _arrivalDate;
    int _transportType;
    GEOLocation * _currentLocation;
    char _includeDistance;
    GEOAutomobileOptions * _automobileOptions;
    GEOWalkingOptions * _walkingOptions;
    NSArray * _additionalTransportTypesRequested;
}

@property (readonly, nonatomic) GEOComposedWaypoint * sourceWaypoint;
@property (readonly, nonatomic) GEOComposedWaypoint * destinationWaypoint;
@property (readonly, nonatomic) NSDate * departureDate;
@property (readonly, nonatomic) NSDate * arrivalDate;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) GEOLocation * currentLocation;
@property (readonly, nonatomic) char includeDistance;
@property (readonly, nonatomic) GEOAutomobileOptions * automobileOptions;
@property (readonly, nonatomic) GEOWalkingOptions * walkingOptions;
@property (readonly, nonatomic) NSArray * additionalTransportTypesRequested;

- (GEOQuickETARequest *)initWithDirectionsRequest:(NSURLRequest *)arg0 origin:(_WKSecurityOrigin *)arg1 destination:(NSObject *)arg2;
- (GEOLocation *)currentLocation;
- (void)dealloc;
- (NSString *)description;
- (char)includeDistance;
- (GEOAutomobileOptions *)automobileOptions;
- (GEOWalkingOptions *)walkingOptions;
- (NSDate *)departureDate;
- (NSDate *)arrivalDate;
- (GEOQuickETARequest *)initWithSource:(NSObject *)arg0 toDestination:(NSObject *)arg1 departureDate:(NSDate *)arg2 transportType:(int)arg3 currentLocation:(GEOLocation *)arg4 includeDistance:(char)arg5;
- (GEOQuickETARequest *)initWithSource:(NSObject *)arg0 toDestination:(NSObject *)arg1 arrivalDate:(NSDate *)arg2 transportType:(int)arg3 currentLocation:(GEOLocation *)arg4 includeDistance:(char)arg5;
- (GEOQuickETARequest *)initWithSource:(NSObject *)arg0 toDestination:(NSObject *)arg1 departureDate:(NSDate *)arg2 transportType:(int)arg3 currentLocation:(GEOLocation *)arg4;
- (GEOQuickETARequest *)initWithSource:(NSObject *)arg0 toDestination:(NSObject *)arg1 arrivalDate:(NSDate *)arg2 transportType:(int)arg3 currentLocation:(GEOLocation *)arg4;
- (GEOQuickETARequest *)initWithSource:(NSObject *)arg0 toDestination:(NSObject *)arg1 departureDate:(NSDate *)arg2 currentLocation:(GEOLocation *)arg3 includeDistance:(char)arg4 automobileOptions:(GEOAutomobileOptions *)arg5 walkingOptions:(GEOWalkingOptions *)arg6;
- (GEOQuickETARequest *)initWithSource:(NSObject *)arg0 toDestination:(NSObject *)arg1 arrivalDate:(NSDate *)arg2 currentLocation:(GEOLocation *)arg3 includeDistance:(char)arg4 automobileOptions:(GEOAutomobileOptions *)arg5 walkingOptions:(GEOWalkingOptions *)arg6;
- (GEOQuickETARequest *)initWithSource:(NSObject *)arg0 toDestination:(NSObject *)arg1 departureDate:(NSDate *)arg2 transportType:(int)arg3 currentLocation:(GEOLocation *)arg4 includeDistance:(char)arg5 additionalTransportTypesRequested:(NSArray *)arg6;
- (GEOQuickETARequest *)initWithSource:(NSObject *)arg0 toDestination:(NSObject *)arg1 arrivalDate:(NSDate *)arg2 transportType:(int)arg3 currentLocation:(GEOLocation *)arg4 includeDistance:(char)arg5 additionalTransportTypesRequested:(NSArray *)arg6;
- (GEOComposedWaypoint *)sourceWaypoint;
- (GEOComposedWaypoint *)destinationWaypoint;
- (NSArray *)additionalTransportTypesRequested;
- (int)transportType;

@end
