/* Runtime dump - UITableViewIndex
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewIndex : UIControl
{
    NSArray * _titles;
    UIFont * _font;
    int _selectedSection;
    char _pastTop;
    char _pastBottom;
    struct CGSize _cachedSize;
    struct CGSize _cachedSizeToFit;
    UIColor * _indexColor;
    UIColor * _indexBackgroundColor;
    UIColor * _indexTrackingBackgroundColor;
    float _topPadding;
    float _bottomPadding;
    float _verticalTextHeightEstimate;
    NSArray * _entries;
    int _idiom;
}

@property (retain, nonatomic) NSArray * titles;
@property (retain, nonatomic) UIFont * font;
@property (retain, nonatomic) UIColor * indexColor;
@property (retain, nonatomic) UIColor * indexBackgroundColor;
@property (retain, nonatomic) UIColor * indexTrackingBackgroundColor;
@property (readonly, nonatomic) int selectedSection;
@property (readonly, nonatomic) NSString * selectedSectionTitle;
@property (readonly, nonatomic) char pastTop;
@property (readonly, nonatomic) char pastBottom;

- (UITableViewIndex *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setFont:(UIFont *)arg0;
- (void)_willChangeToIdiom:(int)arg0 onScreen:(NSObject *)arg1;
- (char)canBecomeFocused;
- (void)tintColorDidChange;
- (UIFont *)font;
- (void)setTitles:(NSArray *)arg0;
- (void)setIndexColor:(UIColor *)arg0;
- (void)setIndexBackgroundColor:(UIColor *)arg0;
- (void)setIndexTrackingBackgroundColor:(UIColor *)arg0;
- (int)selectedSection;
- (char)pastTop;
- (char)pastBottom;
- (NSString *)selectedSectionTitle;
- (unsigned int)maximumNumberOfTitlesWithoutTruncationForHeight:(float)arg0;
- (void)cancelTrackingWithEvent:(NSObject *)arg0;
- (char)beginTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (char)continueTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)endTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (NSArray *)titles;
- (UIFont *)_fontForIdiom:(int)arg0;
- (void)_cacheAndMeasureTitles;
- (void)_setIdiom:(int)arg0;
- (int)_idiom;
- (float)_minLineSpacingForIdiom:(int)arg0;
- (id)_displayTitles;
- (UIImage *)_dotImage;
- (struct CGRect)_visibleBoundsForRect:(NSObject *)arg0 stride:(SEL)arg1;
- (UIColor *)indexColor;
- (void)_selectSectionForTouch:(id)arg0 withEvent:(Event *)arg1;
- (UIImage *)_externalDotImage;
- (UIColor *)indexTrackingBackgroundColor;
- (UIColor *)indexBackgroundColor;

@end
