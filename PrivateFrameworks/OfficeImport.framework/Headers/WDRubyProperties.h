/* Runtime dump - WDRubyProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDRubyProperties : NSObject
{
    id mOriginal;
    struct ? * mOriginalProperties;
}

@property (nonatomic) int alignment;
@property (nonatomic) unsigned short phoneticGuideFontSize;
@property (nonatomic) unsigned short baseFontSize;
@property (nonatomic) unsigned short distanceBetween;
@property (nonatomic) int phoneticGuideLanguage;

- (void)setAlignment:(int)arg0;
- (void)dealloc;
- (WDRubyProperties *)init;
- (int)alignment;
- (char)isAlignmentOverridden;
- (char)isAnythingOverridden;
- (char)isAnythingOverriddenIn:(struct ? *)arg0;
- (void)clearAlignment;
- (unsigned short)phoneticGuideFontSize;
- (void)setPhoneticGuideFontSize:(unsigned short)arg0;
- (char)isPhoneticGuideFontSizeOverridden;
- (void)clearPhoneticGuideFontSize;
- (unsigned short)baseFontSize;
- (void)setBaseFontSize:(unsigned short)arg0;
- (char)isBaseFontSizeOverridden;
- (void)clearBaseFontSize;
- (unsigned short)distanceBetween;
- (void)setDistanceBetween:(unsigned short)arg0;
- (char)isDistanceBetweenOverridden;
- (void)clearDistanceBetween;
- (int)phoneticGuideLanguage;
- (void)setPhoneticGuideLanguage:(int)arg0;
- (char)isPhoneticGuideLanguageOverridden;
- (void)clearPhoneticGuideLanguage;

@end
