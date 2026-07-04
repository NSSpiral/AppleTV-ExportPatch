/* Runtime dump - NSMessagePortNameServer
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMessagePortNameServer : NSPortNameServer

+ (NSMessagePortNameServer *)sharedInstance;

- (char)registerPort:(NSObject *)arg0 name:(NSString *)arg1;
- (NSString *)portForName:(NSString *)arg0 host:(NSString *)arg1;
- (NSString *)portForName:(NSString *)arg0;
- (char)removePortForName:(NSString *)arg0;

@end
