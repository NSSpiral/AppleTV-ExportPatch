/* Runtime dump - ATVMediaListWithImageHeaderControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMediaListControl.h>

@class ATVImageHeaderView;
@interface ATVMediaListWithImageHeaderControl : BRMediaListControl
{
    ATVImageHeaderView * _imageHeaderView;
}

@property (readonly, retain, nonatomic) ATVImageHeaderView * imageHeaderView;

+ (char)_wantsHeader;

- (ATVImageHeaderView *)imageHeaderView;
- (void)layoutSubcontrols;
- (ATVMediaListWithImageHeaderControl *)init;
- (void).cxx_destruct;

@end
