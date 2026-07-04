/* Runtime dump - TSPComponentExternalReferenceMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPComponentExternalReferenceMap : NSObject <NSCopying>
{
    struct /* ? */ * _map;
}

- (void)saveToMessage:(struct RepeatedPtrField<TSP::ComponentExternalReference> *)arg0;
- (struct ComponentExternalReferenceInfo)externalReferenceInfoForObjectIdentifier:(long long)arg0;
- (TSPComponentExternalReferenceMap *)initWithMapSize:(unsigned long)arg0;
- (void)addExternalReferenceToObjectIdentifier:(long long)arg0 componentIdentifier:(long long)arg1 isWeak:(char)arg2;
- (void)enumerateExternalReferences:(id)arg0;
- (TSPComponentExternalReferenceMap *)initFromMessage:(struct RepeatedPtrField<TSP::ComponentExternalReference> *)arg0;
- (void)dealloc;
- (TSPComponentExternalReferenceMap *)init;
- (TSPComponentExternalReferenceMap *)copyWithZone:(struct _NSZone *)arg0;

@end
