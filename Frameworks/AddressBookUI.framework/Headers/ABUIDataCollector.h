/* Runtime dump - ABUIDataCollector
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABUIDataCollector : NSObject
{
    ABUIDataCollectorLogger * _logger;
    NSString * _appIdentifier;
}

@property (retain, nonatomic) ABUIDataCollectorLogger * logger;
@property (retain, nonatomic) NSString * appIdentifier;

+ (ABUIDataCollector *)sharedCollector;
+ (char)isEnabled;

- (void)logRefreshUsage;
- (void)logContactActionType:(NSObject *)arg0 attributes:(NSDictionary *)arg1;
- (void)logSearchUsage;
- (void)logIndexUsage;
- (void)logPresentation;
- (void)logGroupsShown:(int)arg0 totalGroups:(int)arg1;
- (void)logAddProperty:(int)arg0 contact:(void *)arg1;
- (void)_reallyLogIndexUsage;
- (void)dealloc;
- (ABUIDataCollector *)init;
- (void)setAppIdentifier:(NSString *)arg0;
- (NSString *)appIdentifier;
- (ABUIDataCollectorLogger *)logger;
- (void)setLogger:(ABUIDataCollectorLogger *)arg0;

@end
