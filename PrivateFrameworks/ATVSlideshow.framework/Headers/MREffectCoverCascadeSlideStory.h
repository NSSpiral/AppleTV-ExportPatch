/* Runtime dump - MREffectCoverCascadeSlideStory
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectCoverCascadeSlideStory : NSObject
{
    double birthStart;
    double birthDuration;
    double deathStart;
    double deathDuration;
    float deathParameter;
    NSString * slideID;
    unsigned int slideIndex;
    unsigned char x;
    unsigned char y;
    unsigned char birthType;
    unsigned char deathType;
}

- (void)dealloc;
- (MREffectCoverCascadeSlideStory *)initWithSlideIndex:(unsigned int)arg0 x:(unsigned int)arg1 y:(unsigned int)arg2 birthType:(unsigned int)arg3 birthStart:(double)arg4 birthDuration:(double)arg5;

@end
