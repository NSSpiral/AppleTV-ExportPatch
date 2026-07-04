/* Runtime dump - SFCompanionInterface
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCompanionInterface : NSObject
{
    NSXPCInterface * _interface;
}

@property Protocol * protocol;
@property (retain) NSXPCInterface * interface;

+ (NSObject *)interfaceWithProtocol:(Protocol *)arg0;

- (NSString *)classesForSelector:(SEL)arg0 argumentIndex:(unsigned int)arg1 ofReply:(char)arg2;
- (NSString *)interfaceForSelector:(SEL)arg0 argumentIndex:(unsigned int)arg1 ofReply:(char)arg2;
- (void)dealloc;
- (void)setClasses:(Class *)arg0 forSelector:(SEL)arg1 argumentIndex:(unsigned int)arg2 ofReply:(char)arg3;
- (void)setInterface:(NSXPCInterface *)arg0 forSelector:(SEL)arg1 argumentIndex:(unsigned int)arg2 ofReply:(char)arg3;
- (NSXPCInterface *)interface;
- (void)setInterface:(NSXPCInterface *)arg0;
- (Protocol *)protocol;
- (void)setProtocol:(Protocol *)arg0;
- (SFCompanionInterface *)initWithNSXPCInterface:(NSXPCInterface *)arg0;

@end
