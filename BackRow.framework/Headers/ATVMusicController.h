/* Runtime dump - ATVMusicController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMediaMenuView, BRMenuItem;
@interface ATVMusicController : BRViewController
{
    BRMediaMenuView * _mediaMenuView;
    NSArray * _unvalidatedRootMenus;
    char _waitPromptShowing;
    NSTimer * _waitPromptTimer;
    NSArray * _rootMenus;
}

@property (retain, nonatomic) NSArray * rootMenus;

+ (void)initialize;

- (void)wasPushed;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (BRMediaMenuView *)mediaMenuView;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSMutableArray *)_favorites;
- (void)_favoriteAdded:(id)arg0;
- (void)_favoriteRemoved:(id)arg0;
- (UIImage *)_favoritesArtwork;
- (NSArray *)_validatedRootMenus:(id)arg0;
- (void)setRootMenus:(NSArray *)arg0;
- (void)_showWaitPrompt;
- (void)_updateRootMenus;
- (void)_storeMenuLoaded:(id)arg0;
- (void)_waitForStore;
- (NSArray *)rootMenus;
- (void)dealloc;
- (ATVMusicController *)init;
- (void).cxx_destruct;
- (void)_reload;

@end
