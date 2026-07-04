/* Runtime dump - MusicUpNextController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRControl, BREvent, BRListControl, BRMenuItem;
@interface MusicUpNextController : BRViewController
{
    NSArray * _queuedAssets;
    unsigned int _manualQueueCount;
    char _editMode;
    NSIndexPath * _refreshIndexPath;
}

@property (copy) NSIndexPath * refreshIndexPath;

- (char)brEventAction:(BREvent *)arg0;
- (void)controlWasDeactivated;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (void)controlWasActivated;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSArray *)providersForContextMenu;
- (void)_handleContextMenuSelection:(id /* block */)arg0;
- (void)_queueChanged:(NSNotification *)arg0;
- (void)_refresh;
- (void)_mediaChanged:(NSNotification *)arg0;
- (void)_exitEditMode;
- (SEL)_selectorForDirection:(int)arg0;
- (NSIndexPath *)refreshIndexPath;
- (void)_enterEditMode;
- (void)_playCurrentSelectionNow;
- (void)_purge;
- (void)_redraw;
- (void)setRefreshIndexPath:(NSIndexPath *)arg0;
- (void)_refreshWithSelectedIndexPath:(NSIndexPath *)arg0;
- (void)_nope;
- (void)_moveCurrentSelectionUp;
- (void)_moveCurrentSelectionDown;
- (void)_promoteCurrentSelectionToManualQueue;
- (unsigned int)_currentlySelectedIndex;
- (void)_deleteCurrentSelection;
- (void)_removeCurrentSelection;
- (void)_playCurrentSelectionNext;
- (void)_addCurrentSelectionToQueue;
- (void)dealloc;
- (MusicUpNextController *)init;
- (void)_moveCurrentSelection:(int)arg0;
- (void).cxx_destruct;
- (void)_loadData;

@end
