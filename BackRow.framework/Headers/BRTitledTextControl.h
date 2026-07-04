/* Runtime dump - BRTitledTextControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVImageAndTextControl, BRTextControl;
@interface BRTitledTextControl : BRControl
{
    unsigned int _bodyMaxLines;
    struct ? _titleBodySpacing;
    struct ? _titleSubtitleSpacing;
    ATVImageAndTextControl * _titleControl;
    ATVImageAndTextControl * _subtitleControl;
    BRTextControl * _bodyControl;
}

@property (retain, nonatomic) ATVImage * titleImage;
@property (retain, nonatomic) NSAttributedString * title;
@property (retain, nonatomic) ATVImage * subtitleImage;
@property (retain, nonatomic) NSAttributedString * subtitle;
@property (retain, nonatomic) NSAttributedString * body;
@property (nonatomic) unsigned int bodyMaxLines;
@property (nonatomic) struct ? titleBodySpacing;
@property (nonatomic) struct ? titleSubtitleSpacing;
@property (retain, nonatomic) ATVImageAndTextControl * titleControl;
@property (retain, nonatomic) ATVImageAndTextControl * subtitleControl;
@property (retain, nonatomic) BRTextControl * bodyControl;

- (void)layoutSubcontrols;
- (ATVImageAndTextControl *)titleControl;
- (void)setTitleControl:(ATVImageAndTextControl *)arg0;
- (void)setSubtitleControl:(ATVImageAndTextControl *)arg0;
- (ATVImageAndTextControl *)subtitleControl;
- (ATVImage *)titleImage;
- (void)setTitleImage:(ATVImage *)arg0;
- (BRTextControl *)bodyControl;
- (unsigned int)bodyMaxLines;
- (void)setTitleBodySpacing:(struct ?)arg0;
- (void)setTitleSubtitleSpacing:(struct ?)arg0;
- (void)setSubtitleImage:(ATVImage *)arg0;
- (ATVImage *)subtitleImage;
- (void)setBodyMaxLines:(unsigned int)arg0;
- (struct ?)titleBodySpacing;
- (struct ?)titleSubtitleSpacing;
- (void)setBodyControl:(BRTextControl *)arg0;
- (BRTitledTextControl *)init;
- (void)setTitle:(NSAttributedString *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSAttributedString *)title;
- (NSAttributedString *)subtitle;
- (NSAttributedString *)body;
- (void)setSubtitle:(NSAttributedString *)arg0;
- (void).cxx_destruct;
- (void)setBody:(NSAttributedString *)arg0;

@end
