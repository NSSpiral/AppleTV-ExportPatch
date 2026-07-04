/* Runtime dump - ATVFeedScriptArrayElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedScriptArrayElement : ATVFeedRootElement
{
    NSArray * _scriptURLs;
}

@property (retain, nonatomic) NSArray * scriptURLs;

- (ATVFeedScriptArrayElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setScriptURLs:(NSArray *)arg0;
- (NSArray *)scriptURLs;
- (void).cxx_destruct;

@end
