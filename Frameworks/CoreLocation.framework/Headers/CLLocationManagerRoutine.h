/* Runtime dump - CLLocationManagerRoutine
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocationManagerRoutine : NSObject
{
    _CLLocationManagerRoutineProxy * _locationManagerRoutineProxy;
}

@property (nonatomic) <CLLocationManagerDelegate> * delegate;
@property (retain, nonatomic) _CLLocationManagerRoutineProxy * locationManagerRoutineProxy;

- (_CLLocationManagerRoutineProxy *)locationManagerRoutineProxy;
- (void)setLocationManagerRoutineProxy:(_CLLocationManagerRoutineProxy *)arg0;
- (void)dealloc;
- (void)setDelegate:(<CLLocationManagerDelegate> *)arg0;
- (CLLocationManagerRoutine *)init;
- (<CLLocationManagerDelegate> *)delegate;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;

@end
