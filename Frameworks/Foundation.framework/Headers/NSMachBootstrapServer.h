/* Runtime dump - NSMachBootstrapServer
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMachBootstrapServer : NSPortNameServer

+ (NSMachBootstrapServer *)sharedInstance;

- (char)registerPort:(NSObject *)arg0 name:(NSString *)arg1;
- (NSString *)portForName:(NSString *)arg0 host:(NSString *)arg1;
- (NSString *)portForName:(NSString *)arg0;
- (char)removePortForName:(NSString *)arg0;
- (NSString *)portForName:(NSString *)arg0 options:(unsigned int)arg1;
- (NSString *)servicePortWithName:(NSString *)arg0;

@end
