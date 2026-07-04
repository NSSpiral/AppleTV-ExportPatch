/* Runtime dump - MRAnimationPathScalar
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRAnimationPathScalar : NSObject
{
    MCAnimationPath * animationPath;
    float value;
    float speed;
    float time;
}

- (void)dealloc;
- (MRAnimationPathScalar *)initWithMCAnimationPath:(NSString *)arg0 andValue:(float)arg1;

@end
