/* Runtime dump - MROrigamiAnimationPath
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MROrigamiAnimationPath : NSObject
{
    id * _curves;
    float * _keyTimes;
    float * _values;
    int _length;
    float _timeFirstAtRestValue;
}

@property (readonly, nonatomic) float timeFirstAtRestValue;

- (void)dealloc;
- (MROrigamiAnimationPath *)initWithSwingType:(int)arg0;
- (float)valueAtTime:(float)arg0;
- (float)timeFirstAtRestValue;
- (MROrigamiAnimationPath *)initWithControlPoints:(id *)arg0 keyTimes:(double)arg1 values:(float *)arg2 length:(float *)arg3;

@end
