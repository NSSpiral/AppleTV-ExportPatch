/* Runtime dump - CoreDAVMatchResultsItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMatchResultsItem : CoreDAVItem
{
    CoreDAVLeafItem * _rank;
    CoreDAVLeafItem * _language;
    CoreDAVLeafItem * _region;
    CoreDAVLeafItem * _calendarDescription;
}

@property (retain, nonatomic) CoreDAVLeafItem * rank;
@property (retain, nonatomic) CoreDAVLeafItem * language;
@property (retain, nonatomic) CoreDAVLeafItem * region;
@property (retain, nonatomic) CoreDAVLeafItem * calendarDescription;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (NSString *)description;
- (void)setRegion:(CoreDAVLeafItem *)arg0;
- (CoreDAVLeafItem *)region;
- (CoreDAVLeafItem *)language;
- (void)setLanguage:(CoreDAVLeafItem *)arg0;
- (CoreDAVLeafItem *)rank;
- (CoreDAVLeafItem *)calendarDescription;
- (void)setCalendarDescription:(CoreDAVLeafItem *)arg0;
- (void)setRank:(CoreDAVLeafItem *)arg0;

@end
