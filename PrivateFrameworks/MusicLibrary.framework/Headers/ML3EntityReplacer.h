/* Runtime dump - ML3EntityReplacer
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3EntityReplacer : NSObject
{
    struct __CFDictionary * _propertyToIndexPair;
    NSMutableArray * _naturalStatements;
    ML3DatabaseConnection * _connection;
    ML3MusicLibrary * _library;
}

@property (readonly, nonatomic) char open;

- (void)dealloc;
- (char)perform;
- (void)close;
- (void).cxx_destruct;
- (char)isOpen;
- (void)bindValue:(id)arg0 forProperty:(NSString *)arg1;
- (ML3EntityReplacer *)initWithEntityClass:(Class)arg0 properties:(NSDictionary *)arg1 library:(ML3MusicLibrary *)arg2;
- (void)bindNullForProperty:(NSString *)arg0;
- (void)bindInt:(int)arg0 forProperty:(NSString *)arg1;
- (void)bindDouble:(double)arg0 forProperty:(NSString *)arg1;
- (void)bindPersistentID:(long long)arg0;
- (void)clearBindings;

@end
