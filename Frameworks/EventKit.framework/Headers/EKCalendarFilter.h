/* Runtime dump - EKCalendarFilter
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarFilter : NSObject <NSCopying>
{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableSet * _calendarUIDs;
    struct CalDatabase * _database;
    NSString * _searchTerm;
    int _entityType;
}

@property (copy, nonatomic) NSString * searchTerm;

+ (void)_addCalendarWithUID:(id)arg0 toSet:(NSSet *)arg1 database:(struct CalDatabase *)arg2;
+ (void)_addCalendarUIDsFromPrefs:(id)arg0 toSet:(NSSet *)arg1 database:(struct CalDatabase *)arg2;
+ (void)_addCalendarsForStoreWithUID:(id)arg0 toSet:(NSSet *)arg1 database:(struct CalDatabase *)arg2;

- (EKCalendarFilter *)initWithDatabase:(struct CalDatabase *)arg0 entityType:(int)arg1 calendarUIDs:(struct CPRecordStore *)arg2;
- (NSString *)_calendarUIDsFromPersistentIdentifier:(NSString *)arg0;
- (id)_generateUIDSetToFilterAllCalendars;
- (id)_generateUIDSetToShowCalendars:(id)arg0;
- (id)_generateUIDSetToShowCalendarUIDs:(id)arg0;
- (id)_generateUIDSetToFilterCalendars:(id)arg0;
- (id)_UIDSetWithCalendars:(id)arg0;
- (char)_isFilteringAllWhileLocked;
- (char)isShowingAll;
- (NSObject *)_addFilterToQuery:(NSObject *)arg0 creator:(/* block */ id *)arg1 userInfo:(void *)arg2;
- (id)_UIDAntiSetWithCalendars:(id)arg0;
- (EKCalendarFilter *)initWithDatabase:(struct CalDatabase *)arg0;
- (EKCalendarFilter *)initWithDatabase:(struct CalDatabase *)arg0 entityType:(int)arg1;
- (EKCalendarFilter *)initWithPersistentIdentifier:(char)arg0 database:(struct CalDatabase *)arg1;
- (EKCalendarFilter *)initFilteringAllWithDatabase:(struct CalDatabase *)arg0;
- (EKCalendarFilter *)initWithDatabase:(struct CalDatabase *)arg0 showingCalendars:(int)arg1;
- (EKCalendarFilter *)initWithDatabase:(struct CalDatabase *)arg0 showingCalendarsWithUIDs:(int)arg1;
- (EKCalendarFilter *)initWithDatabase:(struct CalDatabase *)arg0 entityType:(int)arg1 showingCalendarsWithUIDs:(struct CPRecordStore *)arg2;
- (EKCalendarFilter *)initWithDatabase:(struct CalDatabase *)arg0 entityType:(int)arg1 filteringCalendars:(struct CPRecordStore *)arg2;
- (EKCalendarFilter *)initWithDatabase:(struct CalDatabase *)arg0 entityType:(int)arg1 filteringCalendarsWithUIDs:(struct CPRecordStore *)arg2;
- (char)isFilteringAll;
- (id)filteredCalendars;
- (NSDictionary *)visibleCalendarsWithOptions:(int)arg0;
- (int)visibleCalendarCountWithOptions:(int)arg0;
- (char)isCalendarUIDVisible:(id)arg0;
- (void)removeCalendarWithUID:(id)arg0;
- (NSString *)filterQueryForQueryString:(NSString *)arg0 creator:(/* block */ id *)arg1 userInfo:(void *)arg2;
- (NSString *)filterQueryForKey:(NSString *)arg0 prefix:(NSString *)arg1 whereClause:(NSSQLWhereIntermediate *)arg2 creator:(/* block */ id *)arg3 userInfo:(void *)arg4;
- (NSString *)calendarIDClauseForQueryWithVariableName:(NSString *)arg0;
- (NSString *)searchTerm;
- (void)setSearchTerm:(NSString *)arg0;
- (NSString *)persistentIdentifier;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (void)validate;
- (EKCalendarFilter *)copyWithZone:(struct _NSZone *)arg0;

@end
