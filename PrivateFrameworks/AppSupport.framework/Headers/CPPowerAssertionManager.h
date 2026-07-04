/* Runtime dump - CPPowerAssertionManager
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPPowerAssertionManager : NSObject
{
    NSString * _uuid;
    NSCountedSet * _contexts;
    NSMutableDictionary * _groupIdentifierToContexts;
    struct __CFDictionary * _contextToGroupIdentifier;
    NSMutableSet * _heldAsideGroupIdentifiers;
    NSCountedSet * _heldAsideContexts;
    <CPPowerAssertionManagerDelegate> * _delegate;
}

@property (readonly) NSString * uuid;
@property <CPPowerAssertionManagerDelegate> * delegate;

+ (CPPowerAssertionManager *)sharedInstance;

- (void)dealloc;
- (void)setDelegate:(<CPPowerAssertionManagerDelegate> *)arg0;
- (CPPowerAssertionManager *)init;
- (NSString *)description;
- (<CPPowerAssertionManagerDelegate> *)delegate;
- (NSString *)uuid;
- (void)retainPowerAssertionWithContext:(NSObject *)arg0 withGroupIdentifier:(NSString *)arg1;
- (void)_retainAssertions;
- (void)_releaseAssertions;
- (unsigned int)retainCountForContext:(NSObject *)arg0;
- (void)setUUIDPrefix:(NSString *)arg0;
- (void)retainPowerAssertionWithContext:(NSObject *)arg0;
- (void)releasePowerAssertionWithContext:(NSObject *)arg0;
- (void)temporarilyReleasePowerAssertionsForGroupIdentifier:(NSString *)arg0;
- (void)reretainPowerAssertionsForGroupIdentifier:(NSString *)arg0;

@end
