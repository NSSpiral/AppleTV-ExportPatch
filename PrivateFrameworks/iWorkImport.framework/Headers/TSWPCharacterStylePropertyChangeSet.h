/* Runtime dump - TSWPCharacterStylePropertyChangeSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPCharacterStylePropertyChangeSet : TSSStylePropertyChangeSet
{
    TSSSpecDouble * _baselineShift;
    TSSSpecInteger * _capitalization;
    TSSSpecString * _compatibilityFontName;
    TSSSpecString * _emphasisMarks;
    TSSSpecBool * _bold;
    TSSSpecBool * _italic;
    TSSSpecColor * _fontColor;
    TSWPSpecFontFeatures * _fontFeatures;
    TSSSpecString * _fontName;
    TSSSpecDouble * _fontSize;
    TSSSpecDouble * _fontSizeDelta;
    TSSSpecDouble * _kerning;
    TSSSpecString * _language;
    TSSSpecInteger * _ligatures;
    TSSSpecDouble * _outline;
    TSSSpecColor * _outlineColor;
    TSDSpecShadow * _textShadow;
    TSSSpecColor * _strikethruColor;
    TSSSpecInteger * _strikethru;
    TSSSpecDouble * _strikethruWidth;
    TSSSpecInteger * _superscript;
    TSSSpecColor * _textBackground;
    TSSSpecDouble * _tracking;
    TSSSpecColor * _underlineColor;
    TSSSpecInteger * _underline;
    TSSSpecDouble * _underlineWidth;
    TSSSpecBool * _wordStrikethru;
    TSSSpecBool * _wordUnderline;
    TSSSpecInteger * _writingDirection;
    char _definedBaselineShift;
    char _definedCapitalization;
    char _definedCompatibilityFontName;
    char _definedEmphasisMarks;
    char _definedBold;
    char _definedItalic;
    char _definedFontColor;
    char _definedFontFeatures;
    char _definedFontName;
    char _definedFontSize;
    char _definedFontSizeDelta;
    char _definedKerning;
    char _definedLanguage;
    char _definedLigatures;
    char _definedOutline;
    char _definedOutlineColor;
    char _definedTextShadow;
    char _definedStrikethruColor;
    char _definedStrikethru;
    char _definedStrikethruWidth;
    char _definedSuperscript;
    char _definedTextBackground;
    char _definedTracking;
    char _definedUnderlineColor;
    char _definedUnderline;
    char _definedUnderlineWidth;
    char _definedWordStrikethru;
    char _definedWordUnderline;
    char _definedWritingDirection;
}

- (void)setBoxedValue:(id)arg0 forProperty:(int)arg1;
- (void)setSpec:(NSObject *)arg0 forProperty:(int)arg1;
- (void)setUnsetSpecForProperty:(int)arg0;
- (void)enumerateDefinedPropertiesWithBlock:(id /* block */)arg0;

@end
