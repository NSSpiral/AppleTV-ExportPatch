/* Runtime dump - CLIntersiloInterface
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLIntersiloInterface : NSObject
{
    struct map<SEL *, CLIntersiloInterfaceSelectorInfo *, std::__1::less<SEL *>, std::__1::allocator<std::__1::pair<SEL *const, CLIntersiloInterfaceSelectorInfo *> > > _selectors;
    Protocol * _protocol;
}

@property (readonly, nonatomic) Protocol * protocol;

+ (NSObject *)interfaceWithProtocol:(Protocol *)arg0 base:(unsigned char)arg1;

- (CLIntersiloInterface *)initWithProtocol:(Protocol *)arg0 base:(unsigned char)arg1;
- (NSString *)getInfoForSelector:(SEL)arg0;
- (char)conformsToProtocol:(NSObject *)arg0;
- (NSString *)debugDescription;
- (void).cxx_construct;
- (void).cxx_destruct;
- (Protocol *)protocol;

@end
