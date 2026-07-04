/* Runtime dump - MKActivityViewController
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKActivityViewController : UIActivityViewController <UIActivityViewControllerDelegate>
{
    <MKActivityViewControllerDelegate> * _activityControllerDelegate;
}

@property (weak, nonatomic) <MKActivityViewControllerDelegate> * activityControllerDelegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (MKActivityViewController *)initWithMapItem:(MKMapItem *)arg0 contact:(CNContact *)arg1 applicationActivities:(NSArray *)arg2 activityProviderDelegate:(NSObject *)arg3;
- (id /* block */)_activityHandler;
- (MKActivityViewController *)initWithSource:(NSObject *)arg0 destination:(NSObject *)arg1 applicationActivities:(NSArray *)arg2 routeProviderDelegate:(NSObject *)arg3;
- (<MKActivityViewControllerDelegate> *)activityControllerDelegate;
- (MKActivityViewController *)initWithMapItem:(MKMapItem *)arg0 contact:(CNContact *)arg1 applicationActivities:(NSArray *)arg2;
- (MKActivityViewController *)initWithSource:(NSObject *)arg0 destination:(NSObject *)arg1 applicationActivities:(NSArray *)arg2;
- (void)setActivityControllerDelegate:(<MKActivityViewControllerDelegate> *)arg0;
- (id /* block */)_completionHandler;
- (void).cxx_destruct;
- (void)activityViewControllerDidFinishAirdropTransfer:(UIActivityViewController *)arg0;

@end
