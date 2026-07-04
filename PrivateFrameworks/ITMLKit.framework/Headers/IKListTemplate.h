/* Runtime dump - IKListTemplate
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKListTemplate : IKViewElement

@property (readonly, retain, nonatomic) IKBackgroundElement * background;
@property (readonly, retain, nonatomic) IKDocumentBannerElement * documentBanner;
@property (readonly, retain, nonatomic) IKListElement * list;

- (IKBackgroundElement *)background;
- (IKDocumentBannerElement *)documentBanner;
- (IKListElement *)list;

@end
