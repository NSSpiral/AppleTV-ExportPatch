/* Runtime dump - MCPlugSlide
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCPlugSlide : MCPlug
{
    MCSlide * _parentSlide;
}

@property MCSlide * parentSlide;

- (MCSlide *)parentSlide;
- (void)setParentSlide:(MCSlide *)arg0;

@end
