/* Runtime dump - AXLangMap
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXLangMap : NSObject
{
    char _western;
    char _ambiguous;
    AXDialectMap * userLocaleDialect;
    NSArray * _dialects;
    NSString * _generalLanguageID;
    AXDialectMap * _userPreferredDialect;
    NSArray * _alternateLanguageIDs;
    NSArray * _associatedAmbiguousLanguages;
}

@property (nonatomic) char western;
@property (nonatomic) char ambiguous;
@property (copy, nonatomic) NSString * generalLanguageID;
@property (retain, nonatomic) NSArray * alternateLanguageIDs;
@property (retain, nonatomic) NSArray * dialects;
@property (retain, nonatomic) NSArray * associatedAmbiguousLanguages;
@property (readonly, nonatomic) AXDialectMap * defaultDialect;
@property (readonly, nonatomic) AXDialectMap * userLocaleDialect;
@property (readonly, nonatomic) NSArray * alternativeVoiceIdentifiers;
@property (nonatomic) AXDialectMap * userPreferredDialect;

- (void)dealloc;
- (NSString *)description;
- (NSString *)debugDescription;
- (char)isAmbiguous;
- (char)isWestern;
- (void)setWestern:(char)arg0;
- (void)setAmbiguous:(char)arg0;
- (void)setGeneralLanguageID:(NSString *)arg0;
- (void)setAlternateLanguageIDs:(NSArray *)arg0;
- (void)setDialects:(NSArray *)arg0;
- (void)setAssociatedAmbiguousLanguages:(NSArray *)arg0;
- (NSString *)generalLanguageID;
- (NSArray *)dialects;
- (void)setUserPreferredDialect:(AXDialectMap *)arg0;
- (NSString *)basicDescription;
- (NSArray *)alternateLanguageIDs;
- (AXDialectMap *)userPreferredDialect;
- (AXDialectMap *)userLocaleDialect;
- (AXLangMap *)initWithLanguageID:(NSString *)arg0 isWestern:(char)arg1 isAmbiguous:(char)arg2 dialects:(NSArray *)arg3 alternateLanguageIDs:(NSArray *)arg4 associatedAmbiguousLanguages:(NSArray *)arg5;
- (AXDialectMap *)defaultDialect;
- (NSString *)dialectWithLocaleIdentifier:(NSString *)arg0;
- (NSArray *)alternativeVoiceIdentifiers;
- (NSArray *)associatedAmbiguousLanguages;

@end
