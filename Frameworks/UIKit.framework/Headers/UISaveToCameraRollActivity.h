/* Runtime dump - UISaveToCameraRollActivity
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISaveToCameraRollActivity : UIActivity
{
    int _imageCount;
    int _videoCount;
}

@property (nonatomic) int imageCount;
@property (nonatomic) int videoCount;

- (NSString *)activityType;
- (UIImage *)_activityImage;
- (NSString *)activityTitle;
- (char)canPerformWithActivityItems:(NSArray *)arg0;
- (void)performActivity;
- (void)prepareWithActivityItems:(NSArray *)arg0;
- (int)imageCount;
- (void)setImageCount:(int)arg0;
- (int)videoCount;
- (void)setVideoCount:(int)arg0;

@end
