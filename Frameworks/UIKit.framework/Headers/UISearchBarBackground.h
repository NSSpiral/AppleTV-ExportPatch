/* Runtime dump - UISearchBarBackground
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISearchBarBackground : _UIBarBackgroundImageView <_UIBarPositioningInternal>
{
    UIColor * _barTintColor;
    NSMutableDictionary * _customBackgroundImages;
    NSMutableDictionary * _generatedBackgroundImages;
    int _barPosition;
    unsigned int _searchBarStyle;
    id _barStyle;
    id _barTranslucence;
    id _usesEmbeddedAppearance;
    id _actingAsNavBar;
    id _usesContiguousBarBackground;
    unsigned int _barHasController;
}

@property (nonatomic) int barStyle;
@property (nonatomic) unsigned int searchBarStyle;
@property (retain, nonatomic) UIColor * barTintColor;
@property (nonatomic) char translucent;
@property (nonatomic) char usesEmbeddedAppearance;
@property (readonly, nonatomic) UIImage * backgroundImage;
@property (readonly, nonatomic) UIImage * backgroundImagePrompt;
@property (nonatomic) char usesContiguousBarBackground;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (UISearchBarBackground *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)setBounds:(struct CGRect)arg0;
- (char)isTranslucent;
- (UIImage *)backgroundImage;
- (void)_updateBackgroundImage;
- (void)_setBarPosition:(int)arg0;
- (void)setBarStyle:(int)arg0;
- (int)barStyle;
- (void)setTranslucent:(char)arg0;
- (void)setBarTintColor:(UIColor *)arg0;
- (int)_barPosition;
- (UIColor *)barTintColor;
- (void)setUsesEmbeddedAppearance:(char)arg0;
- (void)setSearchBarStyle:(unsigned int)arg0;
- (void)_setBehavesAsIfSearchBarHasController:(char)arg0;
- (char)_hasCustomBackgroundImage;
- (void)setUsesContiguousBarBackground:(char)arg0;
- (void)_setBackgroundImage:(UIImage *)arg0 forBarPosition:(int)arg1 barMetrics:(int)arg2;
- (NSObject *)_backgroundImageForBarPosition:(int)arg0 barMetrics:(int)arg1;
- (char)usesEmbeddedAppearance;
- (unsigned int)searchBarStyle;
- (void)_updateBackgroundImageIfPossible;
- (NSObject *)_createBackgroundImageForBarStyle:(int)arg0 alpha:(float)arg1;
- (UIImage *)backgroundImagePrompt;
- (char)usesContiguousBarBackground;

@end
