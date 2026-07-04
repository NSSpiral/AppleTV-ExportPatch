/* Runtime dump - NSSQLJoinIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLJoinIntermediate : NSSQLIntermediate
{
    NSSQLRelationship * _relationship;
    NSString * _sourceAlias;
    NSString * _destinationAlias;
    NSString * _correlationAlias;
    unsigned int _type;
    char _direct;
}

+ (NSObject *)createToOneJoinIntermediateForProperty:(NSString *)arg0 lastStep:(NSObject *)arg1 inScope:(NSObject *)arg2 context:(NSObject *)arg3;
+ (NSObject *)createToManyJoinIntermediateForProperty:(NSString *)arg0 lastStep:(NSObject *)arg1 inScope:(NSObject *)arg2 context:(NSObject *)arg3;
+ (NSObject *)createManyToManyJoinIntermediateForProperty:(NSString *)arg0 direct:(char)arg1 lastStep:(NSObject *)arg2 inScope:(NSObject *)arg3 context:(NSObject *)arg4;
+ (NSString *)createJoinIntermediatesForKeypath:(NSString *)arg0 startEntity:(NSObject *)arg1 startAlias:(id)arg2 forScope:(NSObject *)arg3 inStatementIntermediate:(NSSQLStatementIntermediate *)arg4 inContext:(NSObject *)arg5;

- (NSSQLRelationship *)relationship;
- (NSEntityDescription *)destinationEntity;
- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (NSObject *)sourceEntity;
- (void)setJoinType:(unsigned int)arg0;
- (NSString *)destinationAlias;
- (NSSQLJoinIntermediate *)initForRelationship:(OCXRelationship *)arg0 sourceAlias:(NSString *)arg1 destinationAlias:(NSString *)arg2 correlationAlias:(NSString *)arg3 direct:(char)arg4 inScope:(NSObject *)arg5;
- (NSString *)sourceAlias;
- (void)setSourceAlias:(NSString *)arg0;
- (NSString *)_generateToOneSQLStringInContext:(NSObject *)arg0;
- (NSString *)_generateToManySQLStringInContext:(NSObject *)arg0;
- (NSString *)_generateManyToManySQLStringInContext:(NSObject *)arg0;
- (char)isDirect;
- (void)setDirect:(char)arg0;
- (void)setDestinationAlias:(NSString *)arg0;
- (NSString *)correlationAlias;
- (char)joinType;
- (void)dealloc;
- (NSString *)description;

@end
