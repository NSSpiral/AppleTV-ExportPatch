/* Runtime dump - EKReminderPredicate
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKReminderPredicate : EKPredicate
{
    char _limitToCompletedOrIncomplete;
    char _completed;
    char _useCompletionDateAsAlternate;
    char _useDueDateAsCompletionDate;
    NSString * _title;
    NSString * _listTitle;
    NSDate * _dueAfter;
    NSDate * _dueBefore;
    NSString * _searchTerm;
    int _sortOrder;
    unsigned int _maxResults;
}

@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * listTitle;
@property (nonatomic) char limitToCompletedOrIncomplete;
@property (nonatomic) char completed;
@property (retain, nonatomic) NSDate * dueAfter;
@property (retain, nonatomic) NSDate * dueBefore;
@property (nonatomic) char useCompletionDateAsAlternate;
@property (nonatomic) char useDueDateAsCompletionDate;
@property (retain, nonatomic) NSString * searchTerm;
@property (nonatomic) int sortOrder;
@property (nonatomic) unsigned int maxResults;

+ (EKReminderPredicate *)predicateWithCalendars:(id)arg0;
+ (char)supportsSecureCoding;

- (char)completed;
- (NSString *)searchTerm;
- (void)setSearchTerm:(NSString *)arg0;
- (void)setUseDueDateAsCompletionDate:(char)arg0;
- (void)setLimitToCompletedOrIncomplete:(char)arg0;
- (void)setCompleted:(char)arg0;
- (void)setDueAfter:(NSDate *)arg0;
- (void)setDueBefore:(NSDate *)arg0;
- (void)setUseCompletionDateAsAlternate:(char)arg0;
- (void)setListTitle:(NSString *)arg0;
- (EKReminderPredicate *)initWithCalendars:(NSArray *)arg0;
- (NSString *)listTitle;
- (char)limitToCompletedOrIncomplete;
- (NSDate *)dueAfter;
- (NSDate *)dueBefore;
- (char)useCompletionDateAsAlternate;
- (char)useDueDateAsCompletionDate;
- (void)dealloc;
- (EKReminderPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)title;
- (EKReminderPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSortOrder:(int)arg0;
- (int)sortOrder;
- (unsigned int)maxResults;
- (void)setMaxResults:(unsigned int)arg0;

@end
