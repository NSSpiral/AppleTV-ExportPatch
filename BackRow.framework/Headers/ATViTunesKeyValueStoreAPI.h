/* Runtime dump - ATViTunesKeyValueStoreAPI
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATViTunesKeyValueStoreAPI : NSObject

+ (void)_callGetPutHandler:(id /* block */)arg0 onQueue:(/* block */ id)arg1 values:(NSArray *)arg2;
+ (void)_putGetResponseReady:(id)arg0 queue:(NSObject *)arg1 handler:(<BRSelectionHandler> *)arg2;
+ (void)_loadDocumentWithRequestProperties:(NSDictionary *)arg0 handler:(<BRSelectionHandler> *)arg1;
+ (void)getAllRequest:(NSURLRequest *)arg0 domain:(NSString *)arg1 queue:(NSObject *)arg2 handler:(<BRSelectionHandler> *)arg3;
+ (void)putAllRequest:(NSURLRequest *)arg0 domain:(NSString *)arg1 queue:(NSObject *)arg2 handler:(<BRSelectionHandler> *)arg3;

@end
