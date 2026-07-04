/* Runtime dump - CLNotifierServiceAdapter
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLNotifierServiceAdapter : CLIntersiloService <CLNotifierServiceProtocol>
{
    struct map<unsigned long, int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, int> > > _clients;
    struct CLNotifierBase * _notifier;
}

@property (readonly, nonatomic) struct CLNotifierBase * notifier;
@property (nonatomic) char valid;

- (void)register:(GEOPlaceDataCacheRegister *)arg0 forNotification:(int)arg1 registrationInfo:(NSDictionary *)arg2;
- (void)unregister:(id)arg0 forNotification:(int)arg1;
- (void)forget:(id)arg0;
- (void)setAdaptedNotifier:(struct CLNotifierBase *)arg0;
- (CLNotifierServiceAdapter *)initInSilo:(CLSilo *)arg0;
- (int)notifierClientNumForCoparty:(id)arg0;
- (NSString *)debugDescription;
- (void)invalidate;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct CLNotifierBase *)notifier;

@end
