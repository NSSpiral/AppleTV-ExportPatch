/* Runtime dump - ATVRateControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BREvent, BRImageControl, BRTextControl;
@interface ATVRateControl : BRControl
{
    BRImageControl * _backgroundImageControl;
    BRImageControl * _arrowImageControl;
    BRTextControl * _rateTextControl;
    BRTextControl * _saveTextControl;
    BRTextControl * _titleControl;
    BRImageControl * _starImageControl;
    int _ratingType;
    int _integerRating;
    float _normalizedRating;
    id _onRatingSelectedBlock;
    id _onCancelBlock;
}

@property (copy, nonatomic) id onRatingSelected;
@property (copy, nonatomic) id onCancel;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (NSString *)_imageForKey:(NSString *)arg0;
- (void)_updateStarsShouldSpeak:(char)arg0;
- (void)_setIntegerRating:(int)arg0 shouldSpeak:(char)arg1;
- (NSNumber *)_starImageForRating:(int)arg0 predicted:(char)arg1;
- (void)setInitialRating:(float)arg0;
- (void)setInitialRatingType:(int)arg0;
- (void)setRateText:(NSString *)arg0;
- (void)setSaveText:(NSString *)arg0;
- (id)onRatingSelected;
- (void)setOnRatingSelected:(id)arg0;
- (SADomainObjectCancel *)onCancel;
- (void)setOnCancel:(SADomainObjectCancel *)arg0;
- (void)dealloc;
- (ATVRateControl *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;

@end
