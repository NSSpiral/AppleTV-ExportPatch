/* Runtime dump - VKPerformanceTest
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPerformanceTest : NSObject
{
    VKMapView * _mapView;
    char _running;
    int _loopCounter;
    int _resultCount;
    struct VKPerformanceTestResult_struct * _results;
    NSString * _outputHeader;
}

+ (void)runWithMapView:(VKMapView *)arg0 outputHeader:(NSString *)arg1;

- (void)dealloc;
- (void)abort;
- (VKPerformanceTest *)initWithMapView:(VKMapView *)arg0 outputHeader:(NSString *)arg1;
- (void)loop;
- (void)tick:(int)arg0;
- (void)runTest:(int)arg0 step:(int)arg1;
- (void)printResults;

@end
