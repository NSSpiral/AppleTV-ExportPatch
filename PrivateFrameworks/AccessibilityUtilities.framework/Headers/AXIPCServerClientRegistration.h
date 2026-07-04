/* Runtime dump - AXIPCServerClientRegistration
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXIPCServerClientRegistration : NSObject
{
    unsigned int _port;
    NSString * _identifier;
}

@property (nonatomic) unsigned int port;
@property (retain, nonatomic) NSString * identifier;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (unsigned int)port;
- (void)setPort:(unsigned int)arg0;

@end
