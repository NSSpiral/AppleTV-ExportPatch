/* Runtime dump - ATVFeedImageWithLabelsElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedImageElement, BRMerchant;
@interface ATVFeedImageWithLabelsElement : ATVFeedElement
{
    ATVFeedImageElement * _image;
    NSArray * _labels;
}

@property (retain, nonatomic) ATVFeedImageElement * image;
@property (retain, nonatomic) NSArray * labels;

- (ATVFeedImageWithLabelsElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setImage:(ATVFeedImageElement *)arg0;
- (ATVFeedImageElement *)image;
- (void).cxx_destruct;
- (void)setLabels:(NSArray *)arg0;
- (NSArray *)labels;

@end
