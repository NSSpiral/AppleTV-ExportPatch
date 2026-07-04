/* Runtime dump - MPArtworkColorAnalyzer
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArtworkColorAnalyzer : NSObject
{
    int _algorithm;
    UIImage * _image;
}

@property (readonly, nonatomic) int algorithm;
@property (readonly, nonatomic) UIImage * image;

- (MPArtworkColorAnalyzer *)initWithImage:(UIImage *)arg0 algorithm:(int)arg1;
- (void)analyzeWithCompletionHandler:(id /* block */)arg0;
- (id)_fallbackColorAnalysis;
- (int)algorithm;
- (UIImage *)image;
- (void).cxx_destruct;

@end
