/* Runtime dump - PQLNameInjection
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface PQLNameInjection : PQLNameInjectionBase <PQLInjecting>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSData * sql;

+ (NSString *)nameWithString:(NSString *)arg0;
+ (NSString *)nameWithPrefix:(NSString *)arg0 suffix:(NSString *)arg1;
+ (NSString *)_appendString:(NSString *)arg0 toInjection:(PQLRawInjection *)arg1;

- (NSString *)description;
- (PQLNameInjection *)initWithString:(NSString *)arg0;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg0 startingAtIndex:(int)arg1;
- (NSString *)nameByAddingSuffix:(NSString *)arg0;

@end
