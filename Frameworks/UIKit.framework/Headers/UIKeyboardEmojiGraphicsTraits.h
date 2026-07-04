/* Runtime dump - UIKeyboardEmojiGraphicsTraits
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiGraphicsTraits : NSObject
{
    float _emojiKeyWidth;
    float _minimumLineSpacing;
    float _minimumInteritemSpacing;
    float _columnOffset;
    float _sectionOffset;
    float _categoryHeaderHeight;
    float _categoryHeaderLeftPadding;
    float _categorySelectedCirPadding;
    float _categorySelectedCirWidth;
    float _scrubViewTopPadding;
    float _categoryHeaderFontSize;
    int _prepolulatedRecentCount;
    float _inputViewLeftMostPadding;
    float _inputViewRightMostPadding;
    float _rightBiasPercentage;
    float _alertTextWidth;
    struct CGSize _fakeEmojiKeySize;
}

@property (readonly, nonatomic) float emojiKeyWidth;
@property (readonly, nonatomic) float minimumLineSpacing;
@property (readonly, nonatomic) float minimumInteritemSpacing;
@property (readonly, nonatomic) float columnOffset;
@property (readonly, nonatomic) float sectionOffset;
@property (readonly, nonatomic) float categoryHeaderHeight;
@property (readonly, nonatomic) float categoryHeaderLeftPadding;
@property (readonly, nonatomic) float categorySelectedCirPadding;
@property (readonly, nonatomic) float categorySelectedCirWidth;
@property (readonly, nonatomic) float scrubViewTopPadding;
@property (readonly, nonatomic) struct CGSize fakeEmojiKeySize;
@property (readonly, nonatomic) float categoryHeaderFontSize;
@property (readonly, nonatomic) int prepolulatedRecentCount;
@property (readonly, nonatomic) float inputViewLeftMostPadding;
@property (readonly, nonatomic) float inputViewRightMostPadding;
@property (readonly, nonatomic) float rightBiasPercentage;
@property (readonly, nonatomic) float alertTextWidth;

+ (NSArray *)emojiGraphicsTraitsWithScreenTraits:(UIKBScreenTraits *)arg0;

- (float)emojiKeyWidth;
- (float)minimumLineSpacing;
- (struct CGSize)fakeEmojiKeySize;
- (float)alertTextWidth;
- (int)prepolulatedRecentCount;
- (float)categoryHeaderFontSize;
- (float)sectionOffset;
- (float)categoryHeaderHeight;
- (float)inputViewLeftMostPadding;
- (float)inputViewRightMostPadding;
- (float)minimumInteritemSpacing;
- (float)columnOffset;
- (float)scrubViewTopPadding;
- (float)categorySelectedCirWidth;
- (float)categorySelectedCirPadding;
- (UIKeyboardEmojiGraphicsTraits *)initWithScreenTrait:(id)arg0;
- (float)categoryHeaderLeftPadding;
- (float)rightBiasPercentage;

@end
