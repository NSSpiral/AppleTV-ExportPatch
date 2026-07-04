/* Runtime dump - ATVAction
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl, BRMerchant;
@interface ATVAction : NSObject
{
    NSDictionary * _parameters;
    BRControl * _control;
    BRMerchant * _merchant;
}

@property (retain) NSDictionary * parameters;
@property (retain) BRControl * control;
@property (retain) BRMerchant * merchant;

+ (ATVAction *)actionWithName:(NSString *)arg0;

- (BRMerchant *)merchant;
- (void)setMerchant:(BRMerchant *)arg0;
- (void)dealloc;
- (void)invoke;
- (NSDictionary *)parameters;
- (void)setParameters:(NSDictionary *)arg0;
- (void)setControl:(BRControl *)arg0;
- (BRControl *)control;

@end
