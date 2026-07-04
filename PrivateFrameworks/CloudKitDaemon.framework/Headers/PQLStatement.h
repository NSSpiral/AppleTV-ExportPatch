/* Runtime dump - PQLStatement
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface PQLStatement : NSObject
{
    struct sqlite3_stmt * _stmt;
    PQLStatement * _next;
    NSMutableArray * _aliveBinds;
    id _specUnion;
    char _inUse;
    char _isTraced;
    short _specLength;
}

@property (readonly, nonatomic) char isTraced;

- (void)dealloc;
- (NSString *)description;
- (void)invalidate;
- (void).cxx_destruct;
- (PQLStatement *)initWithFormat:(NSString *)arg0 arguments:(void *)arg1 db:(struct sqlite3 *)arg2 cache:(struct cache_s *)arg3;
- (void)unbindForDB:(id)arg0 returnedRows:(unsigned int)arg1;
- (char)isTraced;
- (char)_prepare:(char *)arg0 withDB:(double)arg1;
- (id)translate:(struct tvec3<float> *)arg0 hasInjections:(char *)arg1 arguments:(void *)arg2;
- (PQLStatement *)initWithStatement:(NSSQLiteStatement *)arg0 forDB:(id)arg1;
- (void)bindArguments:(void *)arg0;
- (void)keepBindAlive:(id)arg0;

@end
