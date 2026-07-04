/* Runtime dump - BKSProcessAssertionCreateEvent
 * Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcessAssertionCreateEvent : BKSProcessAssertionUpdateEvent <BSXPCCoding>
{
    unsigned int _reason;
    NSString * _targetBundleIdentifier;
    int _targetPID;
}

@property (nonatomic) unsigned int reason;
@property (nonatomic) int targetPID;
@property (copy, nonatomic) NSString * targetBundleIdentifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSString *)description;
- (unsigned int)reason;
- (BKSProcessAssertionCreateEvent *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)setTargetBundleIdentifier:(NSString *)arg0;
- (NSString *)targetBundleIdentifier;
- (int)targetPID;
- (void)setTargetPID:(int)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (void)setReason:(unsigned int)arg0;

@end
