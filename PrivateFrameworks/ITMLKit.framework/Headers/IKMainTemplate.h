/* Runtime dump - IKMainTemplate
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKMainTemplate : IKViewElement

@property (readonly, retain, nonatomic) IKMenuBarElement * menuBar;
@property (readonly, retain, nonatomic) IKBackgroundElement * background;
@property (readonly, retain, nonatomic) IKButtonElement * button;
@property (readonly, retain, nonatomic) IKDocumentBannerElement * banner;

- (IKButtonElement *)button;
- (IKBackgroundElement *)background;
- (IKMenuBarElement *)menuBar;
- (IKDocumentBannerElement *)banner;

@end
