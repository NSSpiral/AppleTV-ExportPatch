/* Runtime dump - NSPortNameServer
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPortNameServer : NSObject

+ (NSObject *)systemDefaultPortNameServer;
+ (NSPortNameServer *)defaultPortNameServer;

- (char)registerPort:(NSObject *)arg0 name:(NSString *)arg1;
- (NSString *)portForName:(NSString *)arg0 host:(NSString *)arg1;
- (NSString *)portForName:(NSString *)arg0;
- (char)removePortForName:(NSString *)arg0;
- (char)registerPort:(NSObject *)arg0 forName:(NSString *)arg1;
- (NSString *)portForName:(NSString *)arg0 onHost:(NSString *)arg1;

@end
