/* Runtime dump - TPArchivedViewState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPArchivedViewState : TSPObject
{
    struct CGRect _visibleRect;
    TSKSelectionPath * _selectionPath;
    TSWPSelection * _bodySelection;
    char _masterDrawablesSelectable;
    NSMutableDictionary * _chartUIState;
    char _rulerVisible;
    char _layoutBordersVisible;
    char _wordCountHUDVisible;
    char _showsComments;
    char _showsCTMarkup;
    char _showsCTDeletions;
    char _hasShowsCTMarkup;
    char _hasShowsCTDeletions;
    char _changeTrackingPaused;
    char _showsPageNavigator;
    char _showsActivitySidebar;
    int _viewScaleMode;
    float _viewScale;
    struct CGRect _windowFrame;
    NSString * _selectedInspectorSwitchSegmentIdentifier;
    char _inspectorHidden;
    int _wordCountHUDType;
    struct CGPoint _wordCountHUDPosition;
    char _showUserDefinedGuides;
}

- (TPArchivedViewState *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (char)showsComments;
- (void)readViewStateWithConsumer:(NSObject *)arg0;
- (void)captureViewStateWithProvider:(NSObject *)arg0;
- (void)dealloc;
- (void).cxx_construct;

@end
