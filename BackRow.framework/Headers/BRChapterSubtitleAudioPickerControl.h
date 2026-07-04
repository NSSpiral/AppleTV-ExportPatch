/* Runtime dump - BRChapterSubtitleAudioPickerControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRTabControlDelegate;

@class BRControl, BRCoverArtPreviewControl, BREvent, BRMediaPlayer, BRTabControl, BRTabControlItem, BRTextControl, BRVideoChapterProvider, BRWaitPromptControl;
@interface BRChapterSubtitleAudioPickerControl : BRControl <BRTabControlDelegate>
{
    BRVideoChapterProvider * _chapterProvider;
    BRCoverArtPreviewControl * _preview;
    BRControl * _csaPicker;
    BRTabControl * _tabControl;
    BRTextControl * _titleControl;
    BRMediaPlayer * _player;
    BRControl * _currentContentControl;
    BRWaitPromptControl * _spinner;
    BRTextControl * _subtitleExplanatoryTextcontrol;
    char _controlWasActivated;
    char _controlWasDeactivated;
    char _playbackShouldRemainPaused;
    char _subtitleListNeedsReload;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (CALayer *)controlWithPlayer:(BRMediaPlayer *)arg0;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasActivated;
- (void)tabControl:(BRTabControl *)arg0 didSelectTabItem:(BRTabControlItem *)arg1;
- (void)tabControl:(BRTabControl *)arg0 willSelectTabItem:(BRTabControlItem *)arg1;
- (void)tabControlDidChangeNumberOfTabItems:(BRTabControl *)arg0;
- (void)_selectedAudioOptionChanged:(NSNotification *)arg0;
- (void)_selectedSubtitleOptionChanged:(NSNotification *)arg0;
- (void)_voiceOverToggled:(id)arg0;
- (void)_createCSAPicker;
- (void)_speakerListChanged:(NSNotification *)arg0;
- (void)_subtitleOptionsChanged:(NSNotification *)arg0;
- (NSDictionary *)_titleControlItemLabelAttributes;
- (void)_animatePreviewBackToScreenshot;
- (void)_addCSAPicker;
- (void)_loadChapters;
- (void)_loadSubtitleList;
- (void)_loadAudioList;
- (void)_loadSpeakersList;
- (id)_swizzleSubtitleOptionToAutoIfNecessary:(id)arg0 availableOptions:(NSDictionary *)arg1;
- (char)_chapterPreviewsAvailable;
- (void)_loadGraphicalChapterList;
- (void)_loadTextualChapterList;
- (void)_setChapter:(ATVChapter *)arg0;
- (void)_setSubtitleOption:(ATVSubtitleOption *)arg0;
- (void)_setAudioOption:(ATVAudioOption *)arg0;
- (void)_selectSpeaker:(id)arg0;
- (void)_setSubtitleListNeedsReload;
- (void)_endPositionForPreview:(struct CGPoint *)arg0 forReflection:(struct CGPoint *)arg1;
- (void)dealloc;
- (BRChapterSubtitleAudioPickerControl *)init;
- (void).cxx_destruct;
- (void)orderOut;
- (void)setPlayer:(BRMediaPlayer *)arg0;

@end
