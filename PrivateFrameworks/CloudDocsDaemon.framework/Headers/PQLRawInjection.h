/* Runtime dump - PQLRawInjection
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface PQLRawInjection : PQLNameInjectionBase <PQLInjecting>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSData * sql;

+ (void)initialize;
+ (PQLRawInjection *)rawInjection:(char *)arg0 length:(unsigned long)arg1;

- (NSString *)description;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg0 startingAtIndex:(int)arg1;
- (PQLRawInjection *)initWithUTF8String:(char *)arg0 length:(unsigned long)arg1;

@end
