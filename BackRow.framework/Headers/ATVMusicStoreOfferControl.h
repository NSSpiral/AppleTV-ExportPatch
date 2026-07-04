/* Runtime dump - ATVMusicStoreOfferControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRTextControl;
@interface ATVMusicStoreOfferControl : BRControl
{
    BRTextControl * _topLineTextControl;
    BRTextControl * _bottomLineTextControl;
    BRImageControl * _hdImageControl;
    BRImageControl * _superHDImageControl;
    BRImageControl * _ddImageControl;
    BRImageControl * _ccImageControl;
    BRImageControl * _digitalExtrasControl;
    BRImageControl * _adImageControl;
    BRImageControl * _sdhImageControl;
    NSDictionary * _additionalBadges;
    struct CGSize _renderedSize;
    char _displaysBottomLineText;
    UIColor * _color;
}

@property char displaysBottomLineText;
@property (retain, nonatomic) UIColor * color;

- (void)layoutSubcontrols;
- (void)setWidescreen:(char)arg0 andHD:(char)arg1 andSuperHD:(char)arg2 and1080p:(char)arg3;
- (void)setDolbyDigital:(char)arg0;
- (void)setClosedCaption:(char)arg0;
- (void)setHasDigitalExtras:(char)arg0;
- (void)setHasAudioDescriptions:(char)arg0;
- (void)setHasSDH:(char)arg0;
- (void)setAdditionalBadges:(NSDictionary *)arg0;
- (void)setDisplaysBottomLineText:(char)arg0;
- (char)displaysBottomLineText;
- (id)_makeImageControl;
- (void)layoutSubcontrolsSettingFrames:(char)arg0;
- (struct CGSize)renderedSizeThatFits:(struct CGSize)arg0;
- (void)dealloc;
- (ATVMusicStoreOfferControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)accessibilityLabel;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;

@end
