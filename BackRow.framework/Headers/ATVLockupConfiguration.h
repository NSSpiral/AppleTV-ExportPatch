/* Runtime dump - ATVLockupConfiguration
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVImageConfiguration, ATVTextConfiguration;
@interface ATVLockupConfiguration : NSObject
{
    NSArray * _allowedLayouts;
    struct ? _imageHeight;
    struct ? _boundingBoxHeight;
    struct ? _boundingBoxWidth;
    float _reflectionAmount;
    float _reflectionBaseline;
    float _titleOffset;
    ATVTextConfiguration * _titleConfiguration;
    ATVTextConfiguration * _subtitleConfiguration;
    ATVTextConfiguration * _descriptionConfiguration;
    ATVImageConfiguration * _imageConfiguration;
    struct ? _reflectionHeight;
    struct ? _titleTopMargin;
    struct ? _titleBottomMargin;
}

@property (retain, nonatomic) NSArray * allowedLayouts;
@property (nonatomic) struct ? imageHeight;
@property (readonly, nonatomic) struct ? boundingBoxHeight;
@property (readonly, nonatomic) struct ? boundingBoxWidth;
@property (readonly, nonatomic) float reflectionAmount;
@property (readonly, nonatomic) float reflectionBaseline;
@property (readonly, nonatomic) float titleOffset;
@property (readonly, retain, nonatomic) ATVTextConfiguration * titleConfiguration;
@property (readonly, retain, nonatomic) ATVTextConfiguration * subtitleConfiguration;
@property (readonly, retain, nonatomic) ATVTextConfiguration * descriptionConfiguration;
@property (readonly, retain, nonatomic) ATVImageConfiguration * imageConfiguration;
@property (nonatomic) struct ? reflectionHeight;
@property (nonatomic) struct ? titleTopMargin;
@property (nonatomic) struct ? titleBottomMargin;

- (float)reflectionAmount;
- (struct ?)boundingBoxHeight;
- (ATVImageConfiguration *)imageConfiguration;
- (NSArray *)allowedLayouts;
- (void)setAllowedLayouts:(NSArray *)arg0;
- (ATVTextConfiguration *)titleConfiguration;
- (ATVTextConfiguration *)subtitleConfiguration;
- (ATVTextConfiguration *)descriptionConfiguration;
- (struct ?)reflectionHeight;
- (struct ?)titleTopMargin;
- (struct ?)titleBottomMargin;
- (float)_aspectForPlaceholder:(id)arg0;
- (void)compute;
- (struct ?)boundingBoxWidth;
- (float)reflectionBaseline;
- (void)setReflectionHeight:(struct ?)arg0;
- (void)setTitleTopMargin:(struct ?)arg0;
- (void)setTitleBottomMargin:(struct ?)arg0;
- (ATVLockupConfiguration *)init;
- (float)titleOffset;
- (void).cxx_destruct;
- (void)setImageHeight:(struct ?)arg0;
- (struct ?)imageHeight;

@end
