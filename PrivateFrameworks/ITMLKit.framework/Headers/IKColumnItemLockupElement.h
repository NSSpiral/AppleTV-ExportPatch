/* Runtime dump - IKColumnItemLockupElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKColumnItemLockupElement : IKViewElement

@property (readonly, copy, nonatomic) NSString * columnItemType;
@property (readonly, retain, nonatomic) IKTextElement * title;
@property (readonly, retain, nonatomic) IKTextElement * subtitle;
@property (readonly, retain, nonatomic) IKTextElement * secondarySubtitle;
@property (readonly, retain, nonatomic) IKTextElement * descriptionText;
@property (readonly, retain, nonatomic) IKOrdinalElement * ordinal;
@property (readonly, nonatomic) IKImageElement * image;
@property (readonly, nonatomic) NSArray * images;
@property (readonly, nonatomic) IKTextBadgeAttachment * titleBadge;
@property (readonly, nonatomic) IKTextBadgeAttachment * subtitleBadge;
@property (readonly, retain, nonatomic) IKButtonElement * button;
@property (readonly, retain, nonatomic) IKVideoElement * video;
@property (readonly, retain, nonatomic) NSArray * textElements;
@property (readonly, nonatomic) char hasSeparator;
@property (readonly, nonatomic) char isWatchlisted;
@property (readonly, nonatomic) char onlyVisibleOnColumnHighlight;

- (IKButtonElement *)button;
- (IKTextElement *)title;
- (NSArray *)images;
- (IKImageElement *)image;
- (IKTextElement *)subtitle;
- (IKTextElement *)descriptionText;
- (NSString *)columnItemType;
- (void)_computeTitle:(id *)arg0 subtitle:(id *)arg1 secondarySubtitle:(id *)arg2 unstyledTextElements:(id *)arg3;
- (IKTextElement *)secondarySubtitle;
- (IKOrdinalElement *)ordinal;
- (IKTextBadgeAttachment *)titleBadge;
- (IKTextBadgeAttachment *)subtitleBadge;
- (NSArray *)textElements;
- (char)isWatchlisted;
- (char)onlyVisibleOnColumnHighlight;
- (char)hasSeparator;
- (IKVideoElement *)video;

@end
