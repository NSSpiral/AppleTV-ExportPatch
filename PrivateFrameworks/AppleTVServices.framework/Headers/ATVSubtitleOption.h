/* Runtime dump - ATVSubtitleOption
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVSubtitleOption : NSObject
{
    NSString * _languageCodeFromLocale;
    NSString * _languageCodeBCP47;
    NSString * _identifier;
    NSString * _localizedDisplayString;
    AVMediaSelectionOption * _avMediaSelectionOption;
    NSNumber * _cachedContainsOnlyForcedSubtitles;
    NSNumber * _cachedSubtitleType;
}

@property (copy, nonatomic) NSString * languageCodeFromLocale;
@property (copy, nonatomic) NSString * languageCodeBCP47;
@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSString * localizedDisplayString;
@property (readonly, nonatomic) char containsOnlyForcedSubtitles;
@property (readonly, nonatomic) int subtitleType;
@property (retain, nonatomic) AVMediaSelectionOption * avMediaSelectionOption;
@property (retain, nonatomic) NSNumber * cachedContainsOnlyForcedSubtitles;
@property (retain, nonatomic) NSNumber * cachedSubtitleType;

+ (ATVSubtitleOption *)offSubtitleOption;
+ (ATVSubtitleOption *)autoSubtitleOption;
+ (ATVSubtitleOption *)offSubtitleOptionWithAVMediaSelectionOption:(id)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (void)_currentLocaleDidChange:(NSDictionary *)arg0;
- (AVMediaSelectionOption *)avMediaSelectionOption;
- (NSString *)localizedDisplayString;
- (void)setLocalizedDisplayString:(NSString *)arg0;
- (NSString *)languageCodeFromLocale;
- (NSString *)languageCodeBCP47;
- (void)setLanguageCodeFromLocale:(NSString *)arg0;
- (void)setLanguageCodeBCP47:(NSString *)arg0;
- (void)setAvMediaSelectionOption:(AVMediaSelectionOption *)arg0;
- (ATVSubtitleOption *)initWithAVMediaSelectionOption:(AVMediaSelectionOption *)arg0;
- (int)subtitleType;
- (char)containsOnlyForcedSubtitles;
- (NSNumber *)cachedContainsOnlyForcedSubtitles;
- (void)setCachedContainsOnlyForcedSubtitles:(NSNumber *)arg0;
- (NSNumber *)cachedSubtitleType;
- (void)setCachedSubtitleType:(NSNumber *)arg0;

@end
