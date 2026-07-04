/* Runtime dump - CMAltimeterInternal
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAltimeterInternal : NSObject
{
    struct Dispatcher * fFilteredPressureDispatcher;
    id fRelativeAltimeterHandler;
    NSOperationQueue * fRelativeAltimeterQueue;
    struct Sample fBaseAltimeterSample;
    float fBarometricBaseAltitude;
    BOOL fBaselineReceived;
    struct deque<float, std::__1::allocator<float> > fPressureSamples;
}

- (void)dealloc;
- (CMAltimeterInternal *)init;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
