/* Runtime dump - ABMedicalIDAction
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMedicalIDAction : ABPropertyAction <HKMedicalIDViewControllerDelegate>
{
    int _medicalIDActionType;
    HKHealthStore * _healthStore;
    _HKMedicalIDData * _healthData;
}

@property (nonatomic) int medicalIDActionType;
@property (retain, nonatomic) HKHealthStore * healthStore;
@property (retain, nonatomic) _HKMedicalIDData * healthData;
@property (retain, nonatomic) CNContact * contact;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)performActionWithSender:(NSObject *)arg0;
- (int)medicalIDActionType;
- (_HKMedicalIDData *)healthData;
- (HKHealthStore *)healthStore;
- (void)setHealthData:(_HKMedicalIDData *)arg0;
- (void)setHealthStore:(HKHealthStore *)arg0;
- (void)medicalIDViewControllerDidCancel:(id)arg0;
- (void)medicalIDViewControllerDidSave:(id)arg0;
- (void)medicalIDViewControllerDidDelete:(id)arg0;
- (void)medicalIDViewControllerDidFinish:(id)arg0;
- (void)setMedicalIDActionType:(int)arg0;

@end
