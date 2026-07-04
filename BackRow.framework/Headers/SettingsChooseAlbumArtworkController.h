/* Runtime dump - SettingsChooseAlbumArtworkController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRControl, BRListControl, BRMenuItem, SettingsAlbumArtworkConnectorController;
@interface SettingsChooseAlbumArtworkController : BRViewController
{
    id _completionHandler;
    NSArray * _servers;
    NSArray * _augmentedServers;
    SettingsAlbumArtworkConnectorController * _connectionController;
}

@property (readonly, nonatomic) char isAlbumArtAvailable;
@property (copy, nonatomic) id completionHandler;
@property (copy, nonatomic) NSArray * servers;
@property (copy, nonatomic) NSArray * augmentedServers;
@property (retain, nonatomic) SettingsAlbumArtworkConnectorController * connectionController;

- (void)wasPushed;
- (void)wasPopped;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)wasExhumed;
- (void)_dataServersChanged:(NSNotification *)arg0;
- (char)_isITunesMatchAvailable;
- (int)_augmentedServerCount;
- (void)_handleSelectionWithDataClient:(NSObject *)arg0 dataClientType:(unsigned int)arg1 connectionController:(id *)arg2;
- (void)setConnectionController:(SettingsAlbumArtworkConnectorController *)arg0;
- (SettingsAlbumArtworkConnectorController *)connectionController;
- (void)_handleSelectionWithDataServer:(ATVDataServer *)arg0 dataClientType:(unsigned int)arg1 connectionController:(id *)arg2;
- (void)setAugmentedServers:(NSArray *)arg0;
- (void)_handleSelectionWithConnectedDataClient:(NSObject *)arg0;
- (void)setServers:(NSArray *)arg0;
- (NSArray *)augmentedServers;
- (char)isAlbumArtAvailable;
- (char)hasMultipleOptions:(id *)arg0;
- (char)handleSelectionUsingStack:(id)arg0 selectDefault:(char)arg1 completionHandler:(id /* block */)arg2;
- (NSArray *)servers;
- (void)dealloc;
- (SettingsChooseAlbumArtworkController *)init;
- (id /* block */)completionHandler;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;

@end
