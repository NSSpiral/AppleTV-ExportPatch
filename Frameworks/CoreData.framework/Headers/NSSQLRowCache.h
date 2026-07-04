/* Runtime dump - NSSQLRowCache
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLRowCache : NSPersistentStoreCache
{
    NSSQLCore * _sqlCore;
    int _debug;
}

+ (void)initialize;

- (void)forgetAllExternalData;
- (NSObject *)rowForObjectID:(NSObject *)arg0;
- (NSSQLRowCache *)initWithSQLCore:(NSSQLCore *)arg0;
- (TSCHChartGridAdapter *)adapter;
- (void)registerRow:(id)arg0 forObjectID:(struct _NSScalarObjectID *)arg1;
- (NSObject *)rowForObjectID:(NSObject *)arg0 after:(double)arg1;
- (NSObject *)toManyForSourceObjectID:(NSObject *)arg0 forProperty:(NSString *)arg1 after:(double)arg2;
- (void)registerToMany:(id)arg0 forSourceObjectID:(struct _NSScalarObjectID *)arg1 forProperty:(NSString *)arg2 andTimestamp:(double)arg3;
- (void)forgetRowForObjectID:(struct _NSScalarObjectID *)arg0;
- (void)registerSnapshots:(id)arg0;
- (void)dealloc;

@end
