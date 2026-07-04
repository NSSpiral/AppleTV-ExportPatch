/* Runtime dump - AVMediaSelectionGroup
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMediaSelectionGroup : NSObject <NSCopying>
{
    AVMediaSelectionGroupInternal * _mediaSelectionGroup;
}

@property (readonly, nonatomic) NSArray * options;
@property (readonly, nonatomic) AVMediaSelectionOption * defaultOption;
@property (readonly, nonatomic) char allowsEmptySelection;

+ (AVMediaSelectionGroup *)mediaSelectionGroupWithAsset:(NSSet *)arg0 dictionary:(NSDictionary *)arg1;
+ (NSArray *)mediaSelectionOptionsFromArray:(NSArray *)arg0 withLocale:(NSObject *)arg1;
+ (NSArray *)mediaSelectionOptionsFromArray:(NSArray *)arg0 filteredAndSortedAccordingToPreferredLanguages:(id)arg1;
+ (NSArray *)mediaSelectionOptionsFromArray:(NSArray *)arg0 withMediaCharacteristics:(NSArray *)arg1;
+ (NSArray *)mediaSelectionOptionsFromArray:(NSArray *)arg0 withoutMediaCharacteristics:(id)arg1;
+ (NSArray *)playableMediaSelectionOptionsFromArray:(NSArray *)arg0;

- (NSArray *)mediaSelectionOptionWithPropertyList:(NSArray *)arg0;
- (AVWeakReference *)_weakReference;
- (char)_isStreamingGroup;
- (char)allowsEmptySelection;
- (NSObject *)_groupMediaType;
- (NSString *)_groupID;
- (char)_matchesGroupID:(NSObject *)arg0 mediaType:(NSObject *)arg1;
- (AVMediaSelectionOption *)defaultOption;
- (NSObject *)_optionWithID:(int)arg0 displaysNonForcedSubtitles:(char)arg1;
- (void)dealloc;
- (AVMediaSelectionGroup *)init;
- (NSString *)description;
- (NSDictionary *)dictionary;
- (AVMediaSelectionGroup *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)options;
- (NSSet *)asset;
- (void)finalize;

@end
