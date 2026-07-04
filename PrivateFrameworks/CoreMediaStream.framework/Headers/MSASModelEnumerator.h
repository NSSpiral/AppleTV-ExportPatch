/* Runtime dump - MSASModelEnumerator
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASModelEnumerator : NSEnumerator
{
    struct sqlite3 * _db;
    struct sqlite3_stmt * _stmt;
    id _stepBlock;
}

@property (nonatomic) struct sqlite3 * db;
@property (nonatomic) struct sqlite3_stmt * stmt;
@property (copy, nonatomic) id stepBlock;

+ (MSASModelEnumerator *)enumeratorWithDatabase:(struct sqlite3 *)arg0 query:(NSObject *)arg1 stepBlock:(id /* block */)arg2;

- (void)dealloc;
- (MSASModelEnumerator *)init;
- (NSObject *)nextObject;
- (void).cxx_destruct;
- (struct sqlite3 *)db;
- (struct sqlite3_stmt *)stmt;
- (void)setDb:(struct sqlite3 *)arg0;
- (MSASModelEnumerator *)initWithDatabase:(struct sqlite3 *)arg0 query:(NSObject *)arg1 stepBlock:(id /* block */)arg2;
- (id /* block */)stepBlock;
- (void)setStmt:(struct sqlite3_stmt *)arg0;
- (void)setStepBlock:(id /* block */)arg0;

@end
