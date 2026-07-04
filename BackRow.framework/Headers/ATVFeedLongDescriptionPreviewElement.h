/* Runtime dump - ATVFeedLongDescriptionPreviewElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedImageElement, ATVFeedMediaBadgesElement, ATVFeedStarRatingElement, BRMerchant;
@interface ATVFeedLongDescriptionPreviewElement : ATVFeedElement
{
    NSString * _title;
    NSString * _summary;
    NSString * _footnote;
    NSString * _rating;
    ATVFeedImageElement * _image;
    NSString * _mainLabel;
    NSArray * _metadataLabels;
    ATVFeedMediaBadgesElement * _mediaBadges;
    ATVFeedStarRatingElement * _starRating;
    NSDictionary * _styleKeyValues;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * summary;
@property (copy, nonatomic) NSString * footnote;
@property (copy, nonatomic) NSString * rating;
@property (retain, nonatomic) ATVFeedImageElement * image;
@property (copy, nonatomic) NSString * mainLabel;
@property (retain, nonatomic) NSArray * metadataLabels;
@property (retain, nonatomic) ATVFeedMediaBadgesElement * mediaBadges;
@property (retain, nonatomic) ATVFeedStarRatingElement * starRating;
@property (readonly, retain, nonatomic) UIColor * titleColor;
@property (readonly, retain, nonatomic) UIColor * metadataColor;
@property (retain, nonatomic) NSDictionary * styleKeyValues;

- (ATVFeedLongDescriptionPreviewElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (ATVFeedStarRatingElement *)starRating;
- (NSDictionary *)styleKeyValues;
- (void)setStyleKeyValues:(NSDictionary *)arg0;
- (void)setMetadataLabels:(NSArray *)arg0;
- (void)setMediaBadges:(ATVFeedMediaBadgesElement *)arg0;
- (void)setStarRating:(ATVFeedStarRatingElement *)arg0;
- (UIColor *)metadataColor;
- (NSArray *)metadataLabels;
- (ATVFeedMediaBadgesElement *)mediaBadges;
- (void)setImage:(ATVFeedImageElement *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (ATVFeedImageElement *)image;
- (UIColor *)titleColor;
- (void).cxx_destruct;
- (NSString *)rating;
- (void)setRating:(NSString *)arg0;
- (NSString *)footnote;
- (void)setFootnote:(NSString *)arg0;
- (NSString *)mainLabel;
- (void)setMainLabel:(NSString *)arg0;
- (NSString *)summary;
- (void)setSummary:(NSString *)arg0;

@end
