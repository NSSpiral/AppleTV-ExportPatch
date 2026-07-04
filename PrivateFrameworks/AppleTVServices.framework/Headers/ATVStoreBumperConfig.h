/* Runtime dump - ATVStoreBumperConfig
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVStoreBumperConfig : NSObject
{
    NSURL * _videoURL;
    NSString * _warningTextFormatString;
    NSString * _appleIDFormatString;
    NSString * _logoURLTemplateString;
    double _textDwellTime;
}

@property (retain, nonatomic) NSURL * videoURL;
@property (retain, nonatomic) NSString * warningTextFormatString;
@property (retain, nonatomic) NSString * appleIDFormatString;
@property (retain, nonatomic) NSString * logoURLTemplateString;
@property (nonatomic) double textDwellTime;

- (ATVStoreBumperConfig *)initWithDictionary:(NSDictionary *)arg0;
- (void).cxx_destruct;
- (NSURL *)videoURL;
- (void)setVideoURL:(NSURL *)arg0;
- (double)textDwellTime;
- (void)setTextDwellTime:(double)arg0;
- (NSString *)logoURLTemplateString;
- (NSString *)warningTextFormatString;
- (void)setWarningTextFormatString:(NSString *)arg0;
- (NSString *)appleIDFormatString;
- (void)setAppleIDFormatString:(NSString *)arg0;
- (void)setLogoURLTemplateString:(NSString *)arg0;

@end
