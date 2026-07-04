/* Runtime dump - PLToolbar
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLToolbar : UIToolbar
{
    id _backgroundHidden;
    id _backgroundAlwaysVisible;
    UIToolbar * _persistentToolbar;
}

@property (nonatomic) char backgroundHidden;
@property (nonatomic) char backgroundAlwaysVisible;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (char)isBackgroundHidden;
- (void)setBackgroundHidden:(char)arg0;
- (char)isBackgroundAlwaysVisible;
- (void)setBackgroundAlwaysVisible:(char)arg0;

@end
