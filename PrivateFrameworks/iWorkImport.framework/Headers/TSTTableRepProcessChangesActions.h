/* Runtime dump - TSTTableRepProcessChangesActions
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableRepProcessChangesActions : NSObject
{
    char _invalidateAllChrome;
    char _invalidateAllChromeCaches;
    char _invalidateColumnChrome;
    char _invalidateRowChrome;
    char _hideChromeContextMenuButton;
    char _invalidateKnobs;
    char _invalidateSelection;
    char _invalidateTableName;
    char _updateEditorRemainders;
    char _syncReferenceHighlightState;
    char _setNeedsDisplay;
    char _hideStepperHUD;
    struct TSUColumnRowRect _dirtyCellRange;
    struct TSUColumnRowRect _dirtyStrokeRange;
}

@property (nonatomic) struct TSUColumnRowRect dirtyCellRange;
@property (nonatomic) struct TSUColumnRowRect dirtyStrokeRange;
@property (nonatomic) char invalidateAllChrome;
@property (nonatomic) char invalidateAllChromeCaches;
@property (nonatomic) char invalidateColumnChrome;
@property (nonatomic) char invalidateRowChrome;
@property (nonatomic) char hideChromeContextMenuButton;
@property (nonatomic) char invalidateKnobs;
@property (nonatomic) char invalidateSelection;
@property (nonatomic) char invalidateTableName;
@property (nonatomic) char updateEditorRemainders;
@property (nonatomic) char syncReferenceHighlightState;
@property (nonatomic) char setNeedsDisplay;
@property (nonatomic) char hideStepperHUD;

- (void)setDirtyCellRange:(struct TSUColumnRowRect)arg0;
- (void)setDirtyStrokeRange:(struct TSUColumnRowRect)arg0;
- (struct TSUColumnRowRect)dirtyCellRange;
- (struct TSUColumnRowRect)dirtyStrokeRange;
- (char)invalidateAllChrome;
- (void)setInvalidateAllChrome:(char)arg0;
- (char)invalidateAllChromeCaches;
- (void)setInvalidateAllChromeCaches:(char)arg0;
- (char)invalidateColumnChrome;
- (void)setInvalidateColumnChrome:(char)arg0;
- (char)invalidateRowChrome;
- (void)setInvalidateRowChrome:(char)arg0;
- (char)hideChromeContextMenuButton;
- (void)setHideChromeContextMenuButton:(char)arg0;
- (char)invalidateKnobs;
- (void)setInvalidateKnobs:(char)arg0;
- (char)invalidateSelection;
- (void)setInvalidateSelection:(char)arg0;
- (char)invalidateTableName;
- (void)setInvalidateTableName:(char)arg0;
- (char)updateEditorRemainders;
- (void)setUpdateEditorRemainders:(char)arg0;
- (char)syncReferenceHighlightState;
- (void)setSyncReferenceHighlightState:(char)arg0;
- (void)setSetNeedsDisplay:(char)arg0;
- (char)hideStepperHUD;
- (void)setHideStepperHUD:(char)arg0;
- (char)setNeedsDisplay;
- (void).cxx_construct;

@end
