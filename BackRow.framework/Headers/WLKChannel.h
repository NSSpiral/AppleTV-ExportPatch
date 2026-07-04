/* Runtime dump - WLKChannel
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class WLKChannelDetails;
@interface WLKChannel : NSObject
{
    NSString * _ID;
    WLKChannelDetails * _details;
    NSDictionary * _punchoutUrls;
    NSArray * _seasonNumbers;
}

@property (readonly, copy, nonatomic) NSString * ID;
@property (readonly, copy, nonatomic) WLKChannelDetails * details;
@property (readonly, copy, nonatomic) NSDictionary * punchoutUrls;
@property (readonly, copy, nonatomic) NSArray * seasonNumbers;

+ (WLKChannel *)channelsWithDictionaries:(id)arg0;

- (NSDictionary *)punchoutUrls;
- (NSArray *)seasonNumbers;
- (NSString *)ID;
- (WLKChannel *)init;
- (WLKChannel *)initWithDictionary:(NSDictionary *)arg0;
- (void).cxx_destruct;
- (WLKChannelDetails *)details;

@end
