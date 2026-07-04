/* Runtime dump - ABPropertyFaceTimeAction
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyFaceTimeAction : ABPropertyAction
{
    int _type;
    ABPropertyBestIDSValueQuery * _bestFaceTimeQuery;
}

@property (nonatomic) int type;
@property (retain, nonatomic) ABPropertyBestIDSValueQuery * bestFaceTimeQuery;

- (ABPropertyFaceTimeAction *)initWithContact:(CNContact *)arg0 propertyItems:(NSArray *)arg1;
- (void)_queryFaceTimeStatus;
- (ABPropertyBestIDSValueQuery *)bestFaceTimeQuery;
- (void)setBestFaceTimeQuery:(ABPropertyBestIDSValueQuery *)arg0;
- (void)performActionForItem:(NSObject *)arg0 sender:(NSObject *)arg1;
- (void)dealloc;
- (void)setType:(int)arg0;
- (int)type;

@end
