/* Runtime dump - BRAdornedPosterControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRPosterControl.h>

@class BRImageControl, BRTextControl;
@interface BRAdornedPosterControl : BRPosterControl
{
    BRTextControl * _slugAdornment;
    BRTextControl * _titleAdornment;
    BRImageControl * _titleImageAdornment;
    BRImageControl * _logoImageAdornment;
    BRTextControl * _bodyAdornment;
    BRTextControl * _actionTextAdornment;
    int _actionTextAlignment;
    unsigned int _justification;
}

@property (retain, nonatomic) BRTextControl * slugAdornment;
@property (retain, nonatomic) BRTextControl * titleAdornment;
@property (retain, nonatomic) BRImageControl * titleImageAdornment;
@property (retain, nonatomic) BRImageControl * logoImageAdornment;
@property (retain, nonatomic) BRTextControl * bodyAdornment;
@property (retain, nonatomic) BRTextControl * actionTextAdornment;
@property (nonatomic) int actionTextAlignment;
@property (nonatomic) unsigned int justification;

- (void)layoutSubcontrols;
- (NSArray *)accessibilityControls;
- (BRImageControl *)logoImageAdornment;
- (int)actionTextAlignment;
- (BRTextControl *)actionTextAdornment;
- (BRTextControl *)slugAdornment;
- (BRTextControl *)titleAdornment;
- (BRImageControl *)titleImageAdornment;
- (BRTextControl *)bodyAdornment;
- (void)setSlugAdornment:(BRTextControl *)arg0;
- (void)setTitleAdornment:(BRTextControl *)arg0;
- (void)setTitleImageAdornment:(BRImageControl *)arg0;
- (void)setLogoImageAdornment:(BRImageControl *)arg0;
- (void)setBodyAdornment:(BRTextControl *)arg0;
- (void)setActionTextAdornment:(BRTextControl *)arg0;
- (void)setActionTextAlignment:(int)arg0;
- (void).cxx_destruct;
- (unsigned int)justification;
- (void)setJustification:(unsigned int)arg0;
- (NSString *)accessibilitySecondaryLabel;

@end
