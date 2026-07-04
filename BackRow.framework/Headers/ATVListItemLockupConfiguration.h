/* Runtime dump - ATVListItemLockupConfiguration
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVImageConfiguration;
@interface ATVListItemLockupConfiguration : NSObject
{
    struct ? _boundingBoxHeight;
    struct ? _contentHeight;
    ATVImageConfiguration * _imageConfiguration;
}

@property (nonatomic) struct ? boundingBoxHeight;
@property (nonatomic) struct ? contentHeight;
@property (readonly, retain, nonatomic) ATVImageConfiguration * imageConfiguration;

- (struct ?)boundingBoxHeight;
- (void)setBoundingBoxHeight:(struct ?)arg0;
- (ATVImageConfiguration *)imageConfiguration;
- (void)setContentHeight:(struct ?)arg0;
- (struct ?)contentHeight;
- (ATVListItemLockupConfiguration *)init;
- (void).cxx_destruct;

@end
