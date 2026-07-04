/* Runtime dump - GEOLocationShifter
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShifter : NSObject
{
    GEOLocationShiftFunctionResponse * _shiftFunction;
    char _isRequestingShiftFunction;
    GEOLocationShiftFunctionRequest * _shiftRequest;
    NSLock * _lock;
    NSMutableArray * _locationsToShift;
}

@property (readonly, nonatomic) char locationShiftEnabled;
@property (retain, nonatomic) GEOLocationShiftFunctionResponse * shiftFunction;
@property (retain, nonatomic) GEOLocationShiftFunctionRequest * shiftRequest;

- (void)dealloc;
- (GEOLocationShifter *)init;
- (void)_countryProvidersDidChange:(NSDictionary *)arg0;
- (void)setShiftRequest:(GEOLocationShiftFunctionRequest *)arg0;
- (void)setShiftFunction:(GEOLocationShiftFunctionResponse *)arg0;
- (void)_shiftAndReturnLocations;
- (void)_sendErrorForLocations:(id)arg0;
- (char)_shiftLocation:(NSObject *)arg0;
- (char)locationShiftEnabled;
- (GEOLocationShiftFunctionResponse *)shiftFunction;
- (void)_requestShiftFunctionForLocation:(struct ?)arg0 accuracy:(double)arg1;
- (void)shiftCoordinate:(struct ?)arg0 accuracy:(double)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)shiftCoordinate:(struct ?)arg0 accuracy:(double)arg1 withCompletionHandler:(id /* block */)arg2 mustGoToNetworkCallback:(/* block */ id)arg3 errorHandler:(SSErrorHandler *)arg4 callbackQueue:(/* block */ id)arg5;
- (char)shiftCoordinate:(struct ?)arg0 accuracy:(double)arg1 shiftedCoordinate:(struct ? *)arg2 shiftedAccuracy:(double *)arg3;
- (GEOLocationShiftFunctionRequest *)shiftRequest;

@end
