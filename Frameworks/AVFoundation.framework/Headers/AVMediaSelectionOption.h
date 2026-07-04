/* Runtime dump - AVMediaSelectionOption
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMediaSelectionOption : NSObject <NSCopying>
{
    AVMediaSelectionOptionInternal * _mediaSelectionOption;
}

@property (readonly, nonatomic) char containsSurroundContent;
@property (readonly, nonatomic) NSString * localizedDisplayString;
@property (readonly, nonatomic) NSString * languageCodeFromLocale;
@property (readonly, nonatomic) NSString * localizedDisplayName;
@property (readonly, nonatomic) char mpIsAC3;
@property (readonly, nonatomic) char mpIsSDH;
@property (readonly, nonatomic) NSString * mediaType;
@property (readonly, nonatomic) NSArray * mediaSubTypes;
@property (readonly, nonatomic) char playable;
@property (readonly, nonatomic) NSString * extendedLanguageTag;
@property (readonly, nonatomic) NSLocale * locale;
@property (readonly, nonatomic) NSArray * commonMetadata;
@property (readonly, nonatomic) NSArray * availableMetadataFormats;
@property (readonly, nonatomic) NSString * displayName;
@property (readonly, nonatomic) AVAssetTrack * track;
@property (readonly, nonatomic) int trackID;

+ (AVMediaSelectionOption *)mediaSelectionOptionForAsset:(NSSet *)arg0 group:(NSObject *)arg1 dictionary:(NSDictionary *)arg2 hasUnderlyingTrack:(char)arg3;

- (NSString *)localizedDisplayString;
- (char)containsSurroundContent;
- (NSString *)languageCodeFromLocale;
- (NSString *)localizedDisplayName;
- (int)_caseInsensitiveCompare:(NSObject *)arg0;
- (char)_isAC3;
- (id)_extendedLanguageTagOrUndetermined;
- (char)mpIsSDH;
- (char)mpIsAC3;
- (NSArray *)availableMetadataFormats;
- (NSString *)metadataForFormat:(NSString *)arg0;
- (NSObject *)_groupMediaType;
- (NSString *)_groupID;
- (NSString *)_ancillaryDescription;
- (char)_isDesignatedDefault;
- (char)displaysNonForcedSubtitles;
- (id)associatedPersistentIDs;
- (NSString *)associatedExtendedLanguageTag;
- (NSArray *)_preferredMetadataTitleAccordingToPreferredLanguages:(id)arg0 fallingBackToMatchingEmptyLocale:(char)arg1;
- (NSLocale *)displayNameWithLocale:(NSLocale *)arg0 fallingBackToMatchingUndeterminedAndMultilingual:(char)arg1;
- (NSLocale *)displayNameWithLocale:(NSLocale *)arg0;
- (NSArray *)propertyList;
- (NSObject *)associatedMediaSelectionOptionInMediaSelectionGroup:(NSObject *)arg0;
- (NSArray *)mediaSubTypes;
- (void)dealloc;
- (AVMediaSelectionOption *)init;
- (NSString *)description;
- (NSDictionary *)dictionary;
- (AVMediaSelectionOption *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)_title;
- (NSLocale *)locale;
- (void *)group;
- (NSString *)displayName;
- (NSArray *)commonMetadata;
- (char)isPlayable;
- (NSString *)mediaType;
- (char)hasMediaCharacteristic:(id)arg0;
- (int)trackID;
- (NSObject *)optionID;
- (NSString *)extendedLanguageTag;
- (NSString *)outOfBandIdentifier;
- (NSObject *)outOfBandSource;
- (AVAssetTrack *)track;

@end
