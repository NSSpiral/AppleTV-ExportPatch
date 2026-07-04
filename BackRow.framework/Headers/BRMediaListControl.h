/* Runtime dump - BRMediaListControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRHeaderControl, BRListControl;
@interface BRMediaListControl : BRControl
{
    BRListControl * _list;
    BRControl * _preview;
    float _previewDelay;
    NSTimer * _previewDelayTimer;
    char _shareItemArtwork;
    BRHeaderControl * _header;
}

@property (readonly, retain, nonatomic) BRListControl * list;
@property (readonly, nonatomic) BRHeaderControl * header;
@property (readonly, retain, nonatomic) BRControl * preview;
@property char shareItemArtwork;

+ (char)_wantsHeader;

- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (BRControl *)preview;
- (UIImage *)titleImage;
- (void)setTitleImage:(UIImage *)arg0;
- (NSArray *)listProviders;
- (void)setListProviders:(id)arg0;
- (void)setShareItemArtwork:(char)arg0;
- (void)_scrollWillStart:(id)arg0;
- (void)_scrollWillStop:(id)arg0;
- (void)_cleanupPreviewDelayTimer;
- (void)updatePreview;
- (id)listProviderRequester;
- (char)shareItemArtwork;
- (void)_updatePreviewWithDelay;
- (void)_previewDelayTimerHandler:(id /* block */)arg0;
- (void)dealloc;
- (BRMediaListControl *)init;
- (void)setTitle:(NSString *)arg0;
- (void)reload;
- (NSString *)title;
- (NSString *)accessibilityLabel;
- (long)selection;
- (void)setSelection:(long)arg0;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;
- (long)itemCount;
- (BRListControl *)list;
- (BRHeaderControl *)header;

@end
