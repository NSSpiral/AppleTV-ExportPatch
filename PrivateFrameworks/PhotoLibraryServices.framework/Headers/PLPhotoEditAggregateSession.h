/* Runtime dump - PLPhotoEditAggregateSession
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditAggregateSession : NSObject
{
    char _toggledOriginal;
    char _pluginStarted;
    char _pluginSaved;
    char __hasCropSuggestion;
    char __autoCropAdjusted;
    char __autoCropReset;
}

@property (nonatomic) char toggledOriginal;
@property (nonatomic) char pluginStarted;
@property (nonatomic) char pluginSaved;
@property (readonly, nonatomic) NSArray * _autoCropKeys;
@property (nonatomic) char _hasCropSuggestion;
@property (nonatomic) char _autoCropAdjusted;
@property (nonatomic) char _autoCropReset;

+ (struct __CFString *)_keyForSessionEnd:(int)arg0;

- (void)_setHasCropSuggestion:(char)arg0;
- (void)_setAutoCropAdjusted:(char)arg0;
- (void)_setAutoCropReset:(char)arg0;
- (char)_hasCropSuggestion;
- (char)_autoCropReset;
- (char)_autoCropAdjusted;
- (NSArray *)_autoCropKeys;
- (char)toggledOriginal;
- (char)pluginStarted;
- (char)pluginSaved;
- (id)_sessionKeysWithEnd:(int)arg0;
- (void)_recordKeys:(NSArray *)arg0;
- (void)finishSessionWithEnd:(int)arg0 newEditModel:(NSObject *)arg1 oldEditModel:(NSObject *)arg2;
- (void)notifyDidApplyAutoCrop;
- (void)notifyDidResetCrop;
- (void)notifyDidAdjustCrop;
- (void)finishSessionWithEnd:(int)arg0;
- (void)setToggledOriginal:(char)arg0;
- (void)setPluginStarted:(char)arg0;
- (void)setPluginSaved:(char)arg0;

@end
