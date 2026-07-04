/* Runtime dump - ATVDataImageRequest
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDataImageRequest : NSObject
{
    ATVDataQuery * _query;
    id _completionHandler;
}

@property (weak, nonatomic) ATVDataQuery * query;
@property (copy, nonatomic) id completionHandler;

- (ATVDataQuery *)query;
- (id /* block */)completionHandler;
- (void)setQuery:(ATVDataQuery *)arg0;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (ATVDataImageRequest *)initWithQuery:(ATVDataQuery *)arg0 completionHandler:(id /* block */)arg1;

@end
