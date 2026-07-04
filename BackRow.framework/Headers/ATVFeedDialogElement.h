/* Runtime dump - ATVFeedDialogElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedDialogElement : ATVFeedRootElement
{
    NSString * _title;
    NSString * _message;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * message;

- (ATVFeedDialogElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)title;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (void).cxx_destruct;

@end
