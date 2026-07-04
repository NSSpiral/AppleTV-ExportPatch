/* Runtime dump - WebBookmarkWebFilterSettings
 * Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkWebFilterSettings : NSObject
{
    WFUserSettings * _userSettings;
}

@property (readonly, nonatomic) WFUserSettings * userSettings;
@property (readonly, nonatomic) char webFilterEnabled;
@property (readonly, nonatomic) char webFilterWhiteListOnlyModeEnabled;

+ (WebBookmarkWebFilterSettings *)sharedWebFilterSettings;

- (void)dealloc;
- (WebBookmarkWebFilterSettings *)init;
- (WFUserSettings *)userSettings;
- (char)isWebFilterWhiteListOnlyModeEnabled;
- (void)reloadSettings;
- (char)isWebFilterEnabled;

@end
