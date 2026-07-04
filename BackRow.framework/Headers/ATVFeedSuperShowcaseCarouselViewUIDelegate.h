/* Runtime dump - ATVFeedSuperShowcaseCarouselViewUIDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVCarouselViewUIDelegate;

@class ATVCarouselView, ATVCarouselViewUIOpContext, BRControl;
@interface ATVFeedSuperShowcaseCarouselViewUIDelegate : NSObject <ATVCarouselViewUIDelegate>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (struct ATVCarouselViewItemsConfig)carouselView:(ATVCarouselView *)arg0 itemsConfigForContext:(SEL)arg1;
- (CAAnimation *)carouselView:(ATVCarouselView *)arg0 configurePerspectiveForContext:(ATVCarouselViewUIOpContext *)arg1;
- (CAAnimation *)carouselView:(ATVCarouselView *)arg0 setPositionOfItem:(BRControl *)arg1 toPositionAtIndex:(unsigned int)arg2 context:(ATVCarouselViewUIOpContext *)arg3;

@end
