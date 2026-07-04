/* Runtime dump - WLKPlayActivityNetworkRequestOperation
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/WLKNetworkRequestOperation.h>

@class UWLMessageWireEnvelope;
@interface WLKPlayActivityNetworkRequestOperation : WLKNetworkRequestOperation
{
    UWLMessageWireEnvelope * _playActivityProto;
}

+ (NSURL *)playActivityURL;

- (WLKPlayActivityNetworkRequestOperation *)initWithServerRouteKey:(NSString *)arg0 serverRouteReplacements:(NSDictionary *)arg1 queryParameters:(NSDictionary *)arg2;
- (WLKPlayActivityNetworkRequestOperation *)initWithMessageEnvelope:(id)arg0;
- (NSString *)_requestPropertiesWithServerRouteKey:(NSString *)arg0 queryParameters:(NSDictionary *)arg1 additionalHeaderFields:(NSDictionary *)arg2;
- (void).cxx_destruct;

@end
