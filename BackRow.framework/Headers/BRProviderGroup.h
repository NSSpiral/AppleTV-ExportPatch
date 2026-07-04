/* Runtime dump - BRProviderGroup
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl;
@interface BRProviderGroup : NSObject
{
    NSArray * _providers;
}

+ (NSArray *)groupWithProviders:(NSArray *)arg0;

- (long)dataCount;
- (NSArray *)providers;
- (long)groupIndexForHash:(id)arg0;
- (NSObject *)providerForDataAtGroupIndex:(long)arg0 providerIndex:(long *)arg1;
- (NSObject *)dataForGroupIndex:(long)arg0;
- (NSObject *)createControlAtGroupIndex:(long)arg0 currentControl:(BRControl *)arg1 requestedBy:(NSObject *)arg2;
- (NSObject *)hashForDataAtGroupIndex:(long)arg0;
- (BRProviderGroup *)initWithProviders:(NSArray *)arg0;
- (NSObject *)createControlsInGroupRange:(struct _NSRange)arg0 requestedBy:(NSObject *)arg1;
- (void)dealloc;

@end
