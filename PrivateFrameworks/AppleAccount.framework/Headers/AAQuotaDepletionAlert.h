/* Runtime dump - AAQuotaDepletionAlert
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAQuotaDepletionAlert : NSObject
{
    NSString * _dataclass;
}

- (AAQuotaDepletionAlert *)init;
- (void).cxx_destruct;
- (NSString *)_deviceSpecificLocalizedString:(NSString *)arg0;
- (void)showWithHandler:(id /* block */)arg0;
- (AAQuotaDepletionAlert *)initForDataclass:(ACDManagedDataclass *)arg0;
- (char)showIfNecessaryWithHandler:(id /* block */)arg0;

@end
