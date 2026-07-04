/* Runtime dump - BRMetadataLongDescriptionControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRHorizontalDividerControl, BRImageControl, BRTextControl, WLKShowContentRating;
@interface BRMetadataLongDescriptionControl : BRControl
{
    BRTextControl * _titleLayer;
    BRTextControl * _titleSubtextLayer;
    BRTextControl * _labelLayer;
    BRTextControl * _labelSubtextLayer;
    BRTextControl * _priceLayer;
    BRControl * _formatControl;
    BRTextControl * _releaseDateLayer;
    BRTextControl * _lengthLayer;
    BRTextControl * _studioNameLayer;
    BRImageControl * _ratingImageLayer;
    BRControl * _userRatingControl;
    BRImageControl * _topRightImageLayer;
    BRTextControl * _summaryLayer;
    BRTextControl * _copyrightLayer;
    NSNumber * _trackNumber;
    BRHorizontalDividerControl * _topDivider;
    BRHorizontalDividerControl * _bottomDivider;
    NSArray * _metadataObjs;
    NSArray * _metadataLabels;
    float _totalHeight;
    int _alignment;
    struct CGSize _artworkSize;
    UIColor * _titleColor;
    UIColor * _bodyColor;
    UIColor * _secondaryBodyColor;
}

@property (retain, nonatomic) UIColor * titleColor;
@property (retain, nonatomic) UIColor * bodyColor;
@property (retain, nonatomic) UIColor * secondaryBodyColor;

- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (void)windowMaxBoundsChanged;
- (struct CGSize)renderedSize;
- (void)setTitleSubtext:(BRTextControl *)arg0;
- (void)setMetadata:(NSArray *)arg0 withLabels:(NSArray *)arg1;
- (void)setBodyColor:(UIColor *)arg0;
- (void)setLabelSubtext:(id)arg0;
- (void)setFormatControl:(BRControl *)arg0;
- (void)setUserRatingControl:(BRControl *)arg0;
- (void)resetAllFields;
- (void)setSecondaryBodyColor:(UIColor *)arg0;
- (UIColor *)bodyColor;
- (UIColor *)secondaryBodyColor;
- (void)setTopRightImage:(UIImage *)arg0;
- (void)_setRating:(WLKShowContentRating *)arg0;
- (void)_setSummary:(CKDPZoneRetrieveResponseZoneSummary *)arg0;
- (void)_setMetadata:(NSData *)arg0 withLabels:(NSArray *)arg1;
- (void)_setCopyright:(id)arg0;
- (void)_setTopRightImage:(UIImage *)arg0;
- (id)topRightImageControl;
- (void)_setTitleSubtext:(id)arg0;
- (void)_setTrackNumber:(NSNumber *)arg0;
- (void)_setLabelSubtext:(id)arg0;
- (void)_setFormatControl:(BRControl *)arg0;
- (void)_setLength:(AWDCoreRoutineModelLength *)arg0;
- (void)_setStudioName:(NSString *)arg0;
- (void)_setUserRatingControl:(BRControl *)arg0;
- (void)setArtworkSize:(struct CGSize)arg0;
- (void)_setPrice:(id)arg0;
- (void)setAlignment:(int)arg0;
- (void)dealloc;
- (BRMetadataLongDescriptionControl *)init;
- (void)setTitle:(NSString *)arg0;
- (void)setLabel:(NSString *)arg0;
- (void)setLength:(AWDCoreRoutineModelLength *)arg0;
- (void)_setTitle:(NSString *)arg0;
- (UIColor *)titleColor;
- (void)setTitleColor:(UIColor *)arg0;
- (void)setRating:(WLKShowContentRating *)arg0;
- (void)setTrackNumber:(NSNumber *)arg0;
- (void)setStudioName:(NSString *)arg0;
- (void)setCopyright:(NSString *)arg0;
- (void)setPrice:(id)arg0;
- (void)setReleaseDate:(NSDate *)arg0;
- (void)_setReleaseDate:(NSDate *)arg0;
- (void)_setLabel:(NSString *)arg0;
- (void)setSummary:(NSString *)arg0;

@end
