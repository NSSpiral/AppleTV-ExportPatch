/* Runtime dump - SettingsCaptionSubtitlePreviewView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/SettingsPreviewView.h>
@interface SettingsCaptionSubtitlePreviewView : SettingsPreviewView
{
    struct OpaqueFigSubtitleRenderer * _subtitleRenderer;
    char usesLargePreviewImage;
    NSString * text;
}

@property (retain, nonatomic) NSString * text;
@property (nonatomic) char usesLargePreviewImage;

- (struct ?)previewImageWidth;
- (struct ?)previewImageOriginX;
- (void)setUsesLargePreviewImage:(char)arg0;
- (void)updateCaptionPreview;
- (char)usesLargePreviewImage;
- (void)dealloc;
- (SettingsCaptionSubtitlePreviewView *)init;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void).cxx_destruct;

@end
