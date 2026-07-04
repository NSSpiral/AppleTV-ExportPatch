/* Runtime dump - BRMetadataControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRHorizontalDividerControl, BRImageControl, BRMetadataLinesLayer, BRTextControl, WLKShowContentRating;
@interface BRMetadataControl : BRControl
{
    BRTextControl * _titleLayer;
    BRTextControl * _rightJustifiedTitleLayer;
    BRImageControl * _ratingImageLayer;
    BRControl * _likesRatingLayer;
    BRImageControl * _topRightImageLayer;
    BRImageControl * _bottomRightImageLayer;
    BRTextControl * _summaryLayer;
    BRMetadataLinesLayer * _metadataLinesLayer;
    BRTextControl * _copyrightLayer;
    BRHorizontalDividerControl * _topDividerLayer;
    BRHorizontalDividerControl * _middleDividerLayer;
    BRHorizontalDividerControl * _bottomDividerLayer;
    NSArray * _metadataObjs;
    NSArray * _metadataLabels;
    float _totalHeight;
    int _alignment;
}

@property (retain, nonatomic) NSString * rightJustifiedTitle;

- (void)layoutSubcontrols;
- (void)windowMaxBoundsChanged;
- (struct CGSize)renderedSize;
- (void)setMetadata:(NSArray *)arg0 withLabels:(NSArray *)arg1;
- (void)setRightJustifiedTitle:(NSString *)arg0;
- (void)setNumberOfLikes:(int)arg0 numberOfDislikes:(int)arg1;
- (void)resetAllFields;
- (void)setTopRightImage:(UIImage *)arg0;
- (void)setBottomRightImage:(UIImage *)arg0;
- (void)_setRating:(WLKShowContentRating *)arg0;
- (void)_setNumberOfLikes:(int)arg0 numberOfDislikes:(int)arg1;
- (void)_setSummary:(CKDPZoneRetrieveResponseZoneSummary *)arg0;
- (void)_setMetadata:(NSData *)arg0 withLabels:(NSArray *)arg1;
- (void)_setCopyright:(id)arg0;
- (void)_setTopRightImage:(UIImage *)arg0;
- (void)_setBottomRightImage:(UIImage *)arg0;
- (NSString *)rightJustifiedTitle;
- (void)setRatingImage:(UIImage *)arg0;
- (id)topRightImageControl;
- (void)setAlignment:(int)arg0;
- (void)dealloc;
- (BRMetadataControl *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)accessibilityLabel;
- (void)_setTitle:(NSString *)arg0;
- (void)setRating:(WLKShowContentRating *)arg0;
- (void)setCopyright:(NSString *)arg0;
- (void)setSummary:(NSString *)arg0;

@end
