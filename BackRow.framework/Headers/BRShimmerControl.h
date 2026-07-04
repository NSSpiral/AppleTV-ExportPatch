/* Runtime dump - BRShimmerControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRImageControl;
@interface BRShimmerControl : BRControl
{
    BRControl * _base;
    BRImageControl * _shimmer;
    float _offset;
}

+ (NSSet *)shimmerWithOffset:(float)arg0;

- (void)layoutSubcontrols;
- (BRShimmerControl *)initWithOffset:(float)arg0;
- (NSArray *)_calculatePositionValues;
- (id)_calculateKeyTimes;
- (void)dealloc;
- (BRShimmerControl *)init;
- (void)setOffset:(float)arg0;
- (float)offset;

@end
