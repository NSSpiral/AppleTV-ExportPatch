/* Runtime dump - PQLFormatInjection
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface PQLFormatInjection : PQLNameInjectionBase <PQLInjecting>
{
    NSMutableArray * _binds;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSData * sql;

+ (PQLFormatInjection *)formatInjection:(PQLFormatInjection *)arg0;

- (NSString *)description;
- (PQLFormatInjection *)initWithFormat:(NSString *)arg0 arguments:(void *)arg1;
- (void).cxx_destruct;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg0 startingAtIndex:(int)arg1;
- (id)bindValuesToKeepAlive;

@end
