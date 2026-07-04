/* Runtime dump - WLKPlayActivityDecorateLiveOperation
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/WLKNetworkRequestOperation.h>
@interface WLKPlayActivityDecorateLiveOperation : WLKNetworkRequestOperation
{
    NSString * _channelID;
    NSString * _serviceID;
    NSDictionary * _scheduleDictionary;
}

@property (readonly, copy, nonatomic) NSString * channelID;
@property (readonly, copy, nonatomic) NSString * serviceID;
@property (readonly, copy, nonatomic) NSDictionary * scheduleDictionary;

- (id)responseProcessor;
- (NSString *)channelID;
- (WLKPlayActivityDecorateLiveOperation *)initWithChannelID:(NSString *)arg0 serviceID:(NSString *)arg1;
- (NSDictionary *)scheduleDictionary;
- (void).cxx_destruct;
- (void)didFinish;
- (NSString *)serviceID;

@end
