/* Runtime dump - VKRunningCurve
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRunningCurve : NSObject
{
    struct ? _p0;
    double _t0;
    struct ? _p1;
    double _t1;
    struct ? _pu;
    double _tu;
    struct ? _mb;
    char _mbValid;
}

- (void)dealloc;
- (VKRunningCurve *)init;
- (void)reset;
- (void).cxx_construct;
- (struct ?)stateAtTime:(id)arg0;
- (char)hasStateAtTime:(double)arg0;
- (void)appendPosition:(struct VKPoint)arg0 atTime:(double)arg1;

@end
