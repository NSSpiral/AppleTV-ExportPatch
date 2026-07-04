/* Runtime dump - CalLocationManagerDelegate
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLocationManagerDelegate : NSObject <CLLocationManagerDelegate>
{
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_dispatch_queue> * _queue;
    CLLocation * _currentLocation;
    id _completionBlock;
    char _didFinish;
}

@property (retain) CLLocation * currentLocation;
@property (copy) id completionBlock;
@property char didFinish;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (CLLocation *)currentLocation;
- (void)setCurrentLocation:(CLLocation *)arg0;
- (void)stopTimer;
- (void)dealloc;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (CalLocationManagerDelegate *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)startTimer;
- (void).cxx_destruct;
- (void)didFinishLocationLookupWithLocation:(NSObject *)arg0 error:(NSError *)arg1;
- (char)didFinish;
- (void)setDidFinish:(char)arg0;
- (void)locationManager:(NSObject *)arg0 didUpdateToLocation:(NSObject *)arg1 fromLocation:(NSObject *)arg2;
- (void)locationManager:(NSObject *)arg0 didFailWithError:(char)arg1;
- (void)locationManager:(NSObject *)arg0 didChangeAuthorizationStatus:(int)arg1;
- (void)timeout;

@end
