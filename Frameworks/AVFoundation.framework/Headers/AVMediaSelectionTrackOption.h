/* Runtime dump - AVMediaSelectionTrackOption
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption
{
    id _groupID;
    AVAssetTrack * _track;
    NSDictionary * _dictionary;
    AVWeakReference * _weakReferenceToGroup;
    char _displaysNonForcedSubtitles;
}

- (NSArray *)availableMetadataFormats;
- (NSString *)metadataForFormat:(NSString *)arg0;
- (NSString *)_groupID;
- (char)displaysNonForcedSubtitles;
- (AVMediaSelectionTrackOption *)initWithAsset:(NSSet *)arg0 group:(NSObject *)arg1 dictionary:(NSDictionary *)arg2;
- (NSObject *)associatedMediaSelectionOptionInMediaSelectionGroup:(NSObject *)arg0;
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
- (int)trackID;
- (AVAssetTrack *)track;

@end
