/* Runtime dump - BRDetailedMediaControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRActionShelfControl, BRControl, BRCoverArtPreviewControl, BREvent, BRTextControl;
@interface BRDetailedMediaControl : BRControl
{
    BRControl * _metadata;
    BRCoverArtPreviewControl * _coverArtPreviewControl;
    BRControl * _textLine;
    BRControl * _previewBrowser;
    BRActionShelfControl * _actionShelf;
    BRTextControl * _expiryText;
    <BRProvider> * _metadataProvider;
    <BRProvider> * _previewBrowserProvider;
    int _style;
    char _detailsTogglingEnabled;
    char _autoRefreshMetadata;
}

+ (char)_wantsCoverArt;

- (char)brEventAction:(BREvent *)arg0;
- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (struct CGRect)focusCursorFrame;
- (void)setDetailControlStyle:(int)arg0;
- (void)enableDetailsToggling;
- (void)invokeActionSelectionHandler;
- (void)setActionSelectionHandler:(id /* block */)arg0;
- (void)setActionStyle:(int)arg0;
- (void)setActionProviders:(id)arg0;
- (void)setActionFocusedIndex:(long)arg0;
- (BRControl *)detailedMetadataControl;
- (void)setDetailedMetadataControl:(BRControl *)arg0;
- (void)setTextLine:(BRControl *)arg0;
- (<BRProvider> *)metadataProvider;
- (void)setMetadataProvider:(<BRProvider> *)arg0;
- (void)setExpiryText:(BRTextControl *)arg0;
- (int)detailControlStyle;
- (id)textLineControl;
- (BRActionShelfControl *)actionShelf;
- (NSArray *)actionProviders;
- (<BRProvider> *)previewBrowserProvider;
- (void)setPreviewBrowserProvider:(<BRProvider> *)arg0;
- (void)setAutoRefreshMetadata:(char)arg0;
- (void)_focusedActionChanged:(NSNotification *)arg0;
- (void)dealloc;
- (BRDetailedMediaControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setImageProxy:(NSObject *)arg0;
- (void)setMediaType:(NSObject *)arg0;

@end
