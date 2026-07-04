/* Runtime dump - NSRelationshipStoreMapping
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSRelationshipStoreMapping : NSPropertyStoreMapping
{
    NSString * _destinationEntityExternalName;
    NSArray * _foreignKeys;
    NSArray * _joins;
    unsigned int _joinSemantic;
}

- (NSString *)relationship;
- (NSArray *)columnDefinitions;
- (NSArray *)constraintDefinitions;
- (void)setDestinationEntityExternalName:(NSString *)arg0;
- (void)setForeignKeys:(NSArray *)arg0;
- (void)setJoins:(NSArray *)arg0;
- (NSString *)destinationEntityExternalName;
- (NSArray *)foreignKeys;
- (NSArray *)joins;
- (unsigned int)joinSemantic;
- (void)setJoinSemantic:(unsigned int)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;

@end
