/* Runtime dump - ABAbstractPropertyGroup
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABAbstractPropertyGroup : NSObject
{
    NSArray * _people;
    <ABStyleProvider> * _styleProvider;
    char _hasChanges;
    ABUIPerson * _preinsertedPerson;
}

@property (retain, nonatomic) NSArray * people;
@property (retain, nonatomic) ABUIPerson * preinsertedPerson;
@property (nonatomic) char hasChanges;
@property (retain, nonatomic) <ABStyleProvider> * styleProvider;

- (void)reloadFromModel;
- (void)setHasChanges:(char)arg0;
- (void)updateRecord;
- (char)canSave;
- (ABUIPerson *)preinsertedPerson;
- (void)setPreinsertedPerson:(ABUIPerson *)arg0;
- (<ABStyleProvider> *)styleProvider;
- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (void)dealloc;
- (ABAbstractPropertyGroup *)init;
- (int)property;
- (char)hasChanges;
- (void)setPeople:(NSArray *)arg0;
- (NSArray *)people;

@end
