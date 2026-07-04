/* Runtime dump - AVTimeMarkerObservation
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVTimeMarkerObservation : NSObject
{
    id _observer;
    NSArray * _times;
    id _context;
    int _currentIndex;
}

- (void)dealloc;
- (NSString *)context;
- (int)currentIndex;
- (MCResourceProgressObserver *)observer;
- (char)gotoTime:(double)arg0;
- (AVTimeMarkerObservation *)initWithObserver:(NSObject *)arg0 times:(NSArray *)arg1 context:(NSObject *)arg2 currentIndex:(int)arg3;
- (double)nextInterestingTime;
- (double)prevInterestingTime;

@end
