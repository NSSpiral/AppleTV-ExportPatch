/* Runtime dump - MusicMainController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/MusicController.h>

@class ATVImagePreviewView, BRControl, BRListControl, BRMenuItem;
@interface MusicMainController : MusicController
{
    BRControl * _allSongsPreview;
    char _displayNowPlaying;
    char _displayUpNext;
    ATVImagePreviewView * _matchPreivew;
    NSArray * _controllerMenuItems;
    NSString * _textEntryClient;
}

@property (retain, nonatomic) NSArray * controllerMenuItems;
@property (retain, nonatomic) NSString * textEntryClient;

+ (void)initialize;

- (void)wasPushed;
- (void)wasPopped;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (NSString *)list:(BRListControl *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 indexPathForItemID:(NSObject *)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (void)controlWasActivated;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (float)list:(BRListControl *)arg0 heightForSectionHeader:(long)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSString *)newPreviewQueryForIndexPath:(NSIndexPath *)arg0;
- (NSString *)newPlayQueryForIndexPath:(NSIndexPath *)arg0;
- (void)playQueryComplete:(id)arg0;
- (void)_updateHeaderItems;
- (void)setControllerMenuItems:(NSArray *)arg0;
- (NSString *)_menuItemTitleKeyForIndexPath:(NSIndexPath *)arg0;
- (unsigned int)_menuItemForRow:(unsigned int)arg0;
- (NSString *)_indexPathForTitleKey:(NSString *)arg0;
- (char)previewQueryComplete:(id)arg0;
- (NSArray *)controllerMenuItems;
- (NSString *)textEntryClient;
- (void)setTextEntryClient:(NSString *)arg0;
- (void)dealloc;
- (void)_networkStateChanged:(NSNotification *)arg0;

@end
