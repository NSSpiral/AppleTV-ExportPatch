/* Runtime dump - AVMediaSelectionKeyValueOption
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption
{
    id _groupID;
    id _groupMediaType;
    NSString * _optionMediaType;
    NSDictionary * _dictionary;
    AVWeakReference * _weakReferenceToGroup;
    char _displaysNonForcedSubtitles;
}

- (NSArray *)availableMetadataFormats;
- (NSString *)metadataForFormat:(NSString *)arg0;
- (NSObject *)_groupMediaType;
- (NSString *)_groupID;
- (AVMediaSelectionKeyValueOption *)initWithAsset:(NSSet *)arg0 group:(NSObject *)arg1 dictionary:(NSDictionary *)arg2;
- (NSArray *)mediaSubTypes;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSDictionary *)dictionary;
- (NSLocale *)locale;
- (void *)group;
- (NSArray *)commonMetadata;
- (char)isPlayable;
- (NSString *)mediaType;
- (char)hasMediaCharacteristic:(id)arg0;

@end
