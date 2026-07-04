/* Runtime dump - AVAssetWriterInputSelectionOption
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputSelectionOption : AVMediaSelectionOption
{
    AVAssetWriterInput * _input;
    NSString * _mediaType;
    NSDictionary * _outputSettings;
    struct opaqueCMFormatDescription * _sourceFormatHint;
    NSString * _languageCode;
    NSString * _extendedLanguageTag;
    NSArray * _metadata;
    NSDictionary * _trackReferences;
    char _displaysNonForcedSubtitles;
    char _enabled;
}

@property (readonly, nonatomic) AVAssetWriterInput * input;
@property (readonly, nonatomic) NSString * mediaType;
@property (readonly, nonatomic) NSDictionary * outputSettings;
@property (readonly, nonatomic) struct opaqueCMFormatDescription * sourceFormatHint;
@property (readonly, nonatomic) NSString * languageCode;
@property (readonly, nonatomic) NSString * extendedLanguageTag;
@property (readonly, nonatomic) NSArray * metadata;
@property (readonly, nonatomic) NSDictionary * trackReferences;
@property (readonly, nonatomic) char displaysNonForcedSubtitles;

+ (AVAssetWriterInputSelectionOption *)assetWriterInputSelectionOptionWithAssetWriterInput:(AVAssetWriterInput *)arg0 displaysNonForcedSubtitles:(char)arg1;
+ (AVAssetWriterInputSelectionOption *)assetWriterInputSelectionOptionWithAssetWriterInput:(AVAssetWriterInput *)arg0;

- (NSArray *)availableMetadataFormats;
- (NSString *)metadataForFormat:(NSString *)arg0;
- (struct opaqueCMFormatDescription *)sourceFormatHint;
- (AVAssetWriterInputSelectionOption *)initWithAssetWriterInput:(AVAssetWriterInput *)arg0;
- (AVAssetWriterInputSelectionOption *)initWithAssetWriterInput:(AVAssetWriterInput *)arg0 displaysNonForcedSubtitles:(char)arg1;
- (char)_hasEqualValueForKey:(NSString *)arg0 asObject:(NSObject *)arg1;
- (id)_taggedCharacteristics;
- (char)_isAuxiliaryContent;
- (char)_isMainProgramContent;
- (NSString *)_ancillaryDescription;
- (char)_isDesignatedDefault;
- (char)displaysNonForcedSubtitles;
- (NSArray *)propertyList;
- (NSObject *)associatedMediaSelectionOptionInMediaSelectionGroup:(NSObject *)arg0;
- (NSDictionary *)trackReferences;
- (NSArray *)mediaSubTypes;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (AVAssetWriterInput *)input;
- (NSLocale *)locale;
- (NSString *)languageCode;
- (NSDictionary *)outputSettings;
- (NSArray *)metadata;
- (NSArray *)commonMetadata;
- (char)isPlayable;
- (NSString *)mediaType;
- (char)hasMediaCharacteristic:(id)arg0;
- (NSString *)extendedLanguageTag;
- (void)finalize;

@end
