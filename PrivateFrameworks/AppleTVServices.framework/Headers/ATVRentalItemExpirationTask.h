/* Runtime dump - ATVRentalItemExpirationTask
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVRentalItemExpirationTask : ATVBackgroundTask
{
    ATVDataItem * _item;
}

@property (weak, nonatomic) ATVDataItem * item;

- (ATVDataItem *)item;
- (void)setItem:(ATVDataItem *)arg0;
- (char)perform;
- (void).cxx_destruct;
- (ATVRentalItemExpirationTask *)initWithDataItem:(ATVDataItem *)arg0;

@end
