/* Runtime dump - ATVFeedEventElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedImageElement, BRMerchant;
@interface ATVFeedEventElement : ATVFeedElement
{
    NSString * _title;
    NSString * _eventDescription;
    ATVFeedImageElement * _image;
    NSDate * _startDate;
    NSDate * _endDate;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * eventDescription;
@property (retain, nonatomic) ATVFeedImageElement * image;
@property (retain, nonatomic) NSDate * startDate;
@property (retain, nonatomic) NSDate * endDate;

- (ATVFeedEventElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setEventDescription:(NSString *)arg0;
- (NSString *)eventDescription;
- (void)setImage:(ATVFeedImageElement *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)title;
- (ATVFeedImageElement *)image;
- (void).cxx_destruct;
- (void)setStartDate:(NSDate *)arg0;
- (void)setEndDate:(NSDate *)arg0;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
