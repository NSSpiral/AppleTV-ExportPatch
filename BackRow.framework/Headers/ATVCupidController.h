/* Runtime dump - ATVCupidController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRDataQueryController.h>

@protocol BRSecureResource;

@class BRAuthenticator, BRControl, BRListControl, BRMenuItem, BRTypeaheadPhraseAccumulator;
@interface ATVCupidController : BRDataQueryController <BRSecureResource>
{
    int _mode;
    NSArray * _sectionsData;
    NSString * _collectionIDToReload;
    ATVDataQuery * _reloadCollectionQuery;
}

@property (readonly, nonatomic) int mode;
@property (retain, nonatomic) NSArray * sectionsData;
@property (retain, nonatomic) NSString * collectionIDToReload;
@property (retain, nonatomic) ATVDataQuery * reloadCollectionQuery;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVCupidController *)rootControllerWithMode:(int)arg0;

- (BRAuthenticator *)secureResourceAuthenticator;
- (void)wasPushed;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (NSString *)list:(BRListControl *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 indexPathForItemID:(NSObject *)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (float)list:(BRListControl *)arg0 heightForSectionHeader:(long)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (NSArray *)providersForContextMenu;
- (void)wasBuried;
- (void)wasExhumed;
- (ATVCupidController *)initWithMode:(int)arg0 title:(NSString *)arg1;
- (void)_handleMembershipQueryResults:(NSArray *)arg0;
- (void)_handleShowInAlbum:(id)arg0;
- (ATVDataQuery *)reloadCollectionQuery;
- (void)setReloadCollectionQuery:(ATVDataQuery *)arg0;
- (NSString *)collectionIDToReload;
- (void)_reloadCollectionForCollectionID:(NSObject *)arg0;
- (void)setCollectionIDToReload:(NSString *)arg0;
- (NSObject *)_parseSectionsDataFromDataQuery:(NSObject *)arg0;
- (void)setSectionsData:(NSArray *)arg0;
- (char)isQueryResultValid:(id)arg0;
- (NSArray *)sectionsData;
- (NSObject *)_sectionItemsForSectionIndex:(int)arg0;
- (id)_photoBrowserControllerForCollection:(id)arg0 initialSelection:(long *)arg1;
- (void)_setScreenSaverPhotoCollection:(id)arg0;
- (void)_setSelectedSinglePhoto:(UIImage *)arg0;
- (char)_handleContextMenuSelection:(id /* block */)arg0;
- (void)_showMembershipQueryErrorDialog:(id)arg0;
- (void)_runInvitationAlertForCollection:(id)arg0 invitationAccepted:(char *)arg1 invitationDeclined:(char *)arg2;
- (NSError *)errorForNoContent;
- (NSObject *)newDataQuery;
- (NSString *)newPreviewQueryForIndexPath:(NSIndexPath *)arg0;
- (NSString *)newPlayQueryForIndexPath:(NSIndexPath *)arg0;
- (void)playQueryComplete:(id)arg0;
- (char)dataClientUpdated:(id)arg0;
- (char)dataQueryComplete:(ATVDataQuery *)arg0;
- (char)typeaheadPhraseAccumulator:(BRTypeaheadPhraseAccumulator *)arg0 phraseChanged:(NSString *)arg1;
- (NSString *)_itemAtIndexPath:(NSIndexPath *)arg0;
- (void)dealloc;
- (ATVCupidController *)init;
- (int)mode;
- (void).cxx_destruct;

@end
