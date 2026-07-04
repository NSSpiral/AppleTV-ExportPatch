/* Runtime dump - SettingsChoosePhotosController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRControl, BRListControl, BRMenuItem, BRMerchant;
@interface SettingsChoosePhotosController : BRViewController
{
    NSArray * _servers;
    BRControl * _cupidPreview;
    ATVDataQuery * _cupidPreviewQuery;
    NSArray * _sections;
    NSMutableDictionary * _itmsCollectionPreviewResults;
    NSMutableDictionary * _itmsCollectionPreviewQueries;
    id _ntITMSConnection;
}

@property (copy, nonatomic) NSArray * sections;
@property (retain, nonatomic) NSMutableDictionary * itmsCollectionPreviewResults;
@property (retain, nonatomic) NSMutableDictionary * itmsCollectionPreviewQueries;
@property (retain, nonatomic) id ntITMSConnection;

- (void)wasPushed;
- (void)wasPopped;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (char)_isComputersSection:(id)arg0;
- (NSObject *)_titleForServerAtIndex:(int)arg0;
- (NSDictionary *)_titleForDictionary:(NSDictionary *)arg0 merchant:(BRMerchant *)arg1;
- (void)_configureView;
- (void)_handleAdhocPhotosSelection;
- (void)_handleAppleDefaultPhotosSelection;
- (void)_handleITMSMerchantSelectionWithCollectionID:(NSString *)arg0 name:(NSString *)arg1;
- (void)_handleComputersPhotosSelectionForServer:(NSObject *)arg0;
- (void)_handleCupidSelection;
- (void)_handleFeedMerchantSelectionForMerchant:(id)arg0;
- (int)_indexOfServerWithID:(int)arg0;
- (NSDictionary *)_filterAdhocScreensaverDictionary:(NSDictionary *)arg0;
- (NSDictionary *)_filterAlbumArtScreensaverDictionary:(NSDictionary *)arg0;
- (void)_dataServersChanged:(NSNotification *)arg0;
- (NSArray *)_servers;
- (void)setItmsCollectionPreviewResults:(NSMutableDictionary *)arg0;
- (void)setItmsCollectionPreviewQueries:(NSMutableDictionary *)arg0;
- (void)_cancelITMSQueries;
- (void)_getPreviewForITMSCollectionID:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (BRControl *)_cupidPreview;
- (void)setNtITMSConnection:(NSURLConnection *)arg0;
- (NSMutableDictionary *)itmsCollectionPreviewResults;
- (NSMutableDictionary *)itmsCollectionPreviewQueries;
- (NSURLConnection *)ntITMSConnection;
- (char)_isCupidSelected;
- (NSArray *)_configureSections;
- (void)dealloc;
- (SettingsChoosePhotosController *)init;
- (void).cxx_destruct;
- (void)setSections:(NSArray *)arg0;
- (NSArray *)sections;

@end
