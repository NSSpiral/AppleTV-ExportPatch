/* Runtime dump - CLIntersiloService
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol>
{
    char _valid;
    CLSilo * _silo;
    CLIntersiloInterface * _inboundInterface;
    CLIntersiloInterface * _outboundInterface;
}

@property (readonly, nonatomic) CLSilo * silo;
@property (readonly, nonatomic) CLIntersiloInterface * inboundInterface;
@property (readonly, nonatomic) CLIntersiloInterface * outboundInterface;
@property (nonatomic) char valid;

+ (void)becameFatallyBlocked:(id)arg0;
+ (CLIntersiloService *)getSilo;
+ (char)isSupported;

- (CLIntersiloService *)initWithInboundProtocol:(NSObject *)arg0 outboundProtocol:(NSObject *)arg1 andSilo:(id)arg2;
- (CLSilo *)silo;
- (CLIntersiloService *)initInSilo:(CLSilo *)arg0;
- (CLIntersiloInterface *)inboundInterface;
- (CLIntersiloInterface *)outboundInterface;
- (char)isHydrated;
- (CLIntersiloService *)init;
- (NSString *)debugDescription;
- (char)valid;
- (void).cxx_destruct;
- (void)setValid:(char)arg0;

@end
