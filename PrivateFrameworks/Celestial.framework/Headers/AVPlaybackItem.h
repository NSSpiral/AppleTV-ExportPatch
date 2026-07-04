/* Runtime dump - AVPlaybackItem
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVPlaybackItem : NSObject
{
    id _delegate;
    AVItem * _avItem;
    struct OpaqueFigPlaybackItem * _fpItem;
    struct ? _currentDuration;
    struct CGSize _currentSize;
    char _currentSizeIsValid;
    char _isPreparingForInspectionInitialSamples;
    char _isPreparingForInspectionAccurateDuration;
    char _isInPlayQueue;
    double _bookmarkTime;
    NSDictionary * _streamStateNotificationInfo;
    NSDictionary * _lyricsNotificationInfo;
    NSDictionary * _inspectionNotificationInfo;
    NSDictionary * _playToEndNotificationInfo;
}

@property (retain) NSDictionary * inspectionNotificationInfo;
@property (retain) NSDictionary * playToEndNotificationInfo;
@property (retain) NSDictionary * streamStateNotificationInfo;
@property (retain) NSDictionary * lyricsNotificationInfo;
@property char isInPlayQueue;
@property (readonly) char isPreparingForInspection;
@property char isPreparingForInspectionInitialSamples;
@property char isPreparingForInspectionAccurateDuration;

+ (NSString *)convertFigTimeDictionaryToTimeIntervalWithKey:(NSString *)arg0 stringURLToNSURLWithKey:(NSString *)arg1 inArrayOfDictionaries:(id)arg2;

- (void)dealloc;
- (void)setBookmarkTime:(double)arg0;
- (NSObject *)itemAttribute:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)setItemAttribute:(NSObject *)arg0 value:(NSObject *)arg1 forKey:(NSString *)arg2 error:(id *)arg3;
- (NSArray *)formatDetailsForTracks;
- (id)nextThumbnailTimesStartingAt:(double)arg0 minimumInterval:(double)arg1 forwards:(char)arg2 maxCount:(int)arg3;
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)arg0 toEndTime:(double)arg1 maxCount:(int)arg2;
- (AVItem *)avItem;
- (void)ensureFPItem;
- (struct OpaqueFigPlaybackItem *)fpItem;
- (NSDictionary *)inspectionNotificationInfo;
- (void)makeReadyForInspection;
- (void)stealControlOfAVItem;
- (NSDictionary *)playToEndNotificationInfo;
- (NSDictionary *)lyricsNotificationInfo;
- (NSDictionary *)streamStateNotificationInfo;
- (void)removeFPListeners;
- (void)setStreamStateNotificationInfo:(NSDictionary *)arg0;
- (void)setLyricsNotificationInfo:(NSDictionary *)arg0;
- (void)setInspectionNotificationInfo:(NSDictionary *)arg0;
- (void)setPlayToEndNotificationInfo:(NSDictionary *)arg0;
- (char)isPreparingForInspectionInitialSamples;
- (char)isPreparingForInspectionAccurateDuration;
- (char)isPreparingForInspection;
- (char)isInPlayQueue;
- (void)cacheCurrentDuration;
- (void)cacheCurrentSize;
- (NSArray *)fpNotificationNames;
- (void)addFPListeners;
- (void)applyAttributesFromAVItemToFPItem:(NSObject *)arg0;
- (void)applyBookmarkTime;
- (void)fpItemNotificationName:(NSString *)arg0 userInfo:(NSDictionary *)arg1;
- (void)setIsPreparingForInspectionInitialSamples:(char)arg0;
- (void)setIsPreparingForInspectionAccurateDuration:(char)arg0;
- (id)propertiesNeededForInspection;
- (void)setIsInPlayQueue:(char)arg0;
- (void)fpItemNotificationInfo:(NSDictionary *)arg0;
- (AVPlaybackItem *)initWithDelegate:(NSObject *)arg0 item:(NSObject *)arg1;
- (char)addToPlayQueue:(struct OpaqueFigPlayer *)arg0 afterItem:(struct OpaqueFigPlaybackItem *)arg1;
- (void)removeFromPlayQueue:(struct OpaqueFigPlayer *)arg0;
- (void)setAttribute:(char *)arg0 forKey:(NSString *)arg1;
- (NSString *)attributeForKey:(NSString *)arg0;

@end
