/* Runtime dump - BRApplianceProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;
@interface BRApplianceProvider : NSObject <BRProvider>
{
    NSArray * _applianceInfo;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (void)_loadAppliances;
- (NSObject *)applianceInfoAtIndex:(long)arg0;
- (long)applianceInfoIndexForKey:(NSString *)arg0;
- (void)reloadAppliances;
- (void)dealloc;
- (BRApplianceProvider *)init;
- (NSObject *)dataAtIndex:(long)arg0;

@end
