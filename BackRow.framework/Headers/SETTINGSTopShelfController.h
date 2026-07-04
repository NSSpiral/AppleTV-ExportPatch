/* Runtime dump - SETTINGSTopShelfController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRTopShelfController;

@class BRTopShelfView;
@interface SETTINGSTopShelfController : NSObject <BRTopShelfController>
{
    BRTopShelfView * _topShelf;
    <BRAppliance> * _appliance;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) <BRAppliance> * appliance;

- (<BRAppliance> *)appliance;
- (SETTINGSTopShelfController *)initWithAppliance:(<BRAppliance> *)arg0;
- (BRTopShelfView *)mainMenuShelfView;
- (void)selectCategoryWithIdentifier:(NSString *)arg0;
- (void)refresh;
- (void)dealloc;
- (void).cxx_destruct;

@end
