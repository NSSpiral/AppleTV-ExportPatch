/* Runtime dump - IKShowcaseTemplate
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKShowcaseTemplate : IKViewElement

@property (readonly, retain, nonatomic) NSArray * modes;
@property (readonly, retain, nonatomic) IKDocumentBannerElement * documentBanner;
@property (readonly, retain, nonatomic) IKCarouselElement * carousel;
@property (readonly, retain, nonatomic) IKBackgroundElement * background;
@property (readonly, nonatomic) unsigned int transition;

- (unsigned int)transition;
- (IKBackgroundElement *)background;
- (IKDocumentBannerElement *)documentBanner;
- (NSArray *)modes;
- (IKCarouselElement *)carousel;

@end
