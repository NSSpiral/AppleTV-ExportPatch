/* Runtime dump - ATVDetailedMediaWithImageHeaderControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRDetailedMediaControl.h>

@class ATVImageHeaderView, BRControl, BRPosterControl, BRTextControl;
@interface ATVDetailedMediaWithImageHeaderControl : BRDetailedMediaControl
{
    ATVImageHeaderView * _imageHeaderView;
    BRPosterControl * _posterControl;
    NSArray * _ratingsControls;
}

@property (readonly, retain, nonatomic) ATVImageHeaderView * imageHeaderView;
@property (retain, nonatomic) BRPosterControl * posterControl;
@property (copy, nonatomic) NSArray * ratingsControls;

+ (char)_wantsCoverArt;

- (ATVImageHeaderView *)imageHeaderView;
- (void)layoutSubcontrols;
- (void)setDetailedMetadataControl:(BRControl *)arg0;
- (NSArray *)ratingsControls;
- (void)setRatingsControls:(NSArray *)arg0;
- (void)setExpiryText:(BRTextControl *)arg0;
- (BRPosterControl *)posterControl;
- (void)setPosterControl:(BRPosterControl *)arg0;
- (ATVDetailedMediaWithImageHeaderControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void).cxx_destruct;
- (void)setImageProxy:(NSObject *)arg0;

@end
