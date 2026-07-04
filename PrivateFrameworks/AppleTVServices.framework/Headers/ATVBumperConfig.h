/* Runtime dump - ATVBumperConfig
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVBumperConfig : NSObject
{
    NSURL * _videoURL;
    ATVImage * _logoImage;
    NSAttributedString * _attributedWarningText;
    NSAttributedString * _attributedAppleIDText;
    struct ? _maxTextWidth;
    double _textDwellTime;
}

@property (retain, nonatomic) NSURL * videoURL;
@property (retain, nonatomic) ATVImage * logoImage;
@property (retain, nonatomic) NSAttributedString * attributedWarningText;
@property (retain, nonatomic) NSAttributedString * attributedAppleIDText;
@property (nonatomic) double textDwellTime;
@property (nonatomic) struct ? maxTextWidth;

- (ATVBumperConfig *)init;
- (void).cxx_destruct;
- (NSURL *)videoURL;
- (void)setVideoURL:(NSURL *)arg0;
- (ATVImage *)logoImage;
- (void)setLogoImage:(ATVImage *)arg0;
- (NSAttributedString *)attributedWarningText;
- (void)setAttributedWarningText:(NSAttributedString *)arg0;
- (NSAttributedString *)attributedAppleIDText;
- (void)setAttributedAppleIDText:(NSAttributedString *)arg0;
- (double)textDwellTime;
- (void)setTextDwellTime:(double)arg0;
- (struct ?)maxTextWidth;
- (void)setMaxTextWidth:(struct ?)arg0;

@end
