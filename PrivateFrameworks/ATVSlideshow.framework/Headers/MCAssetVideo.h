/* Runtime dump - MCAssetVideo
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCAssetVideo : MCAsset
{
    NSMutableSet * mSlides;
}

@property (readonly) NSSet * slides;

- (MCAssetVideo *)init;
- (NSSet *)slides;
- (void)demolish;
- (void)learnSlide:(id)arg0;
- (void)forgetSlide:(id)arg0;
- (char)isInUse;

@end
