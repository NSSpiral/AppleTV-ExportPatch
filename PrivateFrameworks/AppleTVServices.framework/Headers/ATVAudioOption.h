/* Runtime dump - ATVAudioOption
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVAudioOption : NSObject
{
    NSString * _languageCodeFromLocale;
    NSString * _languageCodeBCP47;
    NSString * _localizedDisplayString;
    NSString * _title;
    AVMediaSelectionOption * _avMediaSelectionOption;
    NSNumber * _cachedContainsSurroundContent;
    NSNumber * _cachedDescribesVideo;
}

@property (copy, nonatomic) NSString * languageCodeFromLocale;
@property (copy, nonatomic) NSString * languageCodeBCP47;
@property (copy, nonatomic) NSString * localizedDisplayString;
@property (copy, nonatomic) NSString * title;
@property (readonly, nonatomic) char containsSurroundContent;
@property (readonly, nonatomic) char describesVideo;
@property (retain, nonatomic) AVMediaSelectionOption * avMediaSelectionOption;
@property (retain, nonatomic) NSNumber * cachedContainsSurroundContent;
@property (retain, nonatomic) NSNumber * cachedDescribesVideo;

- (ATVAudioOption *)initWithOption:(AVMediaSelectionOption *)arg0;
- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)title;
- (void).cxx_destruct;
- (void)_currentLocaleDidChange:(NSDictionary *)arg0;
- (AVMediaSelectionOption *)avMediaSelectionOption;
- (NSString *)localizedDisplayString;
- (NSNumber *)cachedContainsSurroundContent;
- (char)containsSurroundContent;
- (void)setCachedContainsSurroundContent:(NSNumber *)arg0;
- (NSNumber *)cachedDescribesVideo;
- (void)setCachedDescribesVideo:(NSNumber *)arg0;
- (void)setLocalizedDisplayString:(NSString *)arg0;
- (NSString *)languageCodeFromLocale;
- (NSString *)languageCodeBCP47;
- (char)describesVideo;
- (void)setLanguageCodeFromLocale:(NSString *)arg0;
- (void)setLanguageCodeBCP47:(NSString *)arg0;
- (void)setAvMediaSelectionOption:(AVMediaSelectionOption *)arg0;

@end
