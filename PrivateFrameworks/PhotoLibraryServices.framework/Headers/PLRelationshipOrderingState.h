/* Runtime dump - PLRelationshipOrderingState
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRelationshipOrderingState : NSObject
{
    id _oids;
    id _foks;
    char _isMutable;
}

- (void)dealloc;
- (NSString *)description;
- (PLRelationshipOrderingState *)initWithObjectIDs:(NSOrderedSet *)arg0 orderValues:(NSArray *)arg1;
- (unsigned int)indexForObjectID:(NSObject *)arg0;
- (char)setOrderValue:(long long)arg0 forObjectID:(NSObject *)arg1 atIndex:(unsigned int)arg2;
- (NSArray *)orderKeys;
- (NSOrderedSet *)objectIDs;
- (unsigned int)findIndexForObjectID:(NSObject *)arg0 newOrderValue:(long long)arg1 hasOrderValueConflictWithObjectID:(id *)arg2;

@end
