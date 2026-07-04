/* Runtime dump - NSKeyValueUnnestedProperty
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueUnnestedProperty : NSKeyValueProperty
{
    NSArray * _affectingProperties;
    char _cachedIsaForAutonotifyingIsValid;
    Class _cachedIsaForAutonotifying;
}

- (void)object:(NSObject *)arg0 didAddObservance:(NSKeyValueObservance *)arg1 recurse:(char)arg2;
- (Class)isaForAutonotifying;
- (void)object:(NSObject *)arg0 didRemoveObservance:(NSKeyValueObservance *)arg1 recurse:(char)arg2;
- (char)matchesWithoutOperatorComponentsKeyPath:(NSString *)arg0;
- (void)object:(NSObject *)arg0 withObservance:(NSKeyValueObservance *)arg1 didChangeValueForKeyOrKeys:(NSArray *)arg2 recurse:(char)arg3 forwardingValues:(struct ?)arg4;
- (NSArray *)keyPathIfAffectedByValueForMemberOfKeys:(NSArray *)arg0;
- (NSString *)keyPathIfAffectedByValueForKey:(NSString *)arg0 exactMatch:(char *)arg1;
- (char)object:(NSObject *)arg0 withObservance:(NSKeyValueObservance *)arg1 willChangeValueForKeyOrKeys:(NSArray *)arg2 recurse:(char)arg3 forwardingValues:(struct ? *)arg4;
- (Class)_isaForAutonotifying;
- (NSString *)_keyPathIfAffectedByValueForKey:(NSString *)arg0 exactMatch:(char *)arg1;
- (NSArray *)_keyPathIfAffectedByValueForMemberOfKeys:(NSArray *)arg0;
- (void)_givenPropertiesBeingInitialized:(struct __CFSet *)arg0 getAffectingProperties:(NSDictionary *)arg1;
- (void)_addDependentValueKey:(NSString *)arg0;
- (NSObject *)_initWithContainerClass:(NSObject *)arg0 key:(NSString *)arg1 propertiesBeingInitialized:(struct __CFSet *)arg2;
- (void)dealloc;
- (NSString *)description;

@end
