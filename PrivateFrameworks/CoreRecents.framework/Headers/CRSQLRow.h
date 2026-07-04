/* Runtime dump - CRSQLRow
 * Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

@interface CRSQLRow : NSObject
{
    struct sqlite3_stmt * _stmt;
}

+ (int)step:(struct sqlite3_stmt *)arg0;
+ (NSObject *)stringAtIndex:(int)arg0 statement:(struct sqlite3_stmt *)arg1;
+ (NSObject *)objectAtIndex:(int)arg0 statement:(struct sqlite3_stmt *)arg1;
+ (NSObject *)dataAtIndex:(int)arg0 copyBytes:(char)arg1 statement:(struct sqlite3_stmt *)arg2;
+ (NSObject *)numberWithIntegerAtIndex:(int)arg0 statement:(struct sqlite3_stmt *)arg1;
+ (NSObject *)numberWithDoubleAtIndex:(int)arg0 statement:(struct sqlite3_stmt *)arg1;
+ (int)enumerateRowsInStatement:(struct sqlite3_stmt *)arg0 usingBlock:(id /* block */)arg1;
+ (CRSQLRow *)rowWithStatement:(struct sqlite3_stmt *)arg0;

- (NSObject *)objectAtIndex:(int)arg0;
- (NSObject *)stringAtIndex:(int)arg0;
- (NSObject *)dataAtIndex:(int)arg0 copyBytes:(char)arg1;
- (NSObject *)numberWithIntegerAtIndex:(int)arg0;
- (NSObject *)numberWithDoubleAtIndex:(int)arg0;
- (CRSQLRow *)initWithStatement:(struct sqlite3_stmt *)arg0;

@end
