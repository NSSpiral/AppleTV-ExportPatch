/* Runtime dump - WLKPlayActivityDecorateEBSOperation
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/WLKNetworkRequestOperation.h>
@interface WLKPlayActivityDecorateEBSOperation : WLKNetworkRequestOperation
{
    NSString * _channelID;
    NSString * _externalContentID;
    NSDictionary * _responseDictionary;
}

@property (readonly, copy, nonatomic) NSString * channelID;
@property (readonly, copy, nonatomic) NSString * externalContentID;
@property (readonly, copy, nonatomic) NSDictionary * responseDictionary;

- (id)responseProcessor;
- (NSString *)channelID;
- (WLKPlayActivityDecorateEBSOperation *)initWithChannelID:(NSString *)arg0 externalContentID:(NSString *)arg1;
- (NSString *)externalContentID;
- (void).cxx_destruct;
- (void)didFinish;
- (NSDictionary *)responseDictionary;

@end
