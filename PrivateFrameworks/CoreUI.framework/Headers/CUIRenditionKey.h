/* Runtime dump - CUIRenditionKey
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIRenditionKey : NSObject <NSCopying, NSCoding>
{
    id _stackKey;
    struct _renditionkeytoken * _key;
    unsigned short _highwaterKeyCount;
}

+ (void)initialize;
+ (NSString *)renditionKey;
+ (NSString *)_placeHolderKey;
+ (NSArray *)renditionKeyWithKeyList:(struct _renditionkeytoken *)arg0;

- (void)dealloc;
- (CUIRenditionKey *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CUIRenditionKey *)init;
- (NSString *)description;
- (CUIRenditionKey *)copyWithZone:(struct _NSZone *)arg0;
- (int)themeIdiom;
- (int)themeSizeClassHorizontal;
- (int)themeSizeClassVertical;
- (CUIRenditionKey *)initWithThemeElement:(int)arg0 themePart:(int)arg1 themeSize:(int)arg2 themeDirection:(int)arg3 themeValue:(int)arg4 themeDimension1:(int)arg5 themeDimension2:(int)arg6 themeState:(int)arg7 themePresentationState:(int)arg8 themeLayer:(int)arg9 themeScale:(int)arg10 themeIdentifier:(int)arg11;
- (CUIRenditionKey *)initWithKeyList:(struct _renditionkeytoken *)arg0;
- (void)setThemeScale:(int)arg0;
- (void)setThemeLayer:(int)arg0;
- (int)themeLayer;
- (void)copyValuesFromKeyList:(struct _renditionkeytoken *)arg0;
- (void)setValuesFromKeyList:(struct _renditionkeytoken *)arg0;
- (int)themeState;
- (int)themeValue;
- (int)themeSize;
- (int)themeScale;
- (void)setThemeSize:(int)arg0;
- (void)setThemeState:(int)arg0;
- (void)setThemeValue:(int)arg0;
- (void)_expandKeyIfNecessaryForCount:(int)arg0;
- (unsigned short)_systemTokenCount;
- (int)themeElement;
- (int)themePart;
- (int)themeIdentifier;
- (int)themeSubtype;
- (NSString *)nameOfAttributeName:(int)arg0;
- (void)removeValueForKeyTokenIdentifier:(int)arg0;
- (void)setThemeElement:(int)arg0;
- (void)setThemePart:(int)arg0;
- (void)setThemeDirection:(int)arg0;
- (int)themeDirection;
- (void)setThemePreviousValue:(int)arg0;
- (int)themePreviousValue;
- (void)setThemeDimension1:(int)arg0;
- (int)themeDimension1;
- (void)setThemeDimension2:(int)arg0;
- (int)themeDimension2;
- (void)setThemePreviousState:(int)arg0;
- (int)themePreviousState;
- (void)setThemePresentationState:(int)arg0;
- (int)themePresentationState;
- (void)setThemeIdiom:(int)arg0;
- (void)setThemeSubtype:(int)arg0;
- (void)setThemeSizeClassHorizontal:(int)arg0;
- (void)setThemeSizeClassVertical:(int)arg0;
- (void)setThemeMemoryClass:(int)arg0;
- (int)themeMemoryClass;
- (void)setThemeGraphicsClass:(int)arg0;
- (int)themeGraphicsClass;
- (void)setThemeIdentifier:(int)arg0;
- (NSString *)descriptionBasedOnKeyFormat:(struct _renditionkeyfmt *)arg0;
- (struct _renditionkeytoken *)keyList;

@end
