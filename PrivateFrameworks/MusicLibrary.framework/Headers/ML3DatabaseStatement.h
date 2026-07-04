/* Runtime dump - ML3DatabaseStatement
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseStatement : NSObject
{
    NSString * _sql;
    char _clearBindingsAfterRunning;
    char _isExecuting;
    ML3DatabaseConnection * _connection;
    struct sqlite3_stmt * _sqliteStatement;
}

@property (readonly, nonatomic) NSString * sql;
@property (readonly, nonatomic) ML3DatabaseConnection * connection;
@property (readonly, nonatomic) struct sqlite3_stmt * sqliteStatement;
@property (nonatomic) char clearBindingsAfterRunning;
@property (nonatomic) char isExecuting;

- (void)dealloc;
- (NSString *)description;
- (int)reset;
- (void).cxx_destruct;
- (ML3DatabaseConnection *)connection;
- (char)isExecuting;
- (struct sqlite3_stmt *)sqliteStatement;
- (NSString *)sql;
- (int)finalizeStatement;
- (int)clearBindings;
- (void)setIsExecuting:(char)arg0;
- (char)clearBindingsAfterRunning;
- (void)bindValue:(id)arg0 forParameterAtPosition:(int)arg1;
- (ML3DatabaseStatement *)initWithSQLiteStatement:(struct sqlite3_stmt *)arg0 SQL:(NSString *)arg1 connection:(ML3DatabaseConnection *)arg2;
- (int)step;
- (void)bindInt:(int)arg0 forParameterAtPosition:(int)arg1;
- (void)bindInt64:(long long)arg0 forParameterAtPosition:(int)arg1;
- (void)bindDouble:(double)arg0 forParameterAtPosition:(int)arg1;
- (void)bindNullForParameterAtPosition:(int)arg0;
- (void)bindBytes:(void *)arg0 length:(void)arg1 forParameterAtPosition:(int)arg2;
- (void)bindBytesNoCopy:(void *)arg0 length:(void)arg1 forParameterAtPosition:(int)arg2;
- (void)bindUTF8String:(char *)arg0 forParameterAtPosition:(int)arg1;
- (void)bindUTF8StringNoCopy:(char *)arg0 forParameterAtPosition:(int)arg1;
- (void)bindUTF8StringNoCopy:(char *)arg0 length:(int)arg1 forParameterAtPosition:(int)arg2;
- (void)bindValuesForParameterNames:(id)arg0;
- (void)bindValuesInArray:(NSArray *)arg0;
- (void)setClearBindingsAfterRunning:(char)arg0;
- (char)isReadOnly;
- (char)isBusy;

@end
