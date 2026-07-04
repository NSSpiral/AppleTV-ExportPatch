/* Runtime dump - ATVFeedRatingElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedRatingElement : ATVFeedElement
{
    NSString * _system;
    NSString * _name;
    unsigned int _rank;
}

@property (copy, nonatomic) NSString * system;
@property (copy, nonatomic) NSString * name;
@property (nonatomic) unsigned int rank;

- (ATVFeedRatingElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (unsigned int)rank;
- (void)setRank:(unsigned int)arg0;
- (void)setSystem:(NSString *)arg0;
- (NSString *)system;

@end
