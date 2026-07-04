/* Runtime dump - BRKeyboardHistory
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRKeyboard.h>

@class BRBlueGlowSelectionLozengeLayer, BRBlueGlowSelectionLozengeLayerBacking, BRContextMenuControl, BRControl, BRKeyboardControl, BRKeyboardHistoryControl, BRListControl, BRListView, BRMenuItem, BRScrollControl, BRWaitSpinnerControl;
@interface BRKeyboardHistory : BRKeyboard
{
    BRKeyboardHistoryControl * _keyboardHistoryControl;
    BRListView * _recentItemsList;
    BRBlueGlowSelectionLozengeLayer * _cursor;
    BRBlueGlowSelectionLozengeLayerBacking * _backingCursor;
    BRScrollControl * _scroller;
    BRWaitSpinnerControl * _spinner;
    BRContextMenuControl * _contextMenu;
    NSArray * _textEntryHistoryClientsForDisplay;
    NSArray * _textEntryHistoryBehaviorsForDisplay;
    int _textEntryStyle;
    struct ? _preferredTextEntryWidth;
    struct ? _preferredTextEntryHeight;
    struct ? _keyboardControlFrame;
    struct ? _textFieldBackgroundHeight;
    struct ? _textFieldBackgroundFrame;
    struct ? _textFieldFrame;
    struct ? _spinnerFrame;
    struct ? _textFieldLabelFrame;
    struct ? _tabControlFrame;
}

- (BRKeyboardHistory *)initWithTextEntryStyle:(int)arg0;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)displayTextEntryHistoryForClients:(id)arg0 textEntryBehaviors:(NSArray *)arg1;
- (float)list:(BRListControl *)arg0 heightForSectionHeader:(long)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_handleContextMenuSelection:(id /* block */)arg0;
- (void)startSpinning;
- (void)stopSpinning;
- (void)_contextMenuCancelItemSelected:(id)arg0;
- (id)_processGlyphDataChunk:(id)arg0;
- (NSString *)switchToThisKeyboardIdentifier;
- (NSArray *)customizedTextEntryFieldControls;
- (void)customizedTextFieldControlsWereRemoved;
- (NSArray *)customizeTextEntryControls:(id)arg0;
- (void)removeCustomizedTextEntryControls:(id)arg0;
- (BRKeyboardControl *)keyboardControl;
- (char)textEntryControlShouldHandleMainKeysEvents;
- (id)popupKeyboardForKeyControl:(BRControl *)arg0 textEntryControl:(BRControl *)arg1;
- (char)requiresTextFieldLabel;
- (NSString *)_keyboardDataFileName;
- (NSData *)_filterRawKeyboardData:(NSData *)arg0;
- (int)_numberOfMainKeyRows;
- (NSData *)_controlForData:(NSData *)arg0;
- (NSString *)_glyphDataForTextString:(NSString *)arg0 attributes:(NSDictionary *)arg1;
- (NSArray *)_glyphDataForStrings:(id)arg0 attributes:(NSDictionary *)arg1;
- (UIImage *)_glyphDataForImage:(UIImage *)arg0;
- (NSObject *)_mainKeyRowPlane;
- (float)_preferredTextEntryControlWidth;
- (struct CGRect)keyboardControlFrame;
- (struct CGRect)textFieldLabelFrame;
- (struct CGRect)textFieldBackgroundFrame;
- (struct CGRect)textFieldFrame;
- (struct CGRect)tabControlFrame;
- (struct CGRect)spinnerFrame;
- (void)_textEntryHistoryChanged:(NSNotification *)arg0;
- (void)_listViewFocusChanged:(NSNotification *)arg0;
- (id)_providersForContextMenu;
- (void)_dismissContextMenu;
- (id)_controlForContextMenuStart;
- (id)_controlForContextMenuPositioning;
- (id)_controlToDim;
- (int)_contextMenuDimOption;
- (void)dealloc;
- (NSString *)name;
- (char)handleEvent:(NSDictionary *)arg0;

@end
