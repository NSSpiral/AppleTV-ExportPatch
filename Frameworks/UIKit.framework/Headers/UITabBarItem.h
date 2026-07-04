/* Runtime dump - UITabBarItem
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBarItem : UIBarItem
{
    NSString * _title;
    SEL _action;
    id _target;
    UIImage * _templateImage;
    UIImage * _selectedTemplateImage;
    UIImage * _selectedImage;
    UIImage * _unselectedImage;
    struct UIEdgeInsets _imageInsets;
    NSString * _badgeValue;
    UIView * _view;
    int _tag;
    id _appearanceStorage;
    struct ? _tabBarItemFlags;
    int _barMetrics;
    int _imageStyle;
    UIColor * _tintColor;
}

@property (retain, nonatomic) UIView * view;
@property (nonatomic) char viewIsCustom;
@property (nonatomic) char animatedBadge;
@property (retain, nonatomic) UIImage * unselectedImage;
@property (nonatomic) SEL action;
@property (nonatomic) id target;
@property (retain, nonatomic) UIImage * selectedImage;
@property (copy, nonatomic) NSString * badgeValue;
@property (nonatomic) int _barMetrics;
@property (nonatomic) int _imageStyle;
@property (retain, nonatomic) UIColor * _tintColor;

+ (NSArray *)_appearanceBlindViewClasses;

- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (UITabBarItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UITabBarItem *)init;
- (void)setTitle:(NSString *)arg0;
- (UIView *)view;
- (WAKView *)nextResponder;
- (void)setTarget:(NSObject *)arg0;
- (SEL)action;
- (NSString *)title;
- (void)setView:(UIView *)arg0;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (UIImage *)image;
- (NSObject *)target;
- (int)tag;
- (void)setTag:(int)arg0;
- (void)_updateView;
- (char)isSystemItem;
- (int)systemItem;
- (void)setTitleTextAttributes:(NSDictionary *)arg0 forState:(unsigned int)arg1;
- (void)_setTintColor:(UIColor *)arg0;
- (UIColor *)_tintColor;
- (void)setAction:(SEL)arg0;
- (UITabBarItem *)initWithTitle:(NSString *)arg0 image:(UIImage *)arg1 tag:(int)arg2;
- (UIImage *)selectedImage;
- (UIImage *)unselectedImage;
- (void)setBadgeValue:(NSString *)arg0;
- (UITabBarItem *)initWithTabBarSystemItem:(int)arg0 tag:(int)arg1;
- (NSString *)_internalTitle;
- (NSString *)badgeValue;
- (UIImage *)_internalTemplateImage;
- (NSObject *)titleTextAttributesForState:(unsigned int)arg0;
- (char)_isSelected;
- (void)setSelectedImage:(UIImage *)arg0;
- (void)_setSelected:(char)arg0;
- (void)_updateToMatchCurrentState;
- (int)_barMetrics;
- (id)_createViewForTabBar:(id)arg0 showingBadge:(char)arg1 withTint:(char)arg2;
- (void)_setTitleTextAttributeValue:(id)arg0 forAttributeKey:(NSString *)arg1 state:(unsigned int)arg2;
- (void)_setBarMetrics:(int)arg0;
- (void)_setImageStyle:(int)arg0;
- (int)_imageStyle;
- (id)_createViewForTabBar:(id)arg0 showingBadge:(char)arg1;
- (void)_updateViewAndPositionItems:(char)arg0;
- (void)_updateButtonForTintColor:(UIColor *)arg0 selected:(char)arg1;
- (char)viewIsCustom;
- (void)setTitlePositionAdjustment:(struct UIOffset)arg0;
- (struct UIOffset)titlePositionAdjustment;
- (void)_setInternalTitle:(NSString *)arg0;
- (void)_setInternalTemplateImage:(UIImage *)arg0;
- (id)_internalTemplateImages;
- (UITabBarItem *)initWithTitle:(NSString *)arg0 image:(UIImage *)arg1 selectedImage:(UIImage *)arg2;
- (void)setImageInsets:(struct UIEdgeInsets)arg0;
- (struct UIEdgeInsets)imageInsets;
- (void)setFinishedSelectedImage:(UIImage *)arg0 withFinishedUnselectedImage:(UIImage *)arg1;
- (UIImage *)finishedSelectedImage;
- (UIImage *)finishedUnselectedImage;
- (void)setViewIsCustom:(char)arg0;
- (void)setAnimatedBadge:(char)arg0;
- (char)animatedBadge;
- (void)setUnselectedImage:(UIImage *)arg0;
- (UIColor *)_updateImageWithTintColor:(UIColor *)arg0 isSelected:(char)arg1 getImageOffset:(struct UIOffset *)arg2;

@end
