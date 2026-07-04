/* Runtime dump - NSKeyValueProperty
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueProperty : NSObject <NSCopying>
{
    NSKeyValueContainerClass * _containerClass;
    NSString * _keyPath;
}

- (NSSet *)dependentValueKeyOrKeysIsASet:(char *)arg0;
- (void)object:(NSObject *)arg0 didAddObservance:(NSKeyValueObservance *)arg1 recurse:(char)arg2;
- (Class)isaForAutonotifying;
- (void)object:(NSObject *)arg0 didRemoveObservance:(NSKeyValueObservance *)arg1 recurse:(char)arg2;
- (NSString *)restOfKeyPathIfContainedByValueForKeyPath:(NSString *)arg0;
- (char)matchesWithoutOperatorComponentsKeyPath:(NSString *)arg0;
- (void)object:(NSObject *)arg0 withObservance:(NSKeyValueObservance *)arg1 didChangeValueForKeyOrKeys:(NSArray *)arg2 recurse:(char)arg3 forwardingValues:(struct ?)arg4;
- (NSArray *)keyPathIfAffectedByValueForMemberOfKeys:(NSArray *)arg0;
- (NSString *)keyPathIfAffectedByValueForKey:(NSString *)arg0 exactMatch:(char *)arg1;
- (char)object:(NSObject *)arg0 withObservance:(NSKeyValueObservance *)arg1 willChangeValueForKeyOrKeys:(NSArray *)arg2 recurse:(char)arg3 forwardingValues:(struct ? *)arg4;
- (NSObject *)_initWithContainerClass:(NSKeyValueContainerClass *)arg0 keyPath:(NSString *)arg1 propertiesBeingInitialized:(struct __CFSet *)arg2;
- (void)dealloc;
- (NSKeyValueProperty *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)keyPath;

@end
