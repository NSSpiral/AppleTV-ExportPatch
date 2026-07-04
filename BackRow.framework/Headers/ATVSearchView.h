/* Runtime dump - ATVSearchView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMediaMenuView.h>

@class BRControl, BREvent, BRImageControl, BRTextEntryControl;
@interface ATVSearchView : BRMediaMenuView
{
    BRImageControl * _verticalDividerImage;
    char _previewEnabled;
    BRTextEntryControl * _editor;
    <ATVSearchViewDelegate> * _delegate;
    BRControl * _searchDescriptionPreview;
}

@property char previewEnabled;
@property (readonly) BRTextEntryControl * editor;
@property (nonatomic) <ATVSearchViewDelegate> * delegate;
@property int focusedSearchViewControl;
@property (retain, nonatomic) BRControl * searchDescriptionPreview;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (BRTextEntryControl *)editor;
- (void)setPreview:(BRControl *)arg0;
- (void)setSearchDescriptionPreview:(BRControl *)arg0;
- (ATVSearchView *)initWithPreviewEnabled:(char)arg0;
- (int)focusedSearchViewControl;
- (void)_hideEditor;
- (void)_focusDidChangeToControl:(int)arg0;
- (void)_displayEditor;
- (char)previewEnabled;
- (BRControl *)searchDescriptionPreview;
- (void)setFocusedSearchViewControl:(int)arg0;
- (char)_shouldSetFocusToListForEvent:(NSObject *)arg0;
- (void)setPreviewEnabled:(char)arg0;
- (void)dealloc;
- (void)setDelegate:(<ATVSearchViewDelegate> *)arg0;
- (ATVSearchView *)init;
- (<ATVSearchViewDelegate> *)delegate;

@end
