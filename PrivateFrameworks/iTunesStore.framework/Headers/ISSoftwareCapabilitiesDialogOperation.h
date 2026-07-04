/* Runtime dump - ISSoftwareCapabilitiesDialogOperation
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISSoftwareCapabilitiesDialogOperation : ISOperation
{
    NSDictionary * _mismatches;
    id _requiredCapabilities;
}

@property (readonly) NSDictionary * mismatches;
@property (readonly) id requiredCapabilities;

- (void)dealloc;
- (void)run;
- (NSArray *)requiredCapabilities;
- (void)_postDefaultDialog;
- (NSDictionary *)mismatches;
- (ISSoftwareCapabilitiesDialogOperation *)initWithRequiredCapabilities:(NSArray *)arg0 mismatches:(NSDictionary *)arg1;

@end
