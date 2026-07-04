/* Runtime dump - SettingsAirtunesController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRControl, BRListControl, BRMenuItem;
@interface SettingsAirtunesController : BRViewController
{
    NSDictionary * _selectedSpeakerInfo;
    char _selectedSpeakerIsConnecting;
    NSArray * _sortedSpeakers;
    char _speakersEnabled;
    NSCache * _rowItemCache;
}

- (void)wasPushed;
- (void)wasPopped;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)wasExhumed;
- (void)_sortListOfAirPlaySpeakers;
- (void)_reloadAirPlaySpeakers:(id)arg0;
- (void)_speakerWillBeSelected:(id)arg0;
- (void)_speakerWasSelected:(id)arg0;
- (void)_speakerSelectionWasCanceled:(id)arg0;
- (void)_CRDPreferenceChanged:(NSNotification *)arg0;
- (id)_settingsItemForRow:(long)arg0;
- (id)_speakerItemForRow:(long)arg0;
- (void)_handleSettingsItemSelectedForRow:(long)arg0;
- (void)_handleSpeakerItemSelectedForRow:(long)arg0;
- (void)dealloc;
- (SettingsAirtunesController *)init;
- (void).cxx_destruct;

@end
