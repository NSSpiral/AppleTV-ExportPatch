/* Runtime dump - IOSBridgeAPI
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface IOSBridgeAPI : NSObject

- (id)objectsync;
- (void)writeResponse:(NSURLResponse *)arg0;
- (id)invoke:(id)arg0;
- (void)invokeAsync:(id)arg0;
- (void)cleanup;

@end
