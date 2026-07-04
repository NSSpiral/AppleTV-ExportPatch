/* Runtime dump - YTCaptionTrack
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTCaptionTrack : NSObject
{
    YTVideo * _video;
    NSString * _title;
    NSString * _language;
    NSURL * _captionTrackURL;
    char _speechRecognition;
}

@property (retain, nonatomic) YTVideo * video;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * language;
@property (retain, nonatomic) NSURL * captionTrackURL;
@property (nonatomic) char speechRecognition;

- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)title;
- (NSString *)language;
- (void)setLanguage:(NSString *)arg0;
- (void)setVideo:(YTVideo *)arg0;
- (YTVideo *)video;
- (void)setCaptionTrackURL:(NSURL *)arg0;
- (void)setSpeechRecognition:(char)arg0;
- (NSURL *)captionTrackURL;
- (char)speechRecognition;

@end
