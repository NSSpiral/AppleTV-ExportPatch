/* Runtime dump - AVMetadataItem
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataItem : NSObject <AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying>
{
    AVMetadataItemInternal * _priv;
}

@property (readonly) NSString * stringValue;
@property (readonly) NSNumber * numberValue;
@property (readonly) NSDate * dateValue;
@property (readonly) NSData * dataValue;
@property (readonly, copy) NSString * identifier;
@property (readonly, copy) NSString * extendedLanguageTag;
@property (readonly, copy) NSLocale * locale;
@property (readonly) struct ? time;
@property (readonly) struct ? duration;
@property (readonly, copy) NSString * dataType;
@property (readonly, copy) <NSObject><NSCopying> * value;
@property (readonly, copy) NSDictionary * extraAttributes;

+ (NSString *)identifierForKey:(NSString *)arg0 keySpace:(NSString *)arg1;
+ (NSString *)keySpaceForIdentifier:(NSString *)arg0;
+ (NSString *)keyForIdentifier:(NSString *)arg0;
+ (char)_clientExpectsISOUserDataKeysInQuickTimeUserDataKeySpace;
+ (NSString *)_isoUserDataKeysRequiringKeySpaceConversion;
+ (AVMetadataItem *)_replaceQuickTimeUserDataKeySpaceWithISOUserDataKeySpaceIfRequired:(id)arg0;
+ (AVMetadataItem *)dataTypeForValue:(id)arg0;
+ (AVMetadataItem *)metadataItemsFromArray:(NSArray *)arg0 filteredByIdentifier:(NSString *)arg1;
+ (AVMetadataItem *)metadataItemsFromArray:(NSArray *)arg0 withStringValue:(NSString *)arg1;
+ (AVMetadataItem *)metadataItemsFromArray:(NSArray *)arg0 filteredByMetadataItemFilter:(NSObject *)arg1;
+ (NSArray *)_figMetadataPropertyFromMetadataItems:(NSArray *)arg0;
+ (AVMetadataItem *)metadataItemsFromArray:(NSArray *)arg0 withLocale:(NSLocale *)arg1;
+ (void)initialize;
+ (AVMetadataItem *)metadataItemsFromArray:(NSArray *)arg0 withKey:(NSString *)arg1 keySpace:(NSString *)arg2;
+ (AVMetadataItem *)metadataItemsFromArray:(NSArray *)arg0 filteredAndSortedAccordingToPreferredLanguages:(id)arg1;

- (NSString *)dataType;
- (void)_extractPropertiesFromDictionary:(NSDictionary *)arg0;
- (void)_updateCommonKey;
- (void)_makeValueReady;
- (void)_makePropertiesReady;
- (void)_updateIdentifier;
- (void)_updateExtendedLanguageTagFromLocale:(NSObject *)arg0;
- (void)_updateLocaleFromExtendedLanguageTag:(NSString *)arg0;
- (NSString *)_keyAsString;
- (struct CGImage *)imageValue;
- (NSDictionary *)intrinsicAttributesOfExtraAttributes:(NSDictionary *)arg0;
- (char)_areExtraAttributesOf:(id)arg0 comparableToExtraAttributesOf:(id)arg1;
- (NSDictionary *)_figMetadataProperties;
- (NSObject *)_serializationDataType;
- (NSString *)_figMetadataFormat;
- (NSDictionary *)_figMetadataDictionary;
- (NSObject *)_initWithReader:(struct OpaqueFigMetadataReader *)arg0 itemIndex:(long)arg1;
- (NSDictionary *)_initWithFigMetadataDictionary:(NSDictionary *)arg0;
- (NSError *)_figMetadataSpecificationReturningError:(id *)arg0;
- (void *)_copyValueAsCFTypeWithFormatDescription:(struct opaqueCMFormatDescription *)arg0 failureReason:(id *)arg1;
- (NSArray *)_conformingDataTypes;
- (void)dealloc;
- (AVMetadataItem *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (struct ?)duration;
- (NSString *)key;
- (NSString *)identifier;
- (<NSObject><NSCopying> *)value;
- (AVMetadataItem *)copyWithZone:(struct _NSZone *)arg0;
- (struct ?)time;
- (NSString *)stringValue;
- (AVMetadataItem *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSLocale *)locale;
- (NSDate *)dateValue;
- (NSString *)commonKey;
- (NSData *)dataValue;
- (NSDictionary *)extraAttributes;
- (int)statusOfValueForKey:(NSString *)arg0 error:(id *)arg1;
- (void)loadValuesAsynchronouslyForKeys:(NSArray *)arg0 completionHandler:(id /* block */)arg1;
- (NSString *)extendedLanguageTag;
- (void)finalize;
- (NSNumber *)numberValue;
- (void)cancelLoading;
- (NSString *)keySpace;

@end
