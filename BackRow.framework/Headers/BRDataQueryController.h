/* Runtime dump - BRDataQueryController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol BRTypeaheadPhraseAccumulatorChangeHandler;

@class BRListControl, BRMediaMenuView, BRMenuItem, BRTypeaheadPhraseAccumulator;
@interface BRDataQueryController : BRViewController <BRTypeaheadPhraseAccumulatorChangeHandler>
{
    id _serverID;
    unsigned int _dataClientType;
    ATVDataClient * _dataClient;
    BRMediaMenuView * _mediaMenuView;
    NSArray * _data;
    ATVDataQuery * _preDataQuery;
    ATVDataQuery * _dataQuery;
    ATVDataQuery * _previewQuery;
    ATVDataQuery * _queueQuery;
    NSTimer * _spinnerTimer;
    char _showingSpinner;
    void * _dataItemToSelect;
    ATVDataQuery * _playQuery;
    char _handlingDataClientUpdate;
    char _reloadListViewNeeded;
    char _refreshNeeded;
    char _attemptConnectionOnRecoveredServer;
    char _popToRootWhenExhumed;
    unsigned int _updateDataClientTypes;
    NSString * _spinnerLoadingText;
}

@property (readonly, nonatomic) ATVDataClient * dataClient;
@property (readonly, nonatomic) char refreshNeeded;
@property (readonly, nonatomic) char isProcessingQuery;
@property (nonatomic) unsigned int updateDataClientTypes;
@property (nonatomic) char attemptConnectionOnRecoveredServer;
@property (retain, nonatomic) NSString * spinnerLoadingText;
@property (nonatomic) char popToRootWhenExhumed;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)controllerForATVMediaType:(NSObject *)arg0 collection:(RadioArtworkCollection *)arg1 dataClient:(ATVDataClient *)arg2 dataClientType:(unsigned int)arg3 playAllItems:(char)arg4;

- (void)_dataClientConnectionHandlerWithObject:(NSObject *)arg0;
- (NSArray *)accessibilityScreenContent;
- (void)_dataClientStatusChanged:(NSNotification *)arg0;
- (void)wasPushed;
- (void)wasPopped;
- (void)controlWasDeactivated;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (void)controlWasActivated;
- (BRMediaMenuView *)mediaMenuView;
- (void)_executeDataQuery;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_showSpinner:(char)arg0;
- (void)wasExhumed;
- (BRDataQueryController *)initWithDataClient:(ATVDataClient *)arg0 dataClientType:(unsigned int)arg1;
- (char)isProcessingQuery;
- (char)isQueryResultValid:(id)arg0;
- (unsigned int)itemIndexForPhrase:(id)arg0 inItems:(NSArray *)arg1;
- (NSError *)errorForNoContent;
- (NSObject *)newDataQuery;
- (NSString *)newPreviewQueryForIndexPath:(NSIndexPath *)arg0;
- (NSString *)newPlayQueryForIndexPath:(NSIndexPath *)arg0;
- (void)playQueryComplete:(id)arg0;
- (char)dataClientUpdated:(id)arg0;
- (char)dataQueryComplete:(ATVDataQuery *)arg0;
- (char)typeaheadPhraseAccumulator:(BRTypeaheadPhraseAccumulator *)arg0 phraseChanged:(NSString *)arg1;
- (void)_dataQueryComplete;
- (NSArray *)previewForItems:(NSArray *)arg0;
- (NSObject *)newPreDataQuery;
- (char)preDataQueryComplete:(id)arg0;
- (void *)dataItemAtIndexPath:(NSIndexPath *)arg0;
- (int)typeaheadSelectionOffset;
- (void)setDataItemToSelect:(void *)arg0;
- (void)resolveQueueQueryForSelectedItemWithAction:(int)arg0;
- (void)restartDataQueryProcess;
- (NSObject *)errorControlForQuery:(NSObject *)arg0;
- (NSObject *)indexPathForDataItem:(void *)arg0;
- (NSString *)dataClientName;
- (void)_setDataQuery:(NSObject *)arg0;
- (void)_updateDisabledStateForMenusInList:(NSArray *)arg0;
- (char)previewQueryComplete:(id)arg0;
- (void)setSpinnerLoadingText:(NSString *)arg0;
- (void)_showSpinner:(char)arg0 delay:(char)arg1 displayLoadingText:(char)arg2;
- (char)dataServerConnectionChanged:(NSNotification *)arg0;
- (BRDataQueryController *)initWithServerID:(ATVHSDataServerID *)arg0 dataClientType:(unsigned int)arg1;
- (void)setUpdateDataClientTypes:(unsigned int)arg0;
- (void)setAttemptConnectionOnRecoveredServer:(char)arg0;
- (NSString *)controllerIdentifier;
- (id)defaultIndexPathToSelect;
- (NSString *)typeaheadPropertyName;
- (void)_setServerID:(NSObject *)arg0 dataClientType:(unsigned int)arg1;
- (void)_mediaItemPropertySetNotification:(NSNotification *)arg0;
- (void)_setDataClient:(NSObject *)arg0;
- (void)_displayFailedToConnect;
- (void)_connectToHomeShare:(id)arg0;
- (void)_executePreDataQuery;
- (void)_setPreviewQuery:(NSObject *)arg0;
- (void)_setQueueQuery:(NSObject *)arg0;
- (void)_setPlayQuery:(NSObject *)arg0;
- (void *)dataItemToSelect;
- (char)refreshNeeded;
- (unsigned int)updateDataClientTypes;
- (char)attemptConnectionOnRecoveredServer;
- (NSString *)spinnerLoadingText;
- (char)popToRootWhenExhumed;
- (void)setPopToRootWhenExhumed:(char)arg0;
- (void)_showSpinnerTimer:(NSObject *)arg0;
- (void)_displayErrorForQuery:(NSObject *)arg0;
- (void)_handleDataQueryCompletion;
- (id)waitControl;
- (void)_dataServerConnectionHandler:(id /* block */)arg0;
- (void)_setPreDataQuery:(NSObject *)arg0;
- (void)_showMediaView;
- (void)_preDataQueryComplete;
- (void)_previewQueryComplete;
- (void)_playQueryComplete;
- (char)handleUpdateNotification:(NSNotification *)arg0;
- (NSArray *)currentItems;
- (void)dealloc;
- (NSString *)identifier;
- (NSArray *)data;
- (ATVDataClient *)dataClient;
- (ATVHSDataServerID *)serverID;
- (ATVDataServer *)dataServer;
- (void)_dataClientConnectionHandler:(id /* block */)arg0;
- (void)_dataClientDataUpdated:(ATVDataClient *)arg0;
- (unsigned int)dataClientType;

@end
