/* Runtime dump - SettingsParentalLocaleProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;
@interface SettingsParentalLocaleProvider : NSObject <BRProvider>
{
    NSDictionary * _localeNameToLocaleIDMap;
    NSArray * _localeNamesInDisplayOrder;
}

@property (retain, nonatomic) NSDictionary * localeNameToLocaleIDMap;
@property (retain, nonatomic) NSArray * localeNamesInDisplayOrder;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (NSDictionary *)localeNameToLocaleIDMap;
- (NSArray *)localeNamesInDisplayOrder;
- (long)IDFromDisplayString:(NSString *)arg0;
- (NSObject *)displayStringForItemWithID:(long)arg0;
- (void)setLocaleNameToLocaleIDMap:(NSDictionary *)arg0;
- (void)setLocaleNamesInDisplayOrder:(NSArray *)arg0;
- (SettingsParentalLocaleProvider *)init;
- (void).cxx_destruct;
- (NSObject *)dataAtIndex:(long)arg0;

@end
