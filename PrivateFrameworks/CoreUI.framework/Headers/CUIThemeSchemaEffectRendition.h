/* Runtime dump - CUIThemeSchemaEffectRendition
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIThemeSchemaEffectRendition : CUIThemeRendition
{
    NSDictionary * _cuiInfo;
    CUIShapeEffectPreset * _effectPreset;
    CUIImage * _referenceImage;
}

- (void)dealloc;
- (CUIShapeEffectPreset *)effectPreset;
- (CUIThemeSchemaEffectRendition *)initWithCoreUIOptions:(NSDictionary *)arg0 forKey:(struct _renditionkeytoken *)arg1 artworkStatus:(struct _renditionkeytoken)arg2;
- (void)_initializeCoreUIOptions:(NSDictionary *)arg0;
- (CUIImage *)referenceImage;
- (CUIThemeSchemaEffectRendition *)initWithCoreUIOptions:(NSDictionary *)arg0 forKey:(struct _renditionkeytoken *)arg1;
- (NSDictionary *)coreUIOptions;
- (char)_generateReferenceImage;

@end
