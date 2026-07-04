/* Runtime dump - TSPRegistry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPRegistry : NSObject
{
    struct /* ? */ _messageTypeToPrototypeMap;
    struct /* ? */ _descriptorToMessageTypeMap;
    struct hash_map<unsigned int, const char *, __gnu_cxx::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, const char *> > > _messageTypeToClassnameMap;
    struct /* ? */ _messageTypeToClassMap;
}

+ (void)setInitializationHandler:(id /* block */)arg0;
+ (TSPRegistry *)sharedRegistry;

- (unsigned int)messageTypeForDescriptor:(struct Descriptor *)arg0;
- (void)registerPersistenceMessages;
- (void)setMessageType:(unsigned int)arg0 messagePrototype:(struct Message *)arg1 descriptor:(struct Message)arg2 unarchiveClassname:(struct Descriptor *)arg3;
- (void)setUpgradeMessageType:(unsigned int)arg0 messagePrototype:(struct Message *)arg1 unarchiveClass:(struct Message)arg2;
- (void)resetForMessageType:(unsigned int)arg0 descriptor:(struct Descriptor *)arg1;
- (void)setOverrideMessageType:(unsigned int)arg0 messagePrototype:(struct Message *)arg1 descriptor:(struct Message)arg2;
- (struct Message *)messagePrototypeForMessageType:(SEL)arg0;
- (Class)unarchiveClassForMessageType:(unsigned int)arg0;
- (void)setOverrideMessageType:(unsigned int)arg0 messagePrototype:(struct Message *)arg1 descriptor:(struct Message)arg2 unarchiveClassname:(struct Descriptor *)arg3;
- (void)setUpgradeMessageType:(unsigned int)arg0 messagePrototype:(struct Message *)arg1 unarchiveClassname:(struct Message)arg2;
- (void)setDeprecatedMessageType:(unsigned int)arg0;
- (TSPRegistry *)init;
- (NSString *)description;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
