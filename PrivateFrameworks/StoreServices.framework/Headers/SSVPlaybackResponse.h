/* Runtime dump - SSVPlaybackResponse
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlaybackResponse : NSObject
{
    NSDictionary * _responseDictionary;
    NSHTTPURLResponse * _urlResponse;
}

@property (readonly, copy, nonatomic) NSDictionary * responseDictionary;
@property (readonly, nonatomic) NSHTTPURLResponse * URLResponse;
@property (readonly, nonatomic) NSArray * items;

- (void)_enumerateItemsUsingBlock:(id /* block */)arg0;
- (NSString *)itemForItemIdentifier:(NSString *)arg0;
- (NSHTTPURLResponse *)URLResponse;
- (NSArray *)items;
- (void).cxx_destruct;
- (NSDictionary *)responseDictionary;
- (SSVPlaybackResponse *)initWithDictionary:(NSDictionary *)arg0 URLResponse:(NSHTTPURLResponse *)arg1;

@end
