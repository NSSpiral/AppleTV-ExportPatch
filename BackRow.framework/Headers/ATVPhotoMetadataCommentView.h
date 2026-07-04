/* Runtime dump - ATVPhotoMetadataCommentView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BREvent;
@interface ATVPhotoMetadataCommentView : BRControl
{
    char _displayDisabled;
    BRControl * _commentsView;
}

@property (retain, nonatomic) BRControl * commentsView;
@property (nonatomic) char displayDisabled;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (char)displayDisabled;
- (void)setDisplayDisabled:(char)arg0;
- (void)setCommentsView:(BRControl *)arg0;
- (ATVPhotoMetadataCommentView *)init;
- (void).cxx_destruct;
- (BRControl *)commentsView;

@end
