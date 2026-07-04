/* Runtime dump - BRSlideshowSettingsController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRControl, BREvent, BRListControl, BRMarimbaMenuView, BRMarimbaSlideshowMusicSetting, BRMenuItem, BRPhotoMediaCollection;
@interface BRSlideshowSettingsController : BRViewController
{
    BRMarimbaMenuView * _marimbaMenuView;
    NSMutableArray * _menuHistory;
    NSMutableArray * _slideshowThemes;
    NSTimer * _randomThemeSwappingTimer;
    int _currentMenuType;
    char _memoryWarningAlreadyReceived;
    NSArray * _musicServers;
    ATVDataServer * _defaultMusicServer;
    NSString * _defaultPlaylistName;
    BRMarimbaSlideshowMusicSetting * _defaultMusicSettings;
    ATVDataQuery * _playlistNamePlaylistsQuery;
    ATVDataServer * _playlistsListViewServer;
    ATVDataQuery * _playlistsListViewQuery;
    NSArray * _playlistsListViewPlaylists;
    NSTimer * _focusSettleTimer;
    NSIndexPath * _ignoreRepeatEventsForIndexPath;
    id _playHandler;
}

@property (retain, nonatomic) NSArray * musicServers;
@property (retain, nonatomic) ATVDataServer * defaultMusicServer;
@property (retain, nonatomic) NSString * defaultPlaylistName;
@property (retain, nonatomic) BRMarimbaSlideshowMusicSetting * defaultMusicSettings;
@property (retain, nonatomic) ATVDataQuery * playlistNamePlaylistsQuery;
@property (retain, nonatomic) ATVDataServer * playlistsListViewServer;
@property (retain, nonatomic) ATVDataQuery * playlistsListViewQuery;
@property (retain, nonatomic) NSArray * playlistsListViewPlaylists;
@property (nonatomic) NSTimer * focusSettleTimer;
@property (retain, nonatomic) NSIndexPath * ignoreRepeatEventsForIndexPath;
@property (copy, nonatomic) id playHandler;

+ (BRSlideshowSettingsController *)slideshowTransitionTitles;
+ (NSString *)transitionIdentifierForTitle:(NSString *)arg0;
+ (NSArray *)timePerSlideValues;
+ (BRSlideshowSettingsController *)_randomlySelectedSlideshowThemeKeyFromCollection:(id)arg0;
+ (unsigned int)_numberOfTransitions;
+ (NSData *)_transitionsData;
+ (NSObject *)_transitionTitleAtIndex:(unsigned int)arg0;
+ (unsigned int)_indexOfTransitionID:(NSObject *)arg0;
+ (NSObject *)_transitionIDAtIndex:(unsigned int)arg0;
+ (NSString *)randomlySelectedSlideshowThemeKey;
+ (BRSlideshowSettingsController *)randomTransitionIDs;

- (char)brEventAction:(BREvent *)arg0;
- (void)_lowMemoryNotification:(NSNotification *)arg0;
- (void)wasPopped;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (float)list:(BRListControl *)arg0 heightForSectionHeader:(long)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (BRSlideshowSettingsController *)initWithMediaCollection:(BRPhotoMediaCollection *)arg0 playHandler:(id /* block */)arg1;
- (void)_toggleTimePerSlide;
- (void)setPlayHandler:(id /* block */)arg0;
- (void)setDefaultMusicSettings:(BRMarimbaSlideshowMusicSetting *)arg0;
- (BRMarimbaSlideshowMusicSetting *)defaultMusicSettings;
- (void)setDefaultMusicServer:(ATVDataServer *)arg0;
- (ATVDataServer *)defaultMusicServer;
- (void)_setMusicServer:(NSObject *)arg0 playlistID:(NSNumber *)arg1 playlist:(MCAudioPlaylist *)arg2;
- (void)_switchToMenuType:(int)arg0 rememberCurrentMenu:(char)arg1;
- (void)_musicServersChangedNotification:(NSNotification *)arg0;
- (void)_initiatePlaylistNameQueryWithDefaultServer;
- (void)setMusicServers:(NSArray *)arg0;
- (void)setDefaultPlaylistName:(NSString *)arg0;
- (void)_clearPlaylistNameQuery;
- (void)_clearMusicViewData;
- (void)_returnToPreviousMenu;
- (void)_setFocusSettleTimer:(NSObject *)arg0;
- (BRMenuItem *)_mainSettingsMenuList:(NSArray *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (BRMenuItem *)_themeDetailsMenuList:(NSArray *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (BRMenuItem *)_musicLibraryMenuList:(NSArray *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (BRMenuItem *)_playlistMenuList:(NSArray *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)_mainSettingsMenuNumberOfSectionsInList:(NSArray *)arg0;
- (long)_themeDetailsMenuNumberOfSectionsInList:(NSArray *)arg0;
- (long)_musicLibraryMenuNumberOfSectionsInList:(NSArray *)arg0;
- (long)_playlistMenuNumberOfSectionsInList:(NSArray *)arg0;
- (long)_mainSettingsMenuList:(NSArray *)arg0 numberOfRowsInSection:(long)arg1;
- (long)_themeDetailsMenuList:(NSArray *)arg0 numberOfRowsInSection:(long)arg1;
- (long)_musicLibraryMenuList:(NSArray *)arg0 numberOfRowsInSection:(long)arg1;
- (long)_playlistMenuList:(NSArray *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)_mainSettingsMenuList:(NSArray *)arg0 sectionHeaderForSection:(long)arg1;
- (BRControl *)_themeDetailsMenuList:(NSArray *)arg0 sectionHeaderForSection:(long)arg1;
- (BRControl *)_musicLibraryMenuList:(NSArray *)arg0 sectionHeaderForSection:(long)arg1;
- (BRControl *)_playlistMenuList:(NSArray *)arg0 sectionHeaderForSection:(long)arg1;
- (void)setIgnoreRepeatEventsForIndexPath:(NSIndexPath *)arg0;
- (void)_focusSettleTimerFired:(id)arg0;
- (void)_didFocusItemAtIndexPath:(NSIndexPath *)arg0;
- (void)_mainSettingsMenuList:(NSArray *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_themeDetailsMenuList:(NSArray *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSTimer *)focusSettleTimer;
- (void)_mainSettingsMenuList:(NSArray *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_themeDetailsMenuList:(NSArray *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_musicLibraryMenuList:(NSArray *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_playlistMenuList:(NSArray *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (NSMutableArray *)_slideshowThemes;
- (NSString *)defaultPlaylistName;
- (id /* block */)playHandler;
- (void)_swapSlideshowTheme:(id)arg0;
- (id)_allSharedComputers;
- (char)_isCloudEnabled;
- (NSString *)_musicServerForMusicListViewIndexPath:(NSIndexPath *)arg0;
- (ATVDataQuery *)playlistNamePlaylistsQuery;
- (void)setPlaylistNamePlaylistsQuery:(ATVDataQuery *)arg0;
- (void)setPlaylistsListViewQuery:(ATVDataQuery *)arg0;
- (ATVDataQuery *)playlistsListViewQuery;
- (void)setPlaylistsListViewServer:(ATVDataServer *)arg0;
- (void)setPlaylistsListViewPlaylists:(NSArray *)arg0;
- (NSArray *)playlistsListViewPlaylists;
- (ATVDataServer *)playlistsListViewServer;
- (unsigned int)_indexOfCurrentSlideshowTheme;
- (void)_updateListFocusOnMenuSwitch;
- (NSArray *)musicServers;
- (void)_initiatePlaylistNameQueryWithDataClient:(NSObject *)arg0;
- (void)_playlistNameDataClientStatusChanged:(NSNotification *)arg0;
- (int)_indexOfStringItem:(NSObject *)arg0 inArray:(id *)arg1 itemCount:(int)arg2;
- (NSIndexPath *)ignoreRepeatEventsForIndexPath;
- (void)dealloc;
- (BRSlideshowSettingsController *)init;
- (void).cxx_destruct;

@end
