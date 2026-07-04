/* Runtime dump - BRMediaMenuView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMenuView.h>

@class BRControl, BREvent, BRTextControl, BRWaitSpinnerControl;
@interface BRMediaMenuView : BRMenuView
{
    BRControl * _preview;
    NSString * _previewLabel;
    BRControl * _listHeader;
    BRTextControl * _descriptionControl;
    char _headerCanExpandListWidth;
    char _showListSpinner;
    struct ? _headerMaxWidth;
    struct ? _previewTrailingGap;
    struct ? _headerSpaceAbove;
    struct ? _headerSpaceBelow;
    struct ? _previewOffsetX;
    struct ? _previewOffsetY;
    BRWaitSpinnerControl * _listSpinner;
    BRTextControl * _listError;
}

@property (nonatomic) struct ? headerMaxWidth;
@property (nonatomic) char headerCanExpandListWidth;
@property struct ? headerSpaceAbove;
@property struct ? headerSpaceBelow;
@property (nonatomic) struct ? previewTrailingGap;
@property struct ? previewOffsetX;
@property struct ? previewOffsetY;
@property (nonatomic) char showListSpinner;
@property (nonatomic) BRWaitSpinnerControl * listSpinner;
@property (nonatomic) BRTextControl * listError;

- (char)brEventAction:(BREvent *)arg0;
- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (void)setPreview:(BRControl *)arg0;
- (void)setListHeader:(BRControl *)arg0;
- (void)setHeaderSpaceAbove:(struct ?)arg0;
- (void)setHeaderSpaceBelow:(struct ?)arg0;
- (BRControl *)preview;
- (void)setPreviewOffsetY:(struct ?)arg0;
- (void)setListError:(BRTextControl *)arg0 attributes:(NSDictionary *)arg1;
- (BRControl *)listHeader;
- (void)setShowListSpinner:(char)arg0;
- (void)setHeaderCanExpandListWidth:(char)arg0;
- (NSString *)listDescription;
- (void)setListDescription:(NSString *)arg0;
- (BRMediaMenuView *)initWithListAlignment:(int)arg0;
- (void)setHeaderMaxWidth:(struct ?)arg0;
- (void)setPreviewTrailingGap:(struct ?)arg0;
- (void)setPreviewLabel:(NSString *)arg0;
- (void)setPreviewOffsetX:(struct ?)arg0;
- (struct ?)headerSpaceAbove;
- (struct ?)headerSpaceBelow;
- (char)headerCanExpandListWidth;
- (char)_listIsFocused;
- (struct ?)headerMaxWidth;
- (struct ?)previewTrailingGap;
- (struct ?)previewOffsetX;
- (struct ?)previewOffsetY;
- (NSString *)previewLabel;
- (char)showListSpinner;
- (BRWaitSpinnerControl *)listSpinner;
- (void)setListSpinner:(BRWaitSpinnerControl *)arg0;
- (BRTextControl *)listError;
- (void)setListError:(BRTextControl *)arg0;
- (void)dealloc;
- (BRMediaMenuView *)init;
- (NSString *)accessibilityLabel;

@end
