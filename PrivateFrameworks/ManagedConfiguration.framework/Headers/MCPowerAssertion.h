/* Runtime dump - MCPowerAssertion
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCPowerAssertion : MCProcessAssertion
{
    char _parked;
}

@property (readonly, nonatomic) char parked;

- (void)dealloc;
- (MCPowerAssertion *)init;
- (void)unpark;
- (void)park;
- (char)isParked;

@end
