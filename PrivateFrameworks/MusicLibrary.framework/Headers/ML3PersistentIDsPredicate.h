/* Runtime dump - ML3PersistentIDsPredicate
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3PersistentIDsPredicate : ML3Predicate
{
    NSArray * _persistentIDs;
    char _shouldContain;
}

@property (readonly, nonatomic) char shouldContain;

+ (ML3PersistentIDsPredicate *)predicateWithPersistentIDs:(long long *)arg0 count:(long long)arg1 shouldContain:(unsigned int)arg2;
+ (ML3PersistentIDsPredicate *)predicateWithPersistentIDs:(NSArray *)arg0 shouldContain:(char)arg1;

- (void)dealloc;
- (ML3PersistentIDsPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void).cxx_destruct;
- (void)appendSQLToMutableString:(NSString *)arg0 entityClass:(Class)arg1;
- (NSDictionary *)databaseStatementParameters;
- (ML3PersistentIDsPredicate *)initWithPersistentIDs:(NSArray *)arg0 shouldContain:(char)arg1;
- (char)shouldContain;

@end
