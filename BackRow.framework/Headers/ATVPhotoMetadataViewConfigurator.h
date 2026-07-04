/* Runtime dump - ATVPhotoMetadataViewConfigurator
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVPhotoMetadataCommentView, ATVPhotoMetadataHeaderView;
@interface ATVPhotoMetadataViewConfigurator : NSObject
{
    char _fadeTransitionEnabled;
    ATVPhotoMetadataHeaderView * _headerPart;
    ATVPhotoMetadataCommentView * _commentsPart;
    double _fadeTransitionDuration;
}

@property (nonatomic) double fadeTransitionDuration;
@property (nonatomic) char fadeTransitionEnabled;
@property (nonatomic) char displayDisabled;
@property (retain, nonatomic) ATVPhotoMetadataHeaderView * headerPart;
@property (retain, nonatomic) ATVPhotoMetadataCommentView * commentsPart;

- (ATVPhotoMetadataHeaderView *)headerPart;
- (ATVPhotoMetadataCommentView *)commentsPart;
- (void)setFadeTransitionEnabled:(char)arg0;
- (char)displayDisabled;
- (void)setDisplayDisabled:(char)arg0;
- (void)setHeaderPart:(ATVPhotoMetadataHeaderView *)arg0;
- (void)setCommentsPart:(ATVPhotoMetadataCommentView *)arg0;
- (double)fadeTransitionDuration;
- (void)setfadeTransitionEnabled:(char)arg0;
- (void)setFadeTransitionDuration:(double)arg0;
- (char)fadeTransitionEnabled;
- (ATVPhotoMetadataViewConfigurator *)init;
- (void).cxx_destruct;

@end
