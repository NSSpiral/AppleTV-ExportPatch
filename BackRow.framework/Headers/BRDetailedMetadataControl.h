/* Runtime dump - BRDetailedMetadataControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRMetadataContainer;

@class BRHorizontalDividerControl, BRMetadataTitleControl, BRTextControl, WLKChannelDetails, WLKShowContentRating;
@interface BRDetailedMetadataControl : BRControl <BRMetadataContainer>
{
    BRMetadataTitleControl * _titleControl;
    BRHorizontalDividerControl * _topDivider;
    BRHorizontalDividerControl * _middleDivider;
    BRTextControl * _summaryControl;
    char _shouldDisplayTitle;
    char _hasiTunesExtrasBadge;
    char _iTunesExtrasBadgeIsVisible;
    NSMutableArray * _detailControls;
    int _currentDetailIndex;
    struct ? _maxSummaryHeight;
    UIColor * _titleColor;
    UIColor * _textColor;
    BRTextControl * _expiryControl;
    int _displayOption;
    NSArray * _ratingsControls;
}

@property (nonatomic) struct ? maxSummaryHeight;
@property (retain, nonatomic) UIColor * titleColor;
@property (retain, nonatomic) UIColor * textColor;
@property (nonatomic) char shouldDisplayTitle;
@property (readonly, nonatomic) BRMetadataTitleControl * titleControl;
@property (retain, nonatomic) BRTextControl * expiryControl;
@property (nonatomic) int displayOption;
@property (nonatomic) char hasiTunesExtrasBadge;
@property (nonatomic) char iTunesExtrasBadgeIsVisible;
@property (copy, nonatomic) NSArray * ratingsControls;
@property (retain, nonatomic) NSMutableArray * detailControls;
@property (nonatomic) int currentDetailIndex;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)layoutSubcontrols;
- (BRMetadataTitleControl *)titleControl;
- (void)setTitleSubtext:(BRTextControl *)arg0;
- (void)setMetadata:(NSArray *)arg0 withLabels:(NSArray *)arg1;
- (void)addDetailStrings:(id)arg0 withLabel:(NSString *)arg1;
- (BRTextControl *)expiryControl;
- (NSArray *)ratingsControls;
- (void)setRatingsControls:(NSArray *)arg0;
- (struct CGSize)metadataSizeThatFits:(struct CGSize)arg0;
- (float)renderedHeightForWidth:(float)arg0;
- (void)setShouldDisplayTitle:(char)arg0;
- (NSString *)_labelControlWithLabel:(NSString *)arg0;
- (void)setExpiryControl:(BRTextControl *)arg0;
- (void)setTopRightImage:(UIImage *)arg0;
- (void)setHasiTunesExtrasBadge:(char)arg0;
- (void)setITunesExtrasBadgeIsVisible:(char)arg0;
- (void)setTopLeftImage:(UIImage *)arg0;
- (void)addDetailPage:(id)arg0;
- (id)_detailControlsWithDetails:(WLKChannelDetails *)arg0;
- (void)setMaxSummaryHeight:(struct ?)arg0;
- (void)toggleSummaryMetadataView;
- (void)setDisplayOption:(int)arg0;
- (void)setDetailControls:(NSMutableArray *)arg0;
- (char)shouldDisplayTitle;
- (char)hasiTunesExtrasBadge;
- (void)setTopRightImage2:(UIImage *)arg0;
- (id)_currentDetailControl;
- (void)setCurrentDetailIndex:(int)arg0;
- (struct ?)maxSummaryHeight;
- (NSObject *)_detailControlAtIndex:(int)arg0;
- (NSMutableArray *)detailControls;
- (int)currentDetailIndex;
- (int)displayOption;
- (char)iTunesExtrasBadgeIsVisible;
- (void)dealloc;
- (BRDetailedMetadataControl *)init;
- (void)setTitle:(NSString *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setTextColor:(UIColor *)arg0;
- (NSString *)accessibilityLabel;
- (UIColor *)textColor;
- (UIColor *)titleColor;
- (void)setTitleColor:(UIColor *)arg0;
- (void)setRating:(WLKShowContentRating *)arg0;
- (void)setSummary:(NSString *)arg0;

@end
