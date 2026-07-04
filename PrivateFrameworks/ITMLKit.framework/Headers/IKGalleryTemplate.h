/* Runtime dump - IKGalleryTemplate
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKGalleryTemplate : IKViewElement

@property (readonly, retain, nonatomic) IKBackgroundElement * background;
@property (readonly, retain, nonatomic) IKDocumentBannerElement * documentBanner;
@property (readonly, retain, nonatomic) IKGridElement * grid;

- (IKBackgroundElement *)background;
- (IKDocumentBannerElement *)documentBanner;
- (IKGridElement *)grid;

@end
