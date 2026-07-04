/* Runtime dump - PDSlideChild
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDSlideChild : PDSlideBase
{
    char mShowMasterPlaceholderAnimations;
    char mShowMasterShapes;
    OADThemeOverrides * mThemeOverrides;
    OADColorMap * mColorMapOverride;
}

- (void)dealloc;
- (PDSlideChild *)init;
- (OADColorScheme *)colorScheme;
- (OADStyleMatrix *)styleMatrix;
- (OADColorMap *)colorMap;
- (OADFontScheme *)fontScheme;
- (char)showMasterShapes;
- (id)drawingTheme;
- (void)doneWithContent;
- (id)themeOverrides;
- (void)setColorMapOverride:(id)arg0;
- (void)setShowMasterShapes:(char)arg0;
- (void)setShowMasterPlaceholderAnimations:(char)arg0;
- (id)colorMapOverride;
- (char)showMasterPlaceholderAnimations;

@end
