/* Runtime dump - DAPowerAssertionManager
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAPowerAssertionManager : NSObject
{
    NSCountedSet * _contexts;
    NSMapTable * _groupIdentifierToContexts;
    NSMapTable * _contextToGroupIdentifier;
    NSMutableSet * _heldAsideGroupIdentifiers;
    NSCountedSet * _heldAsideContexts;
    NSMapTable * _contextToPowerAssertionRef;
}

@property (retain, nonatomic) NSCountedSet * contexts;
@property (retain, nonatomic) NSMapTable * groupIdentifierToContexts;
@property (retain, nonatomic) NSMapTable * contextToGroupIdentifier;
@property (retain, nonatomic) NSMutableSet * heldAsideGroupIdentifiers;
@property (retain, nonatomic) NSCountedSet * heldAsideContexts;
@property (retain, nonatomic) NSMapTable * contextToPowerAssertionRef;

+ (void)vendDaemons:(Class)arg0;
+ (DAPowerAssertionManager *)sharedPowerAssertionManager;

- (DAPowerAssertionManager *)init;
- (void).cxx_destruct;
- (NSCountedSet *)contexts;
- (void)retainPowerAssertion:(id)arg0 withGroupIdentifier:(NSString *)arg1;
- (void)releasePowerAssertion:(id)arg0;
- (void)setContexts:(NSCountedSet *)arg0;
- (void)setGroupIdentifierToContexts:(NSMapTable *)arg0;
- (void)setContextToGroupIdentifier:(NSMapTable *)arg0;
- (void)setHeldAsideContexts:(NSCountedSet *)arg0;
- (void)setHeldAsideGroupIdentifiers:(NSMutableSet *)arg0;
- (void)setContextToPowerAssertionRef:(NSMapTable *)arg0;
- (NSCountedSet *)heldAsideContexts;
- (NSMutableSet *)heldAsideGroupIdentifiers;
- (NSMapTable *)groupIdentifierToContexts;
- (NSMapTable *)contextToGroupIdentifier;
- (void)_retainAssertionForContext:(NSObject *)arg0;
- (void)_releaseAssertionForContext:(NSObject *)arg0;
- (NSMapTable *)contextToPowerAssertionRef;
- (unsigned int)powerAssertionRetainCount:(NSObject *)arg0;
- (NSString *)stateString;
- (void)reattainPowerAssertionsForGroupIdentifier:(NSString *)arg0;
- (void)dropPowerAssertionsForGroupIdentifier:(NSString *)arg0;

@end
