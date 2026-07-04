/* Runtime dump - ATVFeedVideoFloatingButtonsElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedVideoFloatingButtonsElement : ATVFeedElement
{
    NSArray * _buttons;
    float _presentationTime;
    float _presentationDuration;
    NSString * _position;
    int _defaultIndex;
}

@property (copy, nonatomic) NSArray * buttons;
@property (nonatomic) float presentationTime;
@property (nonatomic) float presentationDuration;
@property (copy, nonatomic) NSString * position;
@property (nonatomic) int defaultIndex;

- (ATVFeedVideoFloatingButtonsElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (float)presentationDuration;
- (void)setPresentationDuration:(float)arg0;
- (int)defaultIndex;
- (void)setDefaultIndex:(int)arg0;
- (void)setPosition:(NSString *)arg0;
- (NSString *)position;
- (void).cxx_destruct;
- (NSArray *)buttons;
- (float)presentationTime;
- (void)setPresentationTime:(float)arg0;
- (void)setButtons:(NSArray *)arg0;

@end
