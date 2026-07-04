/* Runtime dump - AVAssetMediaSelectionGroup
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup
{
    AVAsset * _asset;
    NSDictionary * _dictionary;
    NSArray * _options;
    AVMediaSelectionOption * _defaultOption;
    char _isStreamingGroup;
}

- (NSArray *)mediaSelectionOptionWithPropertyList:(NSArray *)arg0;
- (char)_isStreamingGroup;
- (AVMediaSelectionOption *)defaultOption;
- (AVAssetMediaSelectionGroup *)initWithAsset:(AVAsset *)arg0 dictionary:(NSDictionary *)arg1;
- (NSObject *)_optionWithID:(int)arg0 displaysNonForcedSubtitles:(char)arg1;
- (NSObject *)_optionWithID:(int)arg0 identifier:(NSString *)arg1 source:(NSObject *)arg2 displaysNonForcedSubtitles:(char)arg3;
- (void)dealloc;
- (AVAssetMediaSelectionGroup *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSDictionary *)dictionary;
- (NSArray *)options;
- (AVAsset *)asset;

@end
