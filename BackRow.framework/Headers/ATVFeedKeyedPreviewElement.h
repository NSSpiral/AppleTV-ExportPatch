/* Runtime dump - ATVFeedKeyedPreviewElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedImageElement, BRMerchant;
@interface ATVFeedKeyedPreviewElement : ATVFeedElement
{
    NSString * _title;
    NSString * _rightLabel;
    NSString * _summary;
    NSString * _footnote;
    NSString * _rating;
    ATVFeedImageElement * _image;
    NSArray * _metadataKeys;
    NSArray * _metadataValues;
    int _likeCount;
    int _dislikeCount;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * rightLabel;
@property (copy, nonatomic) NSString * summary;
@property (copy, nonatomic) NSString * footnote;
@property (copy, nonatomic) NSString * rating;
@property (retain, nonatomic) ATVFeedImageElement * image;
@property (retain, nonatomic) NSArray * metadataKeys;
@property (retain, nonatomic) NSArray * metadataValues;
@property (nonatomic) int likeCount;
@property (nonatomic) int dislikeCount;

- (ATVFeedKeyedPreviewElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setRightLabel:(NSString *)arg0;
- (void)setMetadataKeys:(NSArray *)arg0;
- (void)setMetadataValues:(NSArray *)arg0;
- (void)setDislikeCount:(int)arg0;
- (NSArray *)metadataKeys;
- (NSArray *)metadataValues;
- (int)dislikeCount;
- (NSString *)rightLabel;
- (void)setImage:(ATVFeedImageElement *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (ATVFeedImageElement *)image;
- (void).cxx_destruct;
- (void)setLikeCount:(int)arg0;
- (int)likeCount;
- (NSString *)rating;
- (void)setRating:(NSString *)arg0;
- (NSString *)footnote;
- (void)setFootnote:(NSString *)arg0;
- (NSString *)summary;
- (void)setSummary:(NSString *)arg0;

@end
