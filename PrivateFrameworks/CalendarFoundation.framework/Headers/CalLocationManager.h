/* Runtime dump - CalLocationManager
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLocationManager : NSObject

+ (void)placemarkForLocation:(NSObject *)arg0 withCompletionBlock:(id /* block */)arg1;
+ (void)placemarkForAddress:(NSString *)arg0 withCompletionBlock:(id /* block */)arg1;
+ (void)_loadMapKit;
+ (void)currentLocationWithCompletionBlock:(id /* block */)arg0;
+ (void)strictGeocodeString:(NSString *)arg0 withCompletionBlock:(id /* block */)arg1;

@end
