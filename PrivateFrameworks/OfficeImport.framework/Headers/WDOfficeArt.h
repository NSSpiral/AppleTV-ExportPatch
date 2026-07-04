/* Runtime dump - WDOfficeArt
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDOfficeArt : WDRun
{
    WDCharacterProperties * mProperties;
    OADDrawable * mDrawable;
    BOOL mFloating;
}

+ (int)textBoxTextTypeForRegularTextType:(int)arg0;

- (BOOL)isFloating;
- (void)clearProperties;
- (void)dealloc;
- (void)setFloating:(BOOL)arg0;
- (void)setProperties:(NSDictionary *)arg0;
- (NSDictionary *)properties;
- (NSData *)imageData;
- (char)isDrawableOverridden;
- (TSDDrawableInfo *)drawable;
- (int)runType;
- (void)setDrawable:(TSDDrawableInfo *)arg0;
- (WDOfficeArt *)initWithParagraph:(CPParagraph *)arg0;
- (void)setTextType:(int)arg0 recursivelyToDrawable:(id)arg1;
- (id)overrideDrawable;
- (void)clearDrawable;
- (id)imageBlipRef;
- (void)setImageBlipRef:(id)arg0;
- (void)propagateTextTypeToDrawables;
- (void)checkForFloating:(id)arg0;
- (NSString *)imageName;

@end
