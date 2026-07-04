/* Runtime dump - BKSProcessAssertionUpdateEvent
 * Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcessAssertionUpdateEvent : BKSProcessAssertionEvent
{
    NSString * _name;
    unsigned int _flags;
}

@property (copy, nonatomic) NSString * name;
@property (nonatomic) unsigned int flags;

- (void)setFlags:(unsigned int)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (BKSProcessAssertionUpdateEvent *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (unsigned int)flags;

@end
