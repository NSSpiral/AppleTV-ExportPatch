/* Runtime dump - RUIYTDocument
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface RUIYTDocument : NSObject
{
    NSError * _error;
    NSMutableDictionary * __metadata;
    id __completionHandler;
}

@property (retain, nonatomic) NSError * error;
@property (retain, nonatomic) NSMutableDictionary * _metadata;
@property (copy, nonatomic) id _completionHandler;

- (NSMutableDictionary *)_metadata;
- (void)_requesteLoadedWithError:(NSError *)arg0;
- (void)set_metadata:(NSMutableDictionary *)arg0;
- (void)set_completionHandler:(id /* block */)arg0;
- (id /* block */)_completionHandler;
- (void).cxx_destruct;
- (void)loadWithCompletionHandler:(id /* block */)arg0;
- (void)setMetadata:(NSMutableDictionary *)arg0 forKey:(NSString *)arg1;
- (NSString *)metadataForKey:(NSString *)arg0;
- (NSError *)error;
- (void)setError:(NSError *)arg0;
- (void)cancelLoad;

@end
