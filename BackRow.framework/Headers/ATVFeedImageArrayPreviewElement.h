/* Runtime dump - ATVFeedImageArrayPreviewElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedImageArrayPreviewElement : ATVFeedElement
{
    char _inOrder;
    char _shuffle;
    NSArray * _images;
}

@property (nonatomic) char inOrder;
@property (nonatomic) char shuffle;
@property (retain, nonatomic) NSArray * images;

- (ATVFeedImageArrayPreviewElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setInOrder:(char)arg0;
- (void)setShuffle:(char)arg0;
- (char)shuffle;
- (NSArray *)images;
- (void)setImages:(NSArray *)arg0;
- (void).cxx_destruct;
- (char)inOrder;

@end
