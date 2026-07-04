/* Runtime dump - ATVServerRequestHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVServerRequestHandler : NSObject

+ (ATVServerRequestHandler *)sharedInstance;

- (void)respondToRequest:(struct ATVServerRequest *)arg0 httpCode:(unsigned long)arg1 body:(id /* block */)arg2 mimeType:(NSString *)arg3 forceEncryption:(char)arg4;
- (void)handleRequest:(struct ATVServerRequest *)arg0;

@end
