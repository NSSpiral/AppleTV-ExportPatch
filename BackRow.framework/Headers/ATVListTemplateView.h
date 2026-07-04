/* Runtime dump - ATVListTemplateView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRBlueGlowSelectionLozengeLayer, BRBlueGlowSelectionLozengeLayerBacking, BRControl, BRCursorControl, BRListView, BRScrollControl;
@interface ATVListTemplateView : BRControl
{
    BRControl * _imageHeaderView;
    BRControl * _listHeaderView;
    unsigned int _listAlignment;
    BRListView * _listView;
    BRControl * _contentView;
    BRCursorControl * _cursor;
    BRBlueGlowSelectionLozengeLayer * _listCursor;
    BRBlueGlowSelectionLozengeLayerBacking * _listBackingCursor;
    BRScrollControl * _scrollView;
}

@property (retain, nonatomic) BRControl * imageHeaderView;
@property (retain, nonatomic) BRControl * listHeaderView;
@property (nonatomic) unsigned int listAlignment;
@property (retain, nonatomic) BRListView * listView;
@property (retain, nonatomic) BRControl * contentView;
@property (retain, nonatomic) BRCursorControl * cursor;
@property (retain, nonatomic) BRBlueGlowSelectionLozengeLayer * listCursor;
@property (retain, nonatomic) BRBlueGlowSelectionLozengeLayerBacking * listBackingCursor;
@property (retain, nonatomic) BRScrollControl * scrollView;

- (void)_focusChanged:(NSNotification *)arg0;
- (BRBlueGlowSelectionLozengeLayer *)listCursor;
- (BRBlueGlowSelectionLozengeLayerBacking *)listBackingCursor;
- (NSArray *)accessibilityScreenContent;
- (unsigned int)listAlignment;
- (BRControl *)imageHeaderView;
- (BRControl *)listHeaderView;
- (BRListView *)listView;
- (void)setListAlignment:(unsigned int)arg0;
- (void)setImageHeaderView:(BRControl *)arg0;
- (void)setListHeaderView:(BRControl *)arg0;
- (void)setListView:(BRListView *)arg0;
- (void)layoutSubcontrols;
- (void)setListCursor:(BRBlueGlowSelectionLozengeLayer *)arg0;
- (void)setListBackingCursor:(BRBlueGlowSelectionLozengeLayerBacking *)arg0;
- (void)dealloc;
- (ATVListTemplateView *)init;
- (BRControl *)contentView;
- (void)setContentView:(BRControl *)arg0;
- (void)setScrollView:(BRScrollControl *)arg0;
- (BRScrollControl *)scrollView;
- (BRCursorControl *)cursor;
- (void)setCursor:(BRCursorControl *)arg0;
- (void).cxx_destruct;

@end
