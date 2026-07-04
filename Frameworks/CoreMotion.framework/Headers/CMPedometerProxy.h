/* Runtime dump - CMPedometerProxy
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMPedometerProxy : NSObject
{
    NSObject<OS_dispatch_queue> * fInternalQueue;
    NSObject<OS_dispatch_queue> * fAppQueue;
    struct CLConnectionClient * fLocationdConnection;
    id fHandler;
    int fStepCountFromStart;
    int fStepCountOffset;
    double fDistanceFromStart;
    double fDistanceOffset;
    int fFloorAscendedStart;
    int fFloorAscendedOffset;
    int fFloorDescendedStart;
    int fFloorDescendedOffset;
    double fValidStartDate;
    char fStopUpdates;
}

- (void)_handleQueryResponse:(struct CLConnectionMessage *)arg0 onQueue:(struct __short)arg1 withHandler:(struct __raw)arg2;
- (void)_internalQueryPedometerDataFromDate:(NSDate *)arg0 toDate:(NSDate *)arg1 onQueue:(/* block */ id)arg2 withHandler:(id /* block */)arg3;
- (void)_handleRecordQueryResponse:(struct CLConnectionMessage *)arg0 withHandler:(struct __short)arg1;
- (void)_queryPedometerDataFromDate:(NSDate *)arg0 toDate:(NSDate *)arg1 withHandler:(id /* block */)arg2;
- (void)_startPedometerUpdatesFromDate:(NSDate *)arg0 withHandler:(id /* block */)arg1;
- (void)_stopPedometerUpdates;
- (void)_queryPedometerDataSinceRecord:(int)arg0 withHandler:(id /* block */)arg1;
- (void)_queryPedometerDataSinceDataRecord:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)dealloc;
- (CMPedometerProxy *)init;
- (void)_teardown;

@end
