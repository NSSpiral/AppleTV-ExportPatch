/* Runtime dump - SettingsParentalLocaleControlFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRControlFactory;
@protocol BRControlHeightFactory;

@class BRControl;
@interface SettingsParentalLocaleControlFactory : NSObject <BRControlFactory, BRControlHeightFactory>
{
    NSDictionary * _localeNameToLocaleIDMap;
}

@property (retain, nonatomic) NSDictionary * localeNameToLocaleIDMap;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (float)heightForControlForData:(NSData *)arg0 requestedBy:(BRControl *)arg1;
- (NSDictionary *)localeNameToLocaleIDMap;
- (SettingsParentalLocaleControlFactory *)initWithLocalNameMap:(NSObject *)arg0;
- (void)setLocaleNameToLocaleIDMap:(NSDictionary *)arg0;
- (void).cxx_destruct;

@end
