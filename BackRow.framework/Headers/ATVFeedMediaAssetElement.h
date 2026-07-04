/* Runtime dump - ATVFeedMediaAssetElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedImageElement, BRMerchant;
@interface ATVFeedMediaAssetElement : ATVFeedElement
{
    char _optimizeDownloadForHighLatency;
    NSString * _url;
    NSString * _title;
    NSString * _synopsis;
    NSString * _rating;
    NSString * _ratingSystem;
    NSNumber * _ratingRank;
    ATVFeedImageElement * _image;
    ATVXMLElement * _xml;
    ATVXMLDocument * _xmlDocument;
}

@property (copy, nonatomic) NSString * url;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * synopsis;
@property (copy, nonatomic) NSString * rating;
@property (copy, nonatomic) NSString * ratingSystem;
@property (copy, nonatomic) NSNumber * ratingRank;
@property (nonatomic) char optimizeDownloadForHighLatency;
@property (retain, nonatomic) ATVFeedImageElement * image;
@property (readonly, retain, nonatomic) ATVXMLElement * xml;
@property (retain, nonatomic) ATVXMLDocument * xmlDocument;

- (ATVFeedMediaAssetElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setOptimizeDownloadForHighLatency:(char)arg0;
- (char)optimizeDownloadForHighLatency;
- (ATVXMLElement *)xml;
- (void)setXmlDocument:(ATVXMLDocument *)arg0;
- (void)setImage:(ATVFeedImageElement *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)url;
- (NSString *)title;
- (ATVFeedImageElement *)image;
- (void)setUrl:(NSString *)arg0;
- (void).cxx_destruct;
- (NSString *)rating;
- (void)setRating:(NSString *)arg0;
- (NSString *)ratingSystem;
- (NSNumber *)ratingRank;
- (void)setRatingRank:(NSNumber *)arg0;
- (void)setRatingSystem:(NSString *)arg0;
- (ATVXMLDocument *)xmlDocument;
- (NSString *)synopsis;
- (void)setSynopsis:(NSString *)arg0;

@end
