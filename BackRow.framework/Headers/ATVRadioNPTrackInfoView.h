/* Runtime dump - ATVRadioNPTrackInfoView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRAutoScrollingTextControl, BRImageControl, BRTextControl;
@interface ATVRadioNPTrackInfoView : BRControl
{
    char _leftArrowState;
    char _rightArrowState;
    ATVDataItem * _radioTrack;
    BRImageControl * _leftArrow;
    BRImageControl * _rightArrow;
    ATVImage * _rightArrowActiveImage;
    ATVImage * _rightArrowInactiveImage;
    BRAutoScrollingTextControl * _titleControl;
    BRTextControl * _subTitleControl;
    NSDictionary * _titleAttributes;
    NSDictionary * _subTitleAttributes;
}

@property (retain, nonatomic) ATVDataItem * radioTrack;
@property (nonatomic) char leftArrowState;
@property (nonatomic) char rightArrowState;
@property (retain, nonatomic) BRImageControl * leftArrow;
@property (retain, nonatomic) BRImageControl * rightArrow;
@property (retain, nonatomic) ATVImage * rightArrowActiveImage;
@property (retain, nonatomic) ATVImage * rightArrowInactiveImage;
@property (retain, nonatomic) BRAutoScrollingTextControl * titleControl;
@property (retain, nonatomic) BRTextControl * subTitleControl;
@property (retain, nonatomic) NSDictionary * titleAttributes;
@property (retain, nonatomic) NSDictionary * subTitleAttributes;

- (void)layoutSubcontrols;
- (ATVDataItem *)radioTrack;
- (void)setRadioTrack:(ATVDataItem *)arg0;
- (BRAutoScrollingTextControl *)titleControl;
- (void)setTitleControl:(BRAutoScrollingTextControl *)arg0;
- (void)setLeftArrowState:(char)arg0;
- (void)setRightArrowState:(char)arg0;
- (void)setRightArrowActiveImage:(ATVImage *)arg0;
- (void)setRightArrowInactiveImage:(ATVImage *)arg0;
- (void)setLeftArrow:(BRImageControl *)arg0;
- (void)setRightArrow:(BRImageControl *)arg0;
- (void)setSubTitleControl:(BRTextControl *)arg0;
- (BRTextControl *)subTitleControl;
- (void)setTitleAttributes:(NSDictionary *)arg0;
- (void)setSubTitleAttributes:(NSDictionary *)arg0;
- (NSDictionary *)titleAttributes;
- (NSDictionary *)subTitleAttributes;
- (ATVImage *)rightArrowActiveImage;
- (ATVImage *)rightArrowInactiveImage;
- (char)leftArrowState;
- (char)rightArrowState;
- (BRImageControl *)leftArrow;
- (BRImageControl *)rightArrow;
- (ATVRadioNPTrackInfoView *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void).cxx_destruct;

@end
