/* Runtime dump - ATVFeedImagePreviewElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedImageElement, BRMerchant;
@interface ATVFeedImagePreviewElement : ATVFeedElement
{
    ATVFeedImageElement * _image;
    NSString * _label;
}

@property (retain, nonatomic) ATVFeedImageElement * image;
@property (retain, nonatomic) NSString * label;

- (ATVFeedImagePreviewElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setImage:(ATVFeedImageElement *)arg0;
- (ATVFeedImageElement *)image;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void).cxx_destruct;

@end
