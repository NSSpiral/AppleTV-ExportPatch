/* Runtime dump - NSHost
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSHost : NSObject
{
    NSArray * names;
    NSArray * addresses;
    id reserved;
}

@property (readonly, copy) NSString * name;
@property (readonly, copy) NSArray * names;
@property (readonly, copy) NSString * address;
@property (readonly, copy) NSArray * addresses;
@property (readonly, copy) NSString * localizedName;
@property (retain, nonatomic) __NSHostExtraIvars * reserved;

+ (NSHost *)hostWithName:(NSString *)arg0;
+ (NSHost *)hostWithAddress:(NSString *)arg0;
+ (char)isHostCacheEnabled;
+ (void)setHostCacheEnabled:(char)arg0;
+ (void)flushHostCache;
+ (NSHost *)currentHost;

- (void)setReserved:(__NSHostExtraIvars *)arg0;
- (__NSHostExtraIvars *)reserved;
- (NSHost *)initToResolve:(id)arg0 as:(int)arg1;
- (void)__resolveWithFlags:(int)arg0 resultArray:(NSArray *)arg1 handler:(id /* block */)arg2;
- (void)resolveCurrentHostWithHandler:(id /* block */)arg0;
- (void)resolve:(id)arg0;
- (NSArray *)addresses;
- (void)blockingResolveUntil:(int)arg0;
- (char)isEqualToHost:(NSString *)arg0;
- (id)_thingToResolve;
- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (NSString *)localizedName;
- (NSString *)address;
- (NSArray *)names;

@end
