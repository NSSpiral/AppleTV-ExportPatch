/* Runtime dump - IKLockupElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKLockupElement : IKViewElement

@property (readonly, retain, nonatomic) IKImageElement * image;
@property (readonly, retain, nonatomic) IKImageElement * fullscreenImage;
@property (readonly, retain, nonatomic) IKTextElement * title;
@property (readonly, retain, nonatomic) IKTextElement * subtitle;
@property (readonly, retain, nonatomic) IKTextElement * descriptionText;
@property (readonly, retain, nonatomic) IKOrdinalElement * ordinal;
@property (readonly, nonatomic) char showTitlesOnFocus;
@property (readonly, retain, nonatomic) IKViewElement * overlays;

- (IKTextElement *)title;
- (IKImageElement *)image;
- (IKTextElement *)subtitle;
- (IKTextElement *)descriptionText;
- (IKOrdinalElement *)ordinal;
- (IKImageElement *)fullscreenImage;
- (char)showTitlesOnFocus;
- (IKViewElement *)overlays;

@end
