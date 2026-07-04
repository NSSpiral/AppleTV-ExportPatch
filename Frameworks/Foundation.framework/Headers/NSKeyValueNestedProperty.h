/* Runtime dump - NSKeyValueNestedProperty
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueNestedProperty : NSKeyValueProperty
{
    NSString * _relationshipKey;
    NSString * _keyPathFromRelatedObject;
    NSKeyValueUnnestedProperty * _relationshipProperty;
    NSString * _keyPathWithoutOperatorComponents;
    char _isAllowedToResultInForwarding;
    id _dependentValueKeyOrKeys;
    char _dependentValueKeyOrKeysIsASet;
}

- (NSSet *)dependentValueKeyOrKeysIsASet:(char *)arg0;
- (void)object:(NSObject *)arg0 didAddObservance:(NSKeyValueObservance *)arg1 recurse:(char)arg2;
- (void)object:(NSObject *)arg0 didRemoveObservance:(NSKeyValueObservance *)arg1 recurse:(char)arg2;
- (char)matchesWithoutOperatorComponentsKeyPath:(NSString *)arg0;
- (void)object:(NSObject *)arg0 withObservance:(NSKeyValueObservance *)arg1 didChangeValueForKeyOrKeys:(NSArray *)arg2 recurse:(char)arg3 forwardingValues:(struct ?)arg4;
- (char)object:(NSObject *)arg0 withObservance:(NSKeyValueObservance *)arg1 willChangeValueForKeyOrKeys:(NSArray *)arg2 recurse:(char)arg3 forwardingValues:(struct ? *)arg4;
- (Class)_isaForAutonotifying;
- (NSString *)_keyPathIfAffectedByValueForKey:(NSString *)arg0 exactMatch:(char *)arg1;
- (NSArray *)_keyPathIfAffectedByValueForMemberOfKeys:(NSArray *)arg0;
- (void)_givenPropertiesBeingInitialized:(struct __CFSet *)arg0 getAffectingProperties:(NSDictionary *)arg1;
- (void)_addDependentValueKey:(NSString *)arg0;
- (NSObject *)_initWithContainerClass:(NSObject *)arg0 keyPath:(NSString *)arg1 firstDotIndex:(unsigned int)arg2 propertiesBeingInitialized:(struct __CFSet *)arg3;
- (void)dealloc;
- (NSString *)description;

@end
