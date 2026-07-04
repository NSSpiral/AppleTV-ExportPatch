/* Runtime dump - MREffectCoverCascadeEvent
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectCoverCascadeEvent : NSObject
{
    char relativeX;
    char relativeY;
    unsigned char type;
    double relativeStartTime;
    double duration;
}

- (MREffectCoverCascadeEvent *)initWithRelativeX:(char)arg0 relativeY:(char)arg1 type:(unsigned char)arg2 relativeStartTime:(double)arg3 andDuration:(double)arg4;

@end
