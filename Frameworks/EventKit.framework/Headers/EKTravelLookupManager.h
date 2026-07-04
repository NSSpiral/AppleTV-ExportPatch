/* Runtime dump - EKTravelLookupManager
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelLookupManager : NSObject

+ (void)geocodeAddress:(NSString *)arg0 withCompletionBlock:(id /* block */)arg1;
+ (void)estimateGeolocationFromHistoricDevicePositionAtLocation:(NSObject *)arg0 withCompletionBlock:(id /* block */)arg1;
+ (EKTravelLookupManager *)defaultManager;

- (void)_travelTimeWithStartCoordinate:(id)arg0 endCoordinate:(id)arg1 arrivalDate:(NSDate *)arg2 withRouteType:(NSObject *)arg3 completionBlock:(id /* block */)arg4;
- (void)findCoordinatesForLocation:(NSObject *)arg0 completionBlock:(id /* block */)arg1;
- (void)travelTimeFrom:(NSObject *)arg0 to:(NSObject *)arg1 arrivalDate:(NSDate *)arg2 withRouteTypes:(NSArray *)arg3 withCompletionBlock:(id /* block */)arg4;
- (void)travelTimeFrom:(NSObject *)arg0 to:(NSObject *)arg1 arrivalDate:(NSDate *)arg2 withRouteType:(NSObject *)arg3 withCompletionBlock:(id /* block */)arg4;
- (void)_updateLocation:(NSObject *)arg0 withMapItem:(MKMapItem *)arg1 forRoute:(ATVRoute *)arg2 withCompletionBlock:(id /* block */)arg3;

@end
