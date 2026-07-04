/* Runtime dump - IKDocumentBannerElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDocumentBannerElement : IKViewElement
{
    char _fixed;
}

@property (readonly, retain, nonatomic) IKTextElement * title;
@property (readonly, retain, nonatomic) IKTextElement * subtitle;
@property (readonly, retain, nonatomic) IKBackgroundElement * background;
@property (readonly, nonatomic) UIColor * backgroundColor;
@property (readonly, nonatomic) char fixed;
@property (readonly, retain, nonatomic) NSArray * buttons;
@property (readonly, retain, nonatomic) IKLockupElement * lockup;

- (UIColor *)backgroundColor;
- (IKTextElement *)title;
- (IKTextElement *)subtitle;
- (IKBackgroundElement *)background;
- (NSArray *)buttons;
- (char)fixed;
- (IKLockupElement *)lockup;
- (char)isFixed;

@end
