/* Runtime dump - ATVFeedItemDetailElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedDividerElement, ATVFeedElement, ATVFeedGenericCollectionElement, ATVFeedImageElement, ATVFeedLabeledListElement, ATVFeedRatingElement, ATVFeedShelfElement, ATVFeedTableElement, BRMerchant;
@interface ATVFeedItemDetailElement : ATVFeedRootElement
{
    char _verticallyCentered;
    NSString * _title;
    NSString * _subtitle;
    ATVFeedImageElement * _image;
    ATVFeedImageElement * _defaultImage;
    ATVFeedImageElement * _rightImage;
    ATVFeedRatingElement * _ratingElement;
    NSString * _summary;
    NSString * _footnote;
    ATVFeedTableElement * _table;
    ATVFeedLabeledListElement * _labeledList;
    ATVFeedShelfElement * _centerShelf;
    ATVFeedDividerElement * _divider;
    ATVFeedShelfElement * _bottomShelf;
    ATVFeedGenericCollectionElement * _moreInfo;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * subtitle;
@property (retain, nonatomic) ATVFeedImageElement * image;
@property (retain, nonatomic) ATVFeedImageElement * defaultImage;
@property (retain, nonatomic) ATVFeedImageElement * rightImage;
@property (retain, nonatomic) ATVFeedRatingElement * ratingElement;
@property (copy, nonatomic) NSString * summary;
@property (copy, nonatomic) NSString * footnote;
@property (retain, nonatomic) ATVFeedTableElement * table;
@property (retain, nonatomic) ATVFeedLabeledListElement * labeledList;
@property (retain, nonatomic) ATVFeedShelfElement * centerShelf;
@property (retain, nonatomic) ATVFeedDividerElement * divider;
@property (retain, nonatomic) ATVFeedShelfElement * bottomShelf;
@property (retain, nonatomic) ATVFeedGenericCollectionElement * moreInfo;
@property (nonatomic) char verticallyCentered;

- (void)setDefaultImage:(ATVFeedImageElement *)arg0;
- (ATVFeedItemDetailElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setDivider:(ATVFeedDividerElement *)arg0;
- (ATVFeedImageElement *)rightImage;
- (void)setRightImage:(ATVFeedImageElement *)arg0;
- (ATVFeedShelfElement *)bottomShelf;
- (void)setBottomShelf:(ATVFeedShelfElement *)arg0;
- (ATVFeedShelfElement *)centerShelf;
- (void)setCenterShelf:(ATVFeedShelfElement *)arg0;
- (ATVFeedImageElement *)defaultImage;
- (ATVFeedRatingElement *)ratingElement;
- (char)verticallyCentered;
- (ATVFeedDividerElement *)divider;
- (void)setVerticallyCentered:(char)arg0;
- (ATVFeedLabeledListElement *)labeledList;
- (ATVFeedGenericCollectionElement *)moreInfo;
- (void)setRatingElement:(ATVFeedRatingElement *)arg0;
- (void)setLabeledList:(ATVFeedLabeledListElement *)arg0;
- (void)setImage:(ATVFeedImageElement *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (ATVFeedImageElement *)image;
- (NSString *)subtitle;
- (ATVFeedTableElement *)table;
- (void)setSubtitle:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setMoreInfo:(ATVFeedGenericCollectionElement *)arg0;
- (NSString *)footnote;
- (void)setFootnote:(NSString *)arg0;
- (NSString *)summary;
- (void)setSummary:(NSString *)arg0;
- (void)setTable:(ATVFeedTableElement *)arg0;

@end
